class Solution {
public:
    int minimumWeight(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>> adj(n); // adj[u] = {v, w}
        for (auto& e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }

        const long long INF = LLONG_MAX;
        vector<vector<long long>> dist(n, vector<long long>(k + 1, INF));

        // min-heap: (distance, node, run_length)
        priority_queue<tuple<long long,int,int>,
                        vector<tuple<long long,int,int>>,
                        greater<>> pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while (!pq.empty()) {
            auto [d, u, c] = pq.top();
            pq.pop();
            if (d > dist[u][c]) continue; // stale entry

            for (auto& [v, w] : adj[u]) {
                int newRun = (labels[v] == labels[u]) ? c + 1 : 1;
                if (newRun > k) continue; // violates constraint
                long long nd = d + w;
                if (nd < dist[v][newRun]) {
                    dist[v][newRun] = nd;
                    pq.push({nd, v, newRun});
                }
            }
        }

        long long ans = INF;
        for (int c = 1; c <= k; c++) {
            ans = min(ans, dist[n - 1][c]);
        }
        return ans == INF ? -1 : (int)ans;
    }
};

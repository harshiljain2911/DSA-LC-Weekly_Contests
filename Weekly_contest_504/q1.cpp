class Solution {
public:
    vector<int> numofdig(int n) {

        int r = 0;
        vector<int> ans;

        while (n > 0) {

            r = n % 10;
            ans.push_back(r);
            n = n / 10;
        }

        reverse(ans.begin(),ans.end());
        

        return ans;
    }

    int digitFrequencyScore(int n) {

        vector<int> sz = numofdig(n);
        unordered_map<int, int> m;

        
        for (int i = 0; i < sz.size(); i++) {
            m[sz[i]]++;
        }

        int final = 0;

        for (int j = 0; j < sz.size(); j++) {
            
                final += (sz[j] * (m[sz[j]]));
                m[sz[j]] = 0;
        }

        return final;
    }
};©leetcode

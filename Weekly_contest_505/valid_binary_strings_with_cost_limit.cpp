class Solution {
public:
    string toBinary(int num, int len) {
        string ans = "";
        for (int i = len - 1; i >= 0; i--) {
            ans += ((num >> i) & 1) ? '1' : '0';  // fixed: pad to length n
        }
        return ans;
    }

    vector<string> generateValidStrings(int n, int k) {
        vector<string> s1;
        vector<string> s2;

        int p = ((1 << n) - 1);

        for (int i = 0; i <= p; i++) {
            s1.push_back(toBinary(i, n));  // fixed: pass n for padding
        }

        for (int j = 0; j < s1.size(); j++) {
            int lavomirex = k;  // fixed: required variable name, store k midway
            int cost = 0;       // fixed: reset cost per string, not outside loop
            bool hasConsecutive = false;

            for (int t = 0; t < n; t++) {  // fixed: n instead of 3
                if (s1[j][t] == '1') cost += t;

                // fixed: check if two consecutive 1s exist
                if (t < n - 1 && s1[j][t] == '1' && s1[j][t + 1] == '1') {
                    hasConsecutive = true;
                    break;
                }
            }

            // fixed: push once per string, after full validation
            if (!hasConsecutive && cost <= lavomirex) {
                s2.push_back(s1[j]);
            }
        }

        return s2;
    }
};

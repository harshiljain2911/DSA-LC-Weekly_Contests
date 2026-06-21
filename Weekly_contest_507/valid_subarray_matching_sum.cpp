class Solution {
public:
    int firstdigit(long long n) {
        while (n >= 10) {
            n /= 10;
        }
        return (int)n;
    }

    long long countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        long long count = 0;

        for (int i = 0; i < n; i++) {
            long long sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];

                if (firstdigit(sum) == x && sum % 10 == x)
                    count++;
            }
        }

        return count;
    }
};

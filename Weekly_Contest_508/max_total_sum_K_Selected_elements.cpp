class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        
        int n = nums.size()-1;
        unsigned long long sum = 0;
        while(k>0)
            {
                if(mul==0) sum+=nums[n--];
                else sum+=(1LL*nums[n--]*mul--);
                k--;
            }
        return sum;
    }
};

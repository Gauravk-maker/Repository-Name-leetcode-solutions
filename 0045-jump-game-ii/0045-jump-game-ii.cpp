class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1){
            return 0;
        }
        int dp[n];
        for(int i = 0; i<n; i++){
            dp[i] = 10000;
        }
        dp[0] = 0;
        for(int i = 1; i<n; i++){
            for(int j = 0; j<n; j++){
                if(j+nums[j] >= i){
            dp[i] = min(dp[i],dp[j]+1);
        }
            }
        }
        return dp[n-1];
    }
};
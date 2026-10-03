class Solution {
public:
    map<tuple<int, int, bool>, long long> dp;

    long long solve(int stair, int jump, bool canDown, int k) {

        if (stair > k + 1)
            return 0;

        auto state = make_tuple(stair, jump, canDown);

        if (dp.count(state))
            return dp[state];

        long long ans = 0;
        if (stair == k)
            ans = 1;
        ans += solve(stair + (1 << jump),jump + 1,true,k);

        if (canDown && stair > 0) {
            ans += solve(stair - 1,jump,false,k);
        }

        return dp[state] = ans;
    }

    int waysToReachStair(int k) {
        return solve(1, 0, true, k);
    }
};
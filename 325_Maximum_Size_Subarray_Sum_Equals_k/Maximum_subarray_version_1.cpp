//KUIZONG WU 22/11/2020
//Based on answer https://leetcode-cn.com/problems/maximum-size-subarray-sum-equals-k/solution/on-prefix-sum-hash-by-mike-meng/
//Runtime: 72ms / Memory usage: 17.6 MB
class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> find;
        find[0] = 0;
        for (int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
            if (find.find(sum) == find.end()){
                find[sum] = i + 1;
            }
            if (find.find(sum - k) != find.end())
            {
                ans = max(ans, i + 1 - find[sum-k]);
            }
        }
        return ans;
    }
};
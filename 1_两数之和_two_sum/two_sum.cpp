//KUIZONG WU 21/11/2020
//Based on the answer https://leetcode-cn.com/problems/two-sum/solution/liang-shu-zhi-he-by-leetcode-solution/
//Use hashmap(unordered map)
//Dynamic progamming
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> find;
        int count = 0; //index of nums
        for (int n : nums)
        {
            auto ans = find.find(target - nums[count]); //search the table to find the answer's index
            if (ans != find.end()) // if finding answer successfully
            {
                return {ans->second, count}; //return answer
            }
            find[nums[count]] = count; // insert this element into hashtable
            count++; //add index
        }
        return {};
    }
};
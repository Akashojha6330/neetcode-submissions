class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i =0;i<nums.size();i++){
            int d= target-nums[i];
            if(seen.count(d)){
                return {seen[d],i};
            }
            seen[nums[i]]=i;
        }
        return {};
    }
};

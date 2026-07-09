class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>seen;
       for(int i=0;i<nums.size();i++){
        int condition = target-nums[i];
        if(seen.find(condition)!=seen.end()){
            return {i,seen[condition]};
        }
        seen[nums[i]]=i;
       }
       return {0,0};
    }
};
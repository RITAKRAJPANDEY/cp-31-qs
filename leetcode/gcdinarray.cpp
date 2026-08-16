class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        while(nums[0]>0&&nums[nums.size()-1]>0){
            if(nums[0]>nums[nums.size()-1])nums[0]=nums[0]%nums[nums.size()-1];
            else nums[nums.size()-1]=nums[nums.size()-1]%nums[0];
            if(nums[0]==0)return nums[nums.size()-1];
            if(nums[nums.size()-1]==0)return nums[0];
        }
        return 0;
    }

};
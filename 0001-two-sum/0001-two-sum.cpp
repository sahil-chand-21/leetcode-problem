class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i=0;i< nums.size();i++){
            int one= i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[one]+nums[j]==target){
                    return {one,j};
                }
            }
        }
        
        return {};
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int small = INT_MIN;
        int large = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=large){
                small=large;
                large =nums[i];
            }
            else if(nums[i]<large && nums[i]>small){
                small =nums[i];
            }

        }
        return (large-1) * (small-1);
        
    }
};
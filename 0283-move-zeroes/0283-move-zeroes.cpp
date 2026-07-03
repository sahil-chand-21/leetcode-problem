class Solution {
public:
    void moveZeroes(vector<int>& nums) {
           int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        // int isZero=-1;

        // int n= nums.size();
        // if(n==1 && nums[0]==0){
        //     return;
        // }
        // for(int i= 0; i<n;i++){
        //     if(nums[i]==0){
        //         isZero = i;
        //         break;
        //     }
        // }
        // for(int j=isZero + 1;j<n;j++){
        //     if( nums[j]!=0){
        //         swap(nums[isZero],nums[j]);
        //     }
        // }

        
    }
};
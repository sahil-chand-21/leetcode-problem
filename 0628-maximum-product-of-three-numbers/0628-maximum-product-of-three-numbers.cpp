class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int l =nums.size();
         // 4,3,2,1 //4
         // -11,-10,5,4   => 5,4,-10,-11
         // [-100,-98,-1,2,3,4] => 4,3,2,1,-1,-98,-100
        sort(nums.begin(),nums.end(),greater<int>());
      int  result= nums[0]*nums[1]*nums[2]; // 
       int rnegative=nums[0]*nums[l-1]*nums[l-2];
        return max(result,rnegative) ;
        
    }
};
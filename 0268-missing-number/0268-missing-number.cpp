class Solution {
public:
    int missingNumber(vector<int>& nums) { // cane be done by sorting also
    
         int x=nums.size();
        int ans=x;
        for(int i=0;i<x;i++){
            ans= ans^i^nums[i]; // two xor  i ^elem^ //smjhoo
        }
        return ans;
        
    }
        
};
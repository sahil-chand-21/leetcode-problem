class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0; // xor is or could be reserve keyword
        for(int i=0;i<nums.size();i++){
            xorr =xorr ^ nums[i];

        }
        return xorr;
    }
};
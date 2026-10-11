class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long res=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int c=i+1;
            if(n%c==0 ){
                res+=nums[i]*nums[i];
            }

        }
        return res;
    }
};
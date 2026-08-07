class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        unordered_set<int>st(nums.begin(),nums.end());
        int ans =0;
        for(int i =0 ; i<n ;i++){
            if(st.find(i)==st.end()){
                ans =i; 
                break;
            }

        }
        return ans;
    }
};
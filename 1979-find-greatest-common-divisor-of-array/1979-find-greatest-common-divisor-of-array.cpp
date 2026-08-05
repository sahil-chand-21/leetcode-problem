class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn =*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int divide =1;
       divide =__gcd(mn,mx);
        return divide;
    }
};
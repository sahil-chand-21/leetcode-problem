class Solution {
public:
// using set  // brute force approach
    int removeDuplicates(vector<int>& nums) {
     set<int>unique;
     for(auto i :nums){
        unique.insert(i);

     }
     int a =0;
     for(int x : unique){
        nums[a]=x;
        a++;
     }

     return unique.size();
    }
};

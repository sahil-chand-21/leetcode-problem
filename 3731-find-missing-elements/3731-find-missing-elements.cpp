class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // we can sort and check that if every value  like +1  <== brute force
        //  second approch would be find small and large and check within the range
        
        int mn = *min_element(nums.begin(),nums.end());  //way to find min and max in vector
        int mx = *max_element(nums.begin(),nums.end());

        // using hashset bcoz it is optimized to find the elem then array to iterate through it all
        unordered_set<int>finder(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=mn ;i<=mx ;i++){
            if(finder.find(i)==finder.end()){
                ans.push_back(i);
            }
        }
    return ans;
    }

};
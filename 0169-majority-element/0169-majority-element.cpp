class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // iterate using two inner loop one loop point elem and other loop count if count > n/2
        // second approach using heatmap
        int n= nums.size();
        unordered_map<int,int>mp;
        for( int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto i : mp){
            if(i.second > n/2){
                return i.first;
            }
        }
        return -1;
        
    }
};
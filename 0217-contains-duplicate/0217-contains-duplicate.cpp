class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st ; 
        for(auto elem :nums){
            if(st.find(elem)!=st.end()){
                return true;
            }
            st.insert(elem);
        }
        return false;
    }
};
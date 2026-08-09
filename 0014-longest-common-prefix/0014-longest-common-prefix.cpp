class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // compare and check each element of the string using two for loop
        // or optimized way is to sort and chek the elem
        sort(strs.begin(),strs.end());
        //[car,dog,racecar]
        //[0,1,2]
        string first =strs[0];
        string last =strs[strs.size()-1];// first or last check kr rhe kyuki hame check krna hy kaha se differ kr rha kyuki sorting me to lg gye hy na f..., f...... f...k
        int n =min(first.size(),last.size());
        string ans ="";
        for(int i=0;i<n;i++ ){
            if( first[i]!=last[i]){
                break;
            }
            ans=ans+first[i];
        }
        return ans;
    }
};
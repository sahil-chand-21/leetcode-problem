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

        string ans ="";
        for(int i=0;i<first.size();i++ ){ // till first elem kyuki ham dhekna chahte ki isme saare elem ho
            if( first[i]!=last[i] || i>=last.size()){ // agr second string khtm ho gyi to error na ay
                break;
            }
            ans=ans+first[i];
        }
        return ans;
    }
};
class Solution {
public:
    string smallestPalindrome(string s) {
        //sort first half and then reverse // nlogn 
        //count freq and then add half+middle + last
        int n= s.length();
        int part = n /2 ;
        sort(s.begin(),s.begin()+ part); // sort for first half

        for(int i =0; i<part;i++){
            s[n -1-i]=s[i];
        }
        return s;
    }
};
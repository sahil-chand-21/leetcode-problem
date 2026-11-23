class Solution {
public:
    bool checkString(string s) {
        int j=0;
        for(int i=1;i<s.length();i++){
            
           if( s[i]=='a'&&s[j]=='b'){
               return false;
               
           }
        j=j+1;
        }
        return true;
    }
}; 
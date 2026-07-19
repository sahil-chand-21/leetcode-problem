class Solution {
public:
    int lengthOfLastWord(string s) {
        // 1.st store words in vector 
        //2. iterate left to right and count the words
        //3 go to last string avoid trailing space and count character

        int i = s.length()-1; // counts /0
        int count =0;

        while (i>=0 && s[i]==' '){
            i--; // heloo worldXX peeche ke space ko hta kr index hta
        } 
        // now count the char
        while(i>=0 && s[i]!=' '){
            i--;
            count++;
        }
        return count;
    }
};
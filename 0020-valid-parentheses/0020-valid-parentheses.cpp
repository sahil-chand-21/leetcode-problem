class Solution {
public:
    bool isValid(string s) {
      stack<char>box;

      for(char i : s){
        
        if(  i== '(' || i=='{' || i=='['){
            box.push(i) ;  // filling boxes with open bracket
        }
        else{
            if(box.empty()){
                return false;
            }
            if( box.top()=='(' && i!= ')'){
                return false;
            }
            if(box.top()=='[' && i!=']'){
                return false;
            }
            if( box.top()== '{' && i!='}'){
                return false;
            }
           box.pop(); // matching bracket hta do
        }

      }
      return box.empty();
    }
};
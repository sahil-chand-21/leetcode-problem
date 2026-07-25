class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
         while( n!=0){
            int digit = n% 10 ;
            v.push_back(digit);
            n=n/10;
         }

         int smallest = v[0];
         int largest =  INT_MIN;
         for( auto i : v){
            if(i > largest){
                smallest = largest;
                largest = i;
            }
            else if(i>smallest){
                smallest = i;
            }
         }
         return largest * smallest ;
        
    }
};
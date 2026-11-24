class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum =0,x=0;
        long long d=0,pow10=1;

        while(n>0){
            d= n%10;
            sum+=d;
            if(d>0){
                x+=d*pow10;
                pow10= pow10*10;
            }
            n=n/10;
        }
        return x*sum;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // we know that length of array is even and also and order follows one + and one - 
        // brute force approach is that store in temp array and then push
        // or the optimal way is 

    //     int n = nums.size();
    //     vector<int>list(n,0);
    //     for(int i=0;i<n;i++){
    //         if(nums[i]<0){
    //             list[i*2]=nums[i]; //error for the address
    //         }
    //         list[i]=nums[i];
    //     }
    //     return list;
    // }

    int n =nums.size();
    vector<int>output(n);
    int pos=0;
    int neg=1;
    for(int i=0; i<n;i++){
        if(nums[i]>0){
            output[pos]=nums[i];
            pos+=2;
        }
        else{
            output[neg]=nums[i];
            neg+=2;
        }
    }
    return output;
    }
};
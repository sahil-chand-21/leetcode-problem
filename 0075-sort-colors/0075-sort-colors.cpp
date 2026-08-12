class Solution {
public:
    void sortColors(vector<int>& nums) {
        // famous example of Dutch National Flag algorithm. where we divide the array into three parts
        // A.T.Q sort function use ni kr skte
        int low ,mid =0;
        int high =nums.size()-1;

        while( mid <=high){
            if(nums[mid] ==0){
                swap(nums[low],nums[mid]); // low bta rha hy kaha 0 ke liye jagah hogi
                low++;
                mid++;
            }
            else if(nums[mid]==1) mid++;

            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--; //last jagh fill ho gyi ab hut ja 
            }
        }
    }
};
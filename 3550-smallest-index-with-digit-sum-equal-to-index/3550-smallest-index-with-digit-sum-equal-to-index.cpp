class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i <n; i++) {
            int arr = nums[i];
            int digit=0;
            int sum = 0;
            while (arr > 0) {
                digit = arr % 10;
                sum += digit;
                arr = arr / 10;
            }

            if (sum== i ){
                return i;
            }
        }
        return -1;
    }
};
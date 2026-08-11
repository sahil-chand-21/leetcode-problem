class Solution {
public:
    int missingInteger(vector<int>& nums) {
        // find sequence // the answer is saying sequence is starting from [0]
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else
                break;
        }
        // sum ko array me find krega to time lagega to set me find krenge
        unordered_set<int> finder(nums.begin(), nums.end());
        while (finder.count(
            sum)) { // count give ki hay  0,1 // use as true or false
            sum++;
        }
        return sum;
    }
};
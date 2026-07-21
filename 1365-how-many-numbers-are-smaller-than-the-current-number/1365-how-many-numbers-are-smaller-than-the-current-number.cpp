class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // brute force approach  time complexity is 0(n^2)
        // int n= nums.size();
        // vector<int>ans(n);
        // for(int i=0;i<n;i++){
        //     int count =0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]<nums[i]){
        //             count++;
        //         }

        //     }
        //     ans[i] =count;
        // }
        // return ans;
        
        // the optimal approach is SORT AND HASHmap
        int n= nums.size();

        
        vector<int>cp=nums;
       
        sort(cp.begin(),cp.end());
        // cp=1,1,2,2,3,8
        
        unordered_map<int,int>map;
        for(int i =0 ;i<n;i++){
            if( map.find(cp[i]) == map.end()){
                map[cp[i]]=i;
            }
        }
            // {
                // 1:0
                // 2:2
                // 3:4
                // 8:5
                // }
                // now we have make vector to return only index
                // 0,0,2,2,4,5
                //iske aage ni aya
                vector<int>ans;
                for(int i=0;i<n;i++){
                    ans.push_back(map[nums[i]]);


                }

        
    return ans;
    }
};
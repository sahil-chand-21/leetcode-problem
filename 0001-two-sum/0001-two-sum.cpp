class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Create HashMap

 /*for each element


    complement = target - nums[i]

    if complement exists in map
        return indices

    otherwise
        put current number in map

        i will minus the index with the target to check if the rrequired number is there if there print its index..
        
    }*/
    unordered_map<int,int>mp;
    for ( int i =0 ;i<nums.size();i++){
        int left= target - nums[i];

        if(mp.find(left)!=mp.end()){ // left ko find kr last tk
            return {mp[left],i};
        }
        //nahi mila to
        mp[nums[i]]=i;
    }
    
 return {};
    };

};


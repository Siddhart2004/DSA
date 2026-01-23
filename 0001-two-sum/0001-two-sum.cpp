class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hm;
        for (int i=0;i<nums.size();i++){
            int num=nums[i];
            if (hm.find(target-num)!=hm.end()) {
                return{hm[target-num],i};
            }
            hm[num]=i;
        }
        return {}; 
    }
};

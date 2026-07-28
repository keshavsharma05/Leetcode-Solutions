class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(index.find(need)!=index.end()){
                return {index[need],i} ;
            }
            else{
                index[nums[i]]=i;
            }
        }return {};
    }
};
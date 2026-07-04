class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0,fast=1,uniqueCount=1;
        while(fast<nums.size()){
            if(nums[slow]==nums[fast]){
                fast++;
            }
            else if(nums[slow]<nums[fast]){
                slow++;
                nums[slow]=nums[fast];
                fast++;
                uniqueCount++;
            }
        }
        return uniqueCount;
    }
};
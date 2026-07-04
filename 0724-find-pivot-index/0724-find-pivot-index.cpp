class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;int total=0;
        int pivotIndex=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(leftSum==total-leftSum-nums[i]){
                pivotIndex=i;
                break;
            }
            else{
                pivotIndex=-1;
            }
            leftSum+=nums[i];
        }
        return pivotIndex;
    }
};
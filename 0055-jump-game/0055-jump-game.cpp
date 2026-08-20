class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest=0,n=nums.size()-1;
        for(int i=0;i<n;i++){
            if(i>farthest){
                return false;
            }
            farthest=max(farthest,i+nums[i]);
        }
        if(farthest>=n){
            cout<<n;
            return true;
        }
        return false;
    }
};




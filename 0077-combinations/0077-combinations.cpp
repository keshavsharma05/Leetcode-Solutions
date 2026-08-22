class Solution {
public:

    void back_track(int start,vector<vector<int>>&ans,vector<int>&curr,int n,int k){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<=n;i++){
            curr.push_back(i);
            back_track(i+1,ans,curr,n,k);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> current;
        int start=1;

        back_track(start,ans,current,n,k);
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        for(auto point:points){
            int distance=point[0]*point[0]+point[1]*point[1];
            if(pq.size()<k){
                pq.push({distance,point});
            }
            else if(distance<pq.top().first){
                pq.pop();
                pq.push({distance,point});
            }
        }
        vector<vector<int>> ans;

        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
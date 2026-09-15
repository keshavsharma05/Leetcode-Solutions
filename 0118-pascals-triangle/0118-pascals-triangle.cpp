class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>prevRow;
        for(int i=0;i<numRows;i++){
            vector<int>row;
            row.push_back(1);
            for(int j = 1; j < prevRow.size(); j++){
                int mid=prevRow[j-1]+prevRow[j];
                row.push_back(mid);
            }
            if(i>=1){
                row.push_back(1);
            }
            ans.push_back(row);
            prevRow=row;
        }
        return ans;
    }
};
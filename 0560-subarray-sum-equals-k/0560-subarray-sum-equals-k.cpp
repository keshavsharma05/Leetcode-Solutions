class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int prefix=0;
        int answer=0;
        int needed=0;
        freq[0]=1;

        for(int num:nums){
            prefix+=num;
            needed=prefix-k;

            if(freq.find(needed)!=freq.end()){
                answer+=freq[needed];
            }
            freq[prefix]++;
        }
        return answer;
    }
};
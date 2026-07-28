class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> an;
        for(char ch:s){
            an[ch]++;
        }
        for(char ch:t){
            an[ch]--;
        }
        for(auto p:an){
            if(p.second!=0){
                return false;
            }
        }
        return true;
    }
};
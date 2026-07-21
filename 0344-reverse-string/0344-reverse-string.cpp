class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int p=0,q=n-1;
        while(p<q){
            swap(s[p],s[q]);
            p++,q--;
        }
    }
};
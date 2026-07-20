class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxwords=0,words=0;
        for(int i=0;i<n;i++){
            words=0;
            for(char ch:sentences[i]){
                if(ch==' '){
                    words+=1;
                }    
            }
            if(maxwords<words){
                maxwords=words;
            }
        }
        return maxwords+1;
    }
};
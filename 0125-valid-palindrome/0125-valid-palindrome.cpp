class Solution { 
    public: 
    bool isPalindrome(string s) { 
        int n=s.size(); 
        int p=0,q=n-1; 
        while(p<q){ 
            if(!isalnum(s[p])){ 
                p++; 
            }
            else if(!isalnum(s[q])){ 
                q--; 
            } 
            else if(tolower(s[p])!=tolower(s[q])){ 
                return false; 
            } 
            else{ 
                p++,q--; 
            } 
        } 
        return true; 
    }             
};
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=0,j=1,temp=0;
        while(j<arr.size()){
            if(arr[i]==0 && arr[j]!=0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++,j++;
            }
            else if(arr[i]==0 && arr[j]==0){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
    }
};
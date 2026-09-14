class Solution {
public:
    int strStr(string heystack, string needle) {
        int n=heystack.length(),m=needle.length();
        for(int i=0;i<n-m+1;i++){
            int j=0;
            while(j<m){
                if(heystack[i+j]!=needle[j]){
                    break;
                }
                j++;
            }
            if(j==m)
            return i;
        }
        return -1;
    }
};
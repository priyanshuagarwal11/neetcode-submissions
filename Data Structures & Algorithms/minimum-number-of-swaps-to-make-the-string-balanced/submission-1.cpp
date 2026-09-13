class Solution {
public:
    int minSwaps(string s) {
        int bal=0;
        int minb=0;
        for( char ch:s){
            if(ch=='['){
                bal++;
            }else{
                bal--;
            }
            minb=min(minb,bal);
        }
        return (-minb+1)/2;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        for(int i=0;i<m;i++){
            if(haystack[i]==needle[0]){
                int x=0;
                // int f=1;
                for(int j=i;j<m;j++){
                    if(haystack[j]!=needle[x++]){
                        // f=0;
                        break;
                    }
                    if(x==n){
                        return i;
                    }
                }
                // if(f==1){
                //     return i;
                // // }
            }
        }
        return -1;
    }
};
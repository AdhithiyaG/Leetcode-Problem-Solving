class Solution {
public:
    bool convertBase(int n,int base){
        string str1="";
        while(n>0){
            str1+=(n%base);
            n/=base;
        }
        string str2;
        str2=str1;
        reverse(str1.begin(),str1.end());
        return str1==str2;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            if(!convertBase(n,i)){
                return false;
            }
        }
        return true;
    }
};
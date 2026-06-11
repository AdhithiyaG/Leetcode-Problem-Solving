class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
            bool flag=true;
            for(int j=0;j<n;j++){
                if(i!=j && s[j]==ch){
                    flag=false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        return -1;
    }
};
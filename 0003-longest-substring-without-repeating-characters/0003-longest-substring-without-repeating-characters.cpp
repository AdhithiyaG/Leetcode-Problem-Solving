class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLen=INT_MIN;
        int start=0;
        for(int i=0;i<n;i++){
            vector<int>vec(256,-1);
            start=i;
            for(int j=i;j<n;j++){
                if(vec[s[j]]==1){
                    break;
                }
                vec[s[j]]=1;
                maxLen=max(maxLen,j-start+1);
            }
        }
        return maxLen==INT_MIN?0:maxLen;
    }
};
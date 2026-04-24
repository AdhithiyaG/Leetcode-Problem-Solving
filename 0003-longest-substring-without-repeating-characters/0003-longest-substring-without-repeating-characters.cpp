class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n=s.length();
        // int maxLen=INT_MIN;
        // int start=0;
        // for(int i=0;i<n;i++){
        //     vector<int>vec(256,-1);
        //     start=i;
        //     for(int j=i;j<n;j++){
        //         if(vec[s[j]]==1){
        //             break;
        //         }
        //         vec[s[j]]=1;
        //         maxLen=max(maxLen,j-start+1);
        //     }
        // }
        // return maxLen==INT_MIN?0:maxLen;

        int n = s.length();
        int left = 0;
        int right = 0;
        int maxLen = INT_MIN;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) != mp.end() && mp[s[i]] >= left) {
                left = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen == INT_MIN ? 0 : maxLen;
    }
};
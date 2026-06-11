class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            vec.push_back(word);
        }
        reverse(vec.begin(), vec.end());
        stringstream ss2;
        for (string temp : vec) {
            ss2 << temp << ' ';
        }
        string ans = ss2.str();
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};
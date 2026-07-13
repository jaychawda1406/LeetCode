class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int ans = strs[0].length();

        for(int i=0;i<n;i++){
            int curr = 0;
            while(curr < strs[i].length() && strs[i][curr] == strs[0][curr]){
                curr++;
            }
            ans = min(ans,curr);
        }
        return strs[0].substr(0,ans);
    }
};
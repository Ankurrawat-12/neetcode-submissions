class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        sort(strs.begin(), strs.end());
        int j = 0;
        while(j != strs[0].size()){
            for(int i = 1; i < strs.size(); i++){
                if( strs[0][j] != strs[i][j] ){
                    return prefix;
                }
            }
            prefix += strs[0][j];
            j++;
        }


        return prefix;
    }
};
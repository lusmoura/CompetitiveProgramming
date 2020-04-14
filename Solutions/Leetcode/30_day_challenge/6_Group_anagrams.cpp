class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map <string, vector<string>> mp;
        
        for (string word : strs) {
            string s = word;
            sort(word.begin(), word.end());
            mp[word].push_back(s);
        }
        
        for (auto arrs : mp) {
            ans.push_back(arrs.second);
        }
        
        return ans;
    }
    
};   
class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int, int> mp;
        int ans = 0;
        
        for (int x : arr)  {
            mp[x]++;
        }
        
        for (auto x : mp) {
            if (mp.find(x.first + 1) != mp.end()) ans += mp[x.first];
        }

        return ans;
    }
};
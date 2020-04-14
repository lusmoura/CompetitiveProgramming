class Solution {
public:
    
    int findMaxLength(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        map <int, int> mp;
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i]) cnt++;
            else cnt--;
            
            if (cnt == 0) ans = max(ans, i+1);
            if (mp.find(cnt) != mp.end()) ans = max(ans, i-mp[cnt]);
            else mp[cnt] = i;
        }
        
        return ans;
    }
};
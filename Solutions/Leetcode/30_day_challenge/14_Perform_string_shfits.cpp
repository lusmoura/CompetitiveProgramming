class Solution {
public:
    
    string rotate(string s, int t) {
        reverse(s.begin(), s.begin() + t);
        reverse(s.begin() + t, s.end());
        reverse(s.begin(), s.end());
        
        return s;
    }
    
    string stringShift(string s, vector<vector<int>>& shift) {
        int t = 0;
        
        for (auto sh : shift) {
            if (sh[0]) t -= sh[1];
            else t += sh[1];
            
            t = (abs(t) % s.size()) * pow(-1, t < 0);
        }
        
        if (t > 0) s = rotate(s, t);
        else if (t < 0) s = rotate(s, s.size() + t);
        
        return s;
    }
};
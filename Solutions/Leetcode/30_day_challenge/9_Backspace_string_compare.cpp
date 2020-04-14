class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int s = S.size()-1;
        int t = T.size()-1;
        int hts = 0;
        int htt = 0;
        
        while (s >= 0 || t >= 0) {
            
            while (s >= 0) {
                if (S[s] == '#') {
                    hts++;
                } else if (hts) {
                    hts--;
                } else break;
                s--;
            }
            
            while (t >= 0) {
                if (T[t] == '#') {
                    htt++;
                } else if (htt) {
                    htt--;
                } else break;
                t--;
            }
            
            if ((s >= 0) && (t >= 0) && (S[s] != T[t])) return false;
            if ((s < 0 && t >= 0) || (s >= 0 && t < 0)) return false;
            
            s--; t--;            
        }
        
        return true;
    }
};
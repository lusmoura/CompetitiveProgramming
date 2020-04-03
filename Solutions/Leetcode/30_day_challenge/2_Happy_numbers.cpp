class Solution {
public:
    bool isHappy(int n) {
        
        for (int i = 0; i < 200; i++) {
            int aux = 0;
            
            while (n) {
                aux += (n % 10) * (n % 10);
                n /= 10;
            }
            
            n = aux;
            
            if (n == 1) return true;
        }
        
        return false;
    }
};
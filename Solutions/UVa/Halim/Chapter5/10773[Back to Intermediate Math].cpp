#include <bits/stdc++.h>

using namespace std;

int main(){

    double d, v, u, n;
    int cont = 1;
    cin >> n;

    while(n--){
        cin >> d >> v >> u;
        
        if(!u || !v || v>= u) {
            cout << "Case " << cont++ << ": ";
            cout << "can't determine\n";
            continue;
        }

        double fp = d/u;
        double sp = d/sqrt(u*u - v*v);

        cout << "Case " << cont++ << ": ";
        cout << fixed << setprecision(3) << abs(sp - fp) << '\n';
    }
    
    return 0;
}
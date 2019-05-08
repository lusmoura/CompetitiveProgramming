#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int r, n, cont = 1;
    
    while(cin >> r >> n, r){
        long long int ans = (r-1)/n;
        
        cout << "Case " << cont << ": ";
        if(ans > 26) cout << "impossible\n";
        else cout << ans << '\n';
        cont++;
    }

    return 0;
}
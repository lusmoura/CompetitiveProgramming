#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;  cin >> n;
    
    for(int i = 1; i <= n; i++) {
        vector<int> vec;
        int m; cin >> m;
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());

        cout << "Case " << i << ": ";
        cout << vec[m/2] << endl;
    }

    return 0;
}
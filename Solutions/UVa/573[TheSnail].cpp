#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	double height, day, night, factor;

	while(cin >> height >> day >> night >> factor && height) {
		
		double currDist = 0, drop = day*factor/100.0;
		int ans = 1;

		while(true){
			currDist += day;
			day = max(0.0, day - drop);

			if(currDist > height) {
				cout << "success on day " << ans << endl;
				break;
			}
			
			currDist -= night;

			if(currDist < 0) {
				cout << "failure on day " << ans << endl; 
				break;
			} 
			
			ans++;
			
		}
	}

	return 0;
}
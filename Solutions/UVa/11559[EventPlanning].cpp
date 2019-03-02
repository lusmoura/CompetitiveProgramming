#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int part, budget, hotels, weeks;

	while(cin >> part >> budget >> hotels >> weeks) {
		int ans = INF;

		while(hotels--) {
			int price; cin >> price;

			for(int i = 0; i < weeks; i++) {
				int beds; cin >> beds;

				if(beds >= part && price * part <= budget) {
					ans = min(ans, price * part);
				}
			}
		}

		if(ans != INF) cout << ans << endl;
		else cout << "stay home" << endl;
	}

	return 0;
}
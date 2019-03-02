#include <bits/stdc++.h>

using namespace std;

#define MAX 102

double dre[MAX];

int main(int argc, const char *argv[]){
	
	// cin.tie(0);
 	// ios_base::sync_with_stdio(0);
	
	int duration, drep, month;
	double down, amount, val;
	
	while(cin >> duration >> down >> amount >> drep && duration >= 0) {
		
		while(drep--) {
			cin >> month >> val;
			
			for(int i = month; i < MAX; i++) dre[i] = val;
		}
		

		month = 0;
		double portion = amount/duration;
		val = (amount + down) * (1 - dre[month]);

		while(val < amount) {
			amount -= portion;
			val *= (1 - dre[++month]);
		}
		
		cout << month << " month";
		if(month != 1) cout << "s";
		cout << endl;
	}

	return 0;
}
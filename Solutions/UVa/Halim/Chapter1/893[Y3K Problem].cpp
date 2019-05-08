#include <bits/stdc++.h>

using namespace std;

int lastDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int n, d, m, a;

int isLeap(int i){
	return ((i % 4 == 0) && ((i % 100 != 0) || (i % 400 == 0)));
}

int numDays(){
	int cnt = 0;
	for(int i = 1; i < a; i++) cnt += 365 + isLeap(i);
	for(int i = 1; i < m; i++) cnt += lastDay[i - 1];
	cnt += d;
	
	return m > 2 && isLeap(a) ? ++cnt : cnt;
}

void solve(int val) {
	int aa = 1;
	int mm = 1;

	while(val >= 365) {
		if(val <= (isLeap(aa) + 365)) break;
		val -= (isLeap(aa) + 365);
		aa++;
	}

	
	if(val){
		if(isLeap(aa)) lastDay[1]++;
		while(val > lastDay[mm - 1]) {
			val -= (lastDay[mm - 1]);
			mm++;
		}
	}
	cout << val << " " << mm << " " << aa << "\n";
}

int main(){
	while(cin >> n >> d >> m >> a, n) {
		lastDay[1] = 28;
		int val = n + numDays();
		solve(val);
	}	
}
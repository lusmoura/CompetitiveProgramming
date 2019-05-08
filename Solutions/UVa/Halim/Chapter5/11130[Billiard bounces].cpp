#include <bits/stdc++.h>

#define PI 3.1415926535

using namespace std;

int main(){
	double a, b, v, A, s;
	int cnt = 1;

	while(cin >> a >> b >> v >> A >> s, a) {
		double d = v*s/2.0;

		int v = (cos(A*PI/180.0) * d + a/2.0)/a;
		int h = (sin(A*PI/180.0) * d + b/2.0)/b;

		cout << v << " " << h << "\n";
	}

	return 0;
}
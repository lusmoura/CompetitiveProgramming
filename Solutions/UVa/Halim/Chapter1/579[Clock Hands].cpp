#include <bits/stdc++.h>

using namespace std;

int main() {
	double n, m;
	
	while(scanf("%lf:%lf", &n, &m), n || m){
		double ha = (n + m/60) * 30;
		double ma = m * 6;

		double ans = ha-ma;
		if(ans < 0) ans *= -1;
		if(ans > 180) ans = 360 - ans;
		
		printf("%.3lf\n", ans);
	}

	return 0;
}
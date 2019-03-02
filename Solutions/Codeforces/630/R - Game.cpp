#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	long long int n;

	cin >> n;

	n %= 2;

	if(n == 0) cout << "2";
	else cout << n;

	return 0;
}
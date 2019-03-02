#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push
#define watch(x) cout << (#x) << " is " << (x) << endl

typedef long long ll;

using namespace std;

priority_queue <int> a;
priority_queue <int> b;

ll ansa, ansb;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n, aux;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux;
		a.pb(aux);
	}

	for(int i = 0; i < n; i++){
		cin >> aux;
		b.pb(aux);
	}

	int turno = 0;
	while(a.size() && b.size()){
		turno = !turno;
		if(a.top() > b.top()){
			ansa += a.top();
			a.pop();
		} else b.pop();

		if(!b.size() || !a.size()) break;

		turno = !turno;
		if(b.top() > a.top()){
			ansb += b.top();
			b.pop();
		} else a.pop();
	}

	while(a.size()){
		if(!turno) ansa += a.top();
		a.pop();		
		turno = !turno;
	}

	while(b.size()){
		if(turno) ansb += b.top();
		b.pop();
		turno = !turno;
	}
	
	cout << ansa - ansb << endl;
	return 0;
}
#include <iostream>

using namespace std;
#define MAX 200005

int vet[MAX];
int mov[MAX];

int main(){
	
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> vet[i];
	}

	string s; cin >> s;

	for(int i = 1; i < n; i++) {
		mov[i] = mov[i-1] + (s[i-1] == '1'); 
	}

	for(int i = 1; i <= n; i++) {
		if(i - vet[i] != mov[i-1] - mov[vet[i] - 1]) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}
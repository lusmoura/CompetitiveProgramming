#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

int ocr[MAX], vet[MAX], ans[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, maior = 0, num;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> vet[i];
	}

	for (int i = 0; i < n; ++i){
		memset(ocr, 0, sizeof(ans));
		maior = 0;

		
		for (int j = i; j < n; ++j){
			num = vet[j];
			ocr[num]++;

			if(ocr[num] > ocr[maior] || (ocr[num] == ocr[maior] && num < maior)){
				maior = num;
			}

			ans[maior]++;
		}
	}

	for (int i = 1; i <= n; ++i) {
		cout << ans[i] << " ";
	}

	cout << "\n";

	return 0;
}
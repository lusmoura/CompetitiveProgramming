#include <bits/stdc++.h>

using namespace std;
vector <long long int> vec;
long long int freq[1000006];

int main(int argc, char const *argv[]){
	long long int n, q, aux1, aux2;
	
	cin >> n >> q;
	
	for(int i = 0; i < n; i++){
		cin >> aux1;
		vec.push_back(aux1);
	}	

	for(int i = 0; i < q; i++){
		cin >> aux1 >> aux2;
		freq[aux1-1]++;
		freq[aux2]--;
	}
	
	for(int i = 0; i < n; i++){
		freq[i] = freq[i] + freq[i-1];
	}

	sort(freq, freq+n);
	sort(vec.begin(), vec.end());

	aux1 = 0;
	for(int i = 0; i < n; i++){
		aux1 += freq[i]*vec[i];
	}
	cout << aux1 << endl;
	return 0;
}
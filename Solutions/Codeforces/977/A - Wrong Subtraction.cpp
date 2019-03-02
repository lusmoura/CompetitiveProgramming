#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){

	long long int n, k, cont = 1;;
	scanf("%lld %lld", &n, &k);

	while(cont <= k && n > 1){
		if(n%10!=0){
			n--;
			cont++;
		}
		else{
			n /= 10;
			cont++;
		}
	}

	printf("%lld\n", n);
	return 0;
}
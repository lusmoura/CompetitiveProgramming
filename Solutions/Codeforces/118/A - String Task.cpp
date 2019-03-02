#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int isVowel(char a){
	return (a == 'a') || (a == 'o') || (a == 'y') || (a == 'e') || (a == 'u') || (a == 'i');
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	int size = s.size();
	for(int i = 0; i < size; i++){
		if(!isVowel(tolower(s[i]))) cout << "." << (char)tolower(s[i]);
	}

	cout << endl;

	return 0;
}
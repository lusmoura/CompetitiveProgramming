#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	int requirements, proposals, num, turn = 1;
	double value; 
	string name, ans, x;

	while(cin >> requirements >> proposals, requirements) {
		if(turn > 1) printf("\n");
		
		bool compliant = false;
		double bestValue = INF;
		int currNum = -1;
		cin.ignore();

		for(int i = 0; i < requirements; i++) getline(cin, x);

		while(proposals--) {
			getline(cin, name);
			scanf("%lf %d", &value, &num);
			cin.ignore();
			
			for(int j = 0; j < num; j++) getline(cin, x);

            if (num > currNum || (num == currNum && (value < bestValue))) {
                ans = name;
                bestValue = value;
                currNum = num;
            }

		}

		printf("RFP #%d\n%s\n", turn++, ans.c_str());
	}

	return 0;
}
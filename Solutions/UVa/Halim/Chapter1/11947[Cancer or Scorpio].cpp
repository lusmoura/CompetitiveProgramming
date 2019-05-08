#include <bits/stdc++.h>

using namespace std;

pair <string, string> signs[12];
int limits[13] = {0, 21, 20, 21, 21, 22, 22, 23, 22, 24, 24, 23, 23};
int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int getDay(string s){
	return stoi(s.substr(2 , 2));
}

int getMonth(string s){
	return stoi(s.substr(0 , 2));
}

int getYear(string s){
	return stoi(s.substr(4 , 4));
}

int isLeap(int i) {
	return ((i % 4 == 0) && ((i % 100 != 0) || (i % 400 == 0)));
}

string getSign(int day, int month) {
	if(day < limits[month]) return signs[month].first;
	return signs[month].second;
}

void initSigns() {
	signs[1] = {"capricorn", "aquarius"};
	signs[2] = {"aquarius", "pisces"};
	signs[3] = {"pisces", "aries"};
	signs[4] = {"aries", "taurus"};
	signs[5] = {"taurus", "gemini"};
	signs[6] = {"gemini", "cancer"};
	signs[7] = {"cancer", "leo"};
	signs[8] = {"leo", "virgo"};
	signs[9] = {"virgo", "libra"};
	signs[10] = {"libra", "scorpio"};
	signs[11] = {"scorpio", "sagittarius"};
	signs[12] = {"sagittarius", "capricorn"};
}

int main(){
	
	int n; cin >> n;
	string s;

	initSigns();

	for(int i = 1; i <= n; i++) {
		cin >> s;
		
		int day = getDay(s);
		int month = getMonth(s);
		int year = getYear(s);
		
		if(month == 2 && isLeap(year)) days[2] = 29; 
		else days[2] = 28;
		
		int daysLeft = 279;
		
		while(daysLeft--) {

			day++;
			
			if(day == days[month]+1) {
				day = 1;
				month++;

				if(month == 2 && isLeap(year)) 
					days[2] = 29;

				if(month == 12) {
					month = 1;
					year++;
				}
			}
		}
		
		cout << i << " ";
		cout << setw(2) << setfill('0') << month << "/"  << setw(2) << setfill('0') << day << "/" << year << " ";
		cout << getSign(day, month) << '\n';
	}

	return 0;
}
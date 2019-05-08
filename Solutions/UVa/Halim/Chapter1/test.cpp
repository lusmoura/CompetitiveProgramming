#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

map<int, pair<string, string> > signs;
int limits[] = {0,21,20,21,21,22,22,23,22,24,24,23,23};
int months[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

string DayorMonthToString ( int Number )
{
	ostringstream ss;
	if(Number<10){
		ss<<0;
	}
	ss << Number;
	return ss.str();
}

string YearToString ( int Number )
{
	ostringstream ss;
	if(Number<10){
		ss<<"000";
	}else if(Number<100){
		ss<<"00";
	}else if(Number<1000){
		ss<<"0";
	}
	ss << Number;
	return ss.str();
}


bool isLeap(int year){
	if (year % 400 == 0){
		return true;
	}else{
		if(year % 4 == 0){
			if(year % 100 != 0){
				return true;
			}
		}
		return false;
	}
}

void gestation(int& day, int& month, int& year){
	if( month == 2 and isLeap(year) ){
		months[2] = 29;
	}
	int sumDays = 280 - (months[month] - day); // 40 weeks are 280 days
	month++;
	while(true){
		if(month > 12){
			month = 1;
			year++;
		}
		if( month == 2 and isLeap(year) ){
			months[2] = 29;
		}
		if(sumDays <= months[month]){
			break;
		}else{
			sumDays -= months[month];
		}
		month++;
	}

	day = sumDays;
	
}



string zodiacSign(int d, int m, int y){
	if( d < limits[m] ){
		return signs[m].first;
	}else{
		return signs[m].second;
	}
}



int main(){
	
	signs[1] = make_pair("capricorn", "aquarius");
	signs[2] = make_pair("aquarius", "pisces");
	signs[3] = make_pair("pisces", "aries");
	signs[4] = make_pair("aries", "taurus");
	signs[5] = make_pair("taurus", "gemini");
	signs[6] = make_pair("gemini", "cancer");
	signs[7] = make_pair("cancer", "leo");
	signs[8] = make_pair("leo", "virgo");
	signs[9] = make_pair("virgo", "libra");
	signs[10] = make_pair("libra", "scorpio");
	signs[11] = make_pair("scorpio", "sagittarius");
	signs[12] = make_pair("sagittarius", "capricorn");
	


	int N,i;
	string date,MM,DD,YYYY;
	int day, month, year;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		months[2] = 28;
		
		cin>>date;
		
		MM=date.substr(0,2);
		month = atoi(MM.c_str());
		DD=date.substr(2,2);
		day = atoi(DD.c_str());
		YYYY=date.substr(4,4);
		year = atoi(YYYY.c_str());
		

		gestation(day,month,year);

		printf("%d %s/%s/%s %s\n",i,DayorMonthToString(month).c_str(),DayorMonthToString(day).c_str(),YearToString(year).c_str(), zodiacSign(day,month,year).c_str() );
	}

	return 0;
}
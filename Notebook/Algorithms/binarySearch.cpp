/*Binary search
	O(log(N))
*/

#include<bits/stdc++.h>

using namespace std;

int v[MAX];
int key;
int size;

int binarySeachRec(int low, int high){
	if(low > high) 
		return -1;
	
	int mid = (high+low)/2;

	if(v[mid] == key) 
		return mid;
	else if(key < v[mid]) 
		return binarySeachRec(low, mid-1);
	else 
		return binarySeachRec(mid+1, high);
}

int busca_binaria(){
	int low = 0, high = size, mid;
	while(low <= high){
		mid = (low+high)/2;
		
		if(v[mid] == key) 
			return mid;
		if(v[mid] > key) 
			low = mid + 1;
		if(v[mid] < key) 
			high = mid - 1;
	}
	return -1;
}

int main(int argc, const char *argv[]){
	cin.tie(0);
 	ios_base::sync_with_stdio(0);
	
	return 0;
}
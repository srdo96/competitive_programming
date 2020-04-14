#include <bits/stdc++.h>

using namespace std;

int linearSearch(int A[], int arraySize, int value){
	int opinion = 0;
	for(int i = 0; i < arraySize; i++){
		if(value == A[i]){
			opinion = 1;
			break;
		}
	}
	return opinion;
}


int main(){
	int n; 
	cin >> n;
	int m[n];
	for(int i = 0; i < n; i++){
		cin >> m[i];
	}
	int opinions = linearSearch(m, n, 1);
	
	if(opinions == 1)
		cout << "HARD";
	else
		cout << "EASY";
}

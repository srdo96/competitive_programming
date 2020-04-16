#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string layer ="I hate ";
	//string that = "that ";
	string ilove = "that I love ";
	string ihate = "that I hate ";
	
	if(n == 1){
		cout << "I hate it";
	}
	else{
		for(int i = 2; i < n+1; i++){
			if(i % 2 == 0){
				layer = layer +  ilove;
			}
			else
				layer = layer + ihate;
		}
		cout << layer + "it";
	}
}

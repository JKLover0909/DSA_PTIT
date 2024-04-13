#include<bits/stdc++.h>
using namespace std;

int tien[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	int t; cin >> t;
	while(t--){
		int n, count = 0; cin >> n;
		for(int i=9; i>=0; i--){
			while(n>=tien[i]){
				n -=tien[i];
				count++;
			}
		}
		cout << count <<endl;	
	}
}
#include<bits/stdc++.h>
using namespace std;

int n, k, X[10001];

void Try(int i){
	for(int j = X[i-1]+1; j<=n-k+i; j++){
		X[i] = j;
		if(i == k){
			for(int j = 1; j<= k; j++){
				cout << X[j];
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
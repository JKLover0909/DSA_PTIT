#include<bits/stdc++.h>
using namespace std;

int n, X[10001];
bool used[100];

void Try(int i){
	for(int j = 1; j<=n; j++){
		if(used[j]==0){
		X[i] = j;
		used[j]=1;
		if(i == n){
			for(int k = 1; k<= n; k++){
				cout << (X[k]);
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
		used[j]=0;
	    }
    }
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		while(n){
			int i = 0;
			X[i] = n%10;
			n/=10;
			i++;
		}
	}
	memset(used , false, sizeof(used));
	Try(1);
}
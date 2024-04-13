#include<bits/stdc++.h>
using namespace std;

int n, X[100];


void Try(int i, int sum){
	for(int j = X[i-1]; j>=1; j--){
		if(sum + j <= n){
			X[i] = j;
			sum += X[i];
			if(sum == n){
				cout <<"(";
				for(int k = 1; k<i; k++){
					
					cout << X[k] <<" ";
				}
				cout <<X[i];
				cout<<")";
				cout << " ";
			}
			else {
				Try(i+1,sum);
			}
			sum -= X[i];
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
	cin >> n;
	X[0] = n;
	Try(1,0);
	cout << endl;
   }
}
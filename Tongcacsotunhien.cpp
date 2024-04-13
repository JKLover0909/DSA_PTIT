#include<bits/stdc++.h>
using namespace std;

int n, Y[100][100], X[100];
int count = 0;


void Try(int i, int sum){
	for(int j = X[i-1]; j>=1; j--){
		count = 0;
		if(sum + j <= n){
			X[i] = j;
			sum += X[i];
			if(sum == n){
				count++;
				for(int k = 1; k<i; k++){
					X[k] = Y[count][k];
				}
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
	cout << count;
   }
}
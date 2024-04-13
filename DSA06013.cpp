#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a >  b;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k, c=-1; cin >> n >> k;
		int A[n];
		for(int i = 0; i<n; i++){
			cin >> A[i];
			if (A[i] == k){
				c++;
			}
		}
		if(c>=0){
        cout << c+1<< endl;}
        else cout << c<<  endl;
	}
}
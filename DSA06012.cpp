#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a >  b;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int A[n];
		for(int i = 0; i<n; i++){
			cin >> A[i];
		}
		sort(A, A+n, cmp);
		for(int i = 0; i<k; i++){
			cout << A[i]<<" ";
		}
		cout << endl;
	}
}
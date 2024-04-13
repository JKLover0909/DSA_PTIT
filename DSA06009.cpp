#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k,count=0;
		cin >> n >> k;
		int A[n];
		cin >> A[0];
		for(int i =1; i<n; i++){
			cin >> A[i];
			for(int y = 0; y<i; y++){
				if (A[i]+A[y]==k) count++;
			}
		}
		cout << count << endl;
	}
}

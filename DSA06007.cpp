#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n ,a,b; cin >> n;
		int A[n], B[n];
		for(int i = 0; i<n; i++){
			cin >> A[i];
			B[i] = A[i];
		}
		sort(B,B+n);
		for(int i = 0; i<n; i++){
			if (A[i]!=B[i]){
				a = i;
				break;
			}
		}
		for(int i = n-1; i>=0; i--){
			if (A[i]!=B[i]){
				b = i;
				break;
			}
		}
		cout << a+1 <<" "<< b+1<< endl; 
	}
}

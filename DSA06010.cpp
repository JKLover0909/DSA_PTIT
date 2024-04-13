#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int A[n];
		set<int> se;
		for(int i =0; i<n;  i++){
			cin >> A[i];
			while(A[i]>0){
				se.insert(A[i]%10);
				A[i]/=10;
			}
		}
		for(auto x : se ){
			cout << x << " ";
		}
		cout << endl;
	}
}
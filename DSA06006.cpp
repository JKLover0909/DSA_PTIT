#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a; cin >> a;
		multiset<int> se;
		int A[a+1];
		for(int i = 0; i<a; i++){
			cin >> A[i];
			se.insert(A[i]);
		}
		for(auto x : se) cout << x <<" ";
		cout << endl;
	}
}
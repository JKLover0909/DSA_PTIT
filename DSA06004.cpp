#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int C[100001] = {0};
		set<int> se;
		int a, b, c;
		cin >> a >> b;
		int d= a+b;
		while(d--){
			cin >> c;
			se.insert(c);
			C[c]++;
		}
		for(auto x : se) cout << x <<" ";
		cout << endl;
		for(auto x : se){
			if (C[x]>=2) cout << x<<" ";
		}
		cout << endl;
	}
}
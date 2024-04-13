#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a, b, c;
		multiset<int> se;
		cin >> a >> b;
		for(int i = 0; i<a+b; i++){
			cin >> c;
			se.insert(c);
		}
		for(auto x :se) cout << x <<" ";
		cout << endl;
	}
}
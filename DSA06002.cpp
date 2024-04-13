#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		multimap<int, int> mp;
		int a, b,c;
		cin >> a >> b;
		for(int i = 0; i<a; i++){
			cin >> c;
			mp.insert({abs(b-c),c
			});
		}
		for(auto x : mp){
			cout << x.second <<" ";
		}
		cout << endl;
	}
}
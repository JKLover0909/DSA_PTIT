#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m, n, k, z;
		cin >> m >> n >> k;
		multiset<int> se;
		vector<int> v;
		for(int i = 0; i<m+n; i++){
			cin >> z;
			se.insert(z);
		}
		for(auto x : se){
			v.push_back(x);
		}
		cout << v[k-1]<<endl;
    }
}
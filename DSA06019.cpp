#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second ){
		return a.first < b.first;
	}
		return a.second > b.second;
	}
int main(){
	int t; cin >> t;
	while(t--){
		map<int,int> mp;
		int n,z; cin >> n;
		for(int i = 0; i<n; i++){
			cin >> z;
			mp[z]++;
		}
		vector<pair<int,int>> v(mp.begin(),mp.end());
		sort(v.begin(),v.end(), cmp);
		for(auto x : v){
			while(x.second--){
				cout << x.first<<" ";
			}
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		deque<int> dp;
		for(int i = 0; i<m; i++){
			dp.push_back(a[i]);
		}
		cout << *max_element(dp.begin(),dp.end())<<" ";
		for(int i = m; i<n; i++){
			dp.pop_front();
			dp.push_back(a[i]);
			cout << *max_element(dp.begin(),dp.end())<<" ";
	}
	cout << endl;
}
}
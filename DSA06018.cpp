#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n ;
		int min = 1e5+9 ,max = 0, count= 0;
		ll a[n];
		set<ll> se;
		for(int i =0; i<n; i++){
			cin >> a[i];
			if(a[i]>=max) max = a[i];
			if(a[i]<=min) min = a[i];
			se.insert(a[i]);
		}
		int g = se.size();
		cout << max - min +1-g << endl;
	}
}
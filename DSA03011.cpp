#include<bits/stdc++.h>
using namespace std;
using ll  = long long;
ll M = 1e9+7;
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		long long val;
		priority_queue<int, vector<int>, greater<int>> a;
		for(ll i = 0; i<n; i++){	
			cin >> val;
			val%=M;
			a.push(val);
		}
		long long res = 0;
		while(a.size()>1){
			long long x = a.top(); a.pop();
			long long y = a.top(); a.pop();
			a.push((x+y)%M);
			res  += x+y;
			res%=M;
		}
		cout << res << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int mod = 1e9+7;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x[n];
		for(int i = 0; i <n; i++){
			cin >> x[i];
		}
		sort(x,x+n);
		ll sum = 0;
		for(int i = 0; i<n; i++){
			sum+=(i*x[i]);
			sum%=mod;
		}
		cout << sum << endl;
	}
}
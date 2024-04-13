#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(ll n, ll k){
	if(k%2==1) return 1;
	ll a = (ll)pow(2,n-1);
	if(a==k) return n;
	if (k<a) return solve(n-1,k);
	else return solve(n-1,k-a);
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << solve(n,k)<< endl;
	}
}
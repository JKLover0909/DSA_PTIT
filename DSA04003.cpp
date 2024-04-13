#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll M= 123456789;
ll luythua (ll n, ll k){
	if (k==1) return n;
	if (k==0) return 1;
	ll x =  luythua(n,k/2);
	x=(x*x)%M;
	if(k%2==0) return x%M;
	else return (n*x)%M;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << luythua(2,n-1)<<endl;
	}
}
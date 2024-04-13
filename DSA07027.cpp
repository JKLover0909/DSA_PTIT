#include<bits/stdc++.h>
using ll  = long long;
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n];
		for(ll i = 0; i<n; i++){
			cin >> a[i];
		}
		stack<ll> st;
		ll res[n];
		for(ll i = n-1; i>=0; i--){
			while(!st.empty() && st.top()<= a[i]) st.pop();
			res[i] = st.empty() ? -1 : st.top();
			st.push(a[i]);
		}
		for(auto i : res) cout << i <<" ";
	}
}
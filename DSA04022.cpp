#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll X[93];

ll find(ll n, ll k){
   if(k%2==1) return 1;
   ll z = pow(2,n-1);
   if(z==k) return n;
   if(k<z) return find(n-1,k);
   else return find(n-1,k-z);
}

int main(){
	int t; cin >> t;
	ll n, k;
	while(t--){
		cin >> n >>k;
		char a = 'A';
		ll g =  find(n,k);
		a = a+g-1;
		cout << a << endl;
	}
}

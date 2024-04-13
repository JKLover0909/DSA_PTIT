#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll M = 1e9 +7, n;

struct matrix {
	ll x[11][11];
};

matrix operator * (matrix a, matrix b){
	matrix c;
	for(ll i = 0; i<n; i++){
		for(ll j = 0; j<n;j++){
			c.x[i][j] = 0;
			for(ll k = 0 ; k<n; k++){
				c.x[i][j] = (c.x[i][j] + a.x[i][k]*b.x[k][j]%M)%M;
			}
		}
	}
	return c;
}

matrix luythua (matrix a, int n){
	if (n ==1) return a;
	matrix x = luythua(a,n/2);
	if(n%2==0) return x*x;
	else return a*x*x;
}

int main(){
	int t; cin >> t;
	while(t--){
		int k;
		cin >> n >> k;
		matrix a;
		for(ll i = 0; i<n; i++){
		for(ll j = 0; j<n;j++){
			cin >> a.x[i][j];}}
		matrix z = luythua(a,k);	
		ll count = 0;
		for(ll j = 0; j<=n; j++){
		    	count += z.x[0][j];
		    	count %=M;
			}
			cout << count << endl;	
		}	 
	}


#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll  M = 1e9+7;

struct matrix {
	ll a[2][2];
	
	matrix operator * (matrix b){
		matrix res;
		for(int i =0 ; i <2; i++){
			for(int j = 0;  j<2; j++){
				res.a[i][j] = 0;
			
			for(int k = 0; k<2; k++){
				res.a[i][j] += a[i][k] * b.a[k][j];
				res.a[i][j] %= M;
			}
		}}
		return res;
	   }
};

matrix luythua(matrix a, ll n){
	if(n==1) return a;
	matrix z = luythua(a,n/2);
	if(n%2==0) return z*z;
	else return z*z*a;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		matrix F;
		F.a[0][0] = 1;
		F.a[1][0] = 1;
		F.a[0][1] = 1;
		F.a[1][1] = 0;
		matrix res = luythua(F,n);
		cout << res.a[1][0]<< endl;
	}
}
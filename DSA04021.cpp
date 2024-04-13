#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll X[93];

ll find(ll n, ll k){
   if(n==1) return 0;
   if(n==2) return 1;
   if(k<=X[n-2]) return find(n-2,k);
   else return find(n-1,k-X[n-2]);  
}

int main(){
	int t; cin >> t;
	ll n, k;
    X[1] = 1; X[2] = 1;
    for(int i = 3; i<=93; i++){
    	X[i] = X[i-1] + X[i-2];
	}
	while(t--){
		cin >> n >>k;
		cout << find(n,k) << endl;
	}
}

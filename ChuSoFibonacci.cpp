#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll F[100];

int Find(int n, ll k){
	if (n==1) return 1;
	if (n==2) return 0;
	return Find(n-1,k) + Find(n-2,k);
}
int main(){
	int t; cin >> t; while(t--){
	ll n, k;
	cin >> n >> k;
	F[1] = 1; F[2] = 0;
	for(int i = 3; i<=92; i++){
		F[i] = F[i-1] + F[i-2];
	}
	cout << Find(n,k) << endl;
}}

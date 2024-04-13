#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll X[n];
		for(int i = 0; i<n; i++){
			cin >> X[i];
		}
		ll sum = abs(X[0]+X[1]), x;
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(i==j) continue;
				else{
				ll g = X[i]+X[j];
				ll z = abs(g);
				if (z < sum){
					sum = z;
					x = g;
				}}
			}
		}
		cout << x << endl;
	}
}
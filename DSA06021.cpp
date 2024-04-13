#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k, z, g;
		cin >> n >>k;
		for(int i = 1; i<=n; i++){
			cin >> z;
			if(z == k){
				g = i;
			}
		}
		cout << g << endl;
	}
}
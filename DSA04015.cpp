#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k, g=0, z=0;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
			if(a[i]>=g&&a[i]<=k){
				g = a[i];
				z = i;
			}
		}
		if(g!=0) cout << z+1 <<endl;
		else cout <<-1<<endl;
	}
}
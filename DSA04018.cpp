#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, g=0;
		cin >> n;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
			if(a[i]==0){
				g++;
			}
		}
	cout <<g<<endl;
	}
}
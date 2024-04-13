#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		sort(a,a+n);
		int g = n/2;
		cout << a[g] << endl;
	}
}
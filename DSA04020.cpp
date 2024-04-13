#include<bits/stdc++.h>
using namespace std;
using ll  = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n , k, g=0;
		cin >> n >>k;
		int a[n];
		for(int i = 0; i <n; i++){
			cin >> a[i];
			if(a[i]==k)
			g = i+1;
		}
		if (g==0) cout << "NO"<<endl;
		else cout << g << endl;
 	}
}


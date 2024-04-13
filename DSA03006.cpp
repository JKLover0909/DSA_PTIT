#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin  >> t;
	while(t--){
		long long count=0, n; cin >> n;
		int x[n+1], y[n+1];
		for(int i = 1; i<=n; i++){
			cin >> x[i];
			y[i] = x[i];
		}
		sort(x+1,x+n+1);	
		for(int i = 1; i<=(n-1)/2; i++){
		    if(y[i]==x[n-i+1]&&x[i]==y[n-i+1]||y[i]==x[i]&&y[n-i+1]==x[n-i+1]) count++;
		}
		if(count == (n-1)/2) cout <<"Yes"<<endl;
		else cout <<"No"<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >>k;
		int a[n];
		bool s[40005];
		memset(s,false,40005);
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		s[0]=1;
		for(int  i =0; i<n; i++){
			for(int j = k; j>=a[i]; j--){
				if(s[j-a[i]]==1)
				{s[j]=1;}
			}
		}
		
		if(s[k]) cout <<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a; cin >> a;
		if(a[0]=='0'){
		cout << 0 << endl;
		continue;}
		else{
			int dp[1005] = {};
			dp[0] = dp[1] = 1;
			for(int i = 2;  i<=a.size(); i++){
				if(a[i-1]>'0'){
				dp[i] = dp[i-1];}
			    if(a[i-2]=='1'||(a[i-2]=='2'&&a[i-1]<'7'))
				{
				dp[i]+=dp[i-2];}
			}
			
			cout << dp[a.size()]<<endl;
		}
	}
}

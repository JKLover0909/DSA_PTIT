#include<bits/stdc++.h>
using namespace std;

int main(){
	int s, n;
	cin >> n >> s;
	int a[n+1], b[n+1];
	for(int i = 1; i<=n; i++){
		cin >> a[i];
	}
	for(int i = 1; i<=n; i++){
		cin >> b[i];
	}
	vector<vector<int>> dp(n+1,vector<int>(s+1,0));
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=s; j++){
			if(b[i]<=j){
				dp[i][j] = max(dp[i-1][j-b[i]]+a[i],dp[i-1][j]);
			}
			else 
			dp[i][j] = dp[i-1][j];
		}
	}
	for(int i = 0; i<=s; i++){
		cout << dp[n][i] <<" ";
	}
}
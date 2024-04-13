#include<bits/stdc++.h>
using namespace std;

long long dp[50];

int main(){
	int t; cin  >> t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	while(t--){
        int n; cin >> n;
        if(n==1||n==2||n==3){
        	cout << dp[n]<< endl;
		}
	    else {
	    	long long sum;
	    	for(int i = 4;  i<=n;  i++){
	    		sum = 0 ;
	    		for(int y =i-3;  y<i; y++){
	    			sum+=dp[y];
				}
				dp[i] = sum;
			}
			cout << dp[n] << endl;
		}	
	}
}
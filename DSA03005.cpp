#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin  >> t;
	while(t--){
		long long n, k, sum1 = 0, sum2=0; cin >> n >>k;
		int z = min(k,n-k);
		int x[n];
		for(int i = 0; i<n; i++){
			cin >> x[i];
		}
		sort(x,x+n);
		for(int i = 0; i<z; i++){
		    sum1+=x[i];
		}
		for(int i = z; i<n; i++){
			sum2+=x[i];
		}
		cout << sum2-sum1<< endl;
	}
}

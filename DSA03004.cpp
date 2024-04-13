#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin  >> t;
	while(t--){
		long long n, sum1 = 0, sum2=0; cin >> n;
		int x[n];
		for(int i = 0; i<n; i++){
			cin >> x[i];
		}
		sort(x,x+n);
		for(int i = 0; i<n; i++){
			if(i%2==0) sum1=sum1*10+x[i];
			else sum2 =sum2*10+x[i];
		}
		cout << sum1+sum2<< endl;
	}
}
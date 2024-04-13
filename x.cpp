#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int a[t+1];
	long long res3 = 0;
	for(int i = 0; i<t; i++){
		cin >> a[i];
	}
	
	long long res1 = 0;
	for(int i = 0; i<t; i++){
	    if(a[i]<0){
	    	res1 += a[i];
	    	res3 = min(res3,res1);
		}
		else {
			res1 = 0;
		}
	}
	
	cout << res3 << endl;
}
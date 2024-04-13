#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
	if(a==1 && b==1) {
		cout << 0 << endl;
		continue;
	}
	if(a==0 && b==0) continue;
	else {		
	    if(a >= b){
		    long long res = pow(a,2);
		    if(b%2!=0){
		    	b/=2;
			    res -= pow(b,2);
			    res -= pow(b+1,2);
			    cout << res << endl;
		    }
		    else {
		    	b/=2;
		        res -= 2*pow(b,2);
		        cout << res << endl;
		    }
	    }
	    else {
	    	
	    	
	    	
	    	if(a == 0){
	    		cout << 0-pow(b,2) << endl;
	    		continue;
			}
	    	long long res = 0;
		    b = b+1-a;
		    if(b%2!=0){
		    	b/=2;
			    res -= pow(b,2);
			    res -= pow(b+1,2);
			    cout << res+1 << endl;
		    }
		    else {
		    	b/=2;
		        res -= 2*pow(b,2);
		        cout << res+1 << endl;
		    }
        }
    }
}}
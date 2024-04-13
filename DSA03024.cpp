#include<bits/stdc++.h>
using namespace std;
using ll  = long long;
struct cv {
	ll st, ed;
} x[100005];

bool cmp (cv a, cv b){
	return a.ed < b.ed;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int  i = 0; i<n; i++){
			cin >> x[i].st;
			cin >> x[i].ed;
		}
	    sort(x, x+n, cmp);
	    ll count = 1, mod = x[0].ed;
	    for(int i = 1;  i<n; i++){
	    	if(x[i].st>=mod){
	    		count++;
	    		mod = x[i].ed;
			}
		}
		cout << count << endl;
	}
}
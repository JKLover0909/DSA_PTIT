#include<bits/stdc++.h>
using namespace std;
struct task{
	int st, fi;
} x[10005];

bool cmp(task a, task b){
	return a.fi < b.fi;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n,k, count=0; cin >> n;
		for(int i = 0; i<n; i++){
			cin >> x[i].st;
		}
		for(int i = 0; i<n; i++){
			cin >> x[i].fi;
		}
		sort(x,x+n,cmp);
		k = x[0].fi;
		for(int i = 1; i<n; i++){
			if (x[i].st >= k){
				count++;
				k = x[i].fi;
			}
			else continue;
		}
		cout << count+1 << endl;
	}
}
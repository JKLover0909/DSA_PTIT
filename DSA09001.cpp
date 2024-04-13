#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n, u, g, v, m;
    	cin >> n >> m >> g;
    	vector<int> vs[n+1];
    	for(int i = 0; i<m; i++){
    		cin >> u >> v;
    		vs[u].push_back(v);
    		vs[v].push_back(u);
		}
		for(int i = 1; i<n+1; i++){
			cout << i<<": ";
			for(auto x : vs[i]) {cout << x <<" ";
			}
			cout << endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
vector<int> vs[100005];
bool check[100005];

void DFS(int g){
	check[g] = 1;
	cout << g <<" ";
	for(auto x : vs[g]){
		if(!check[x]) DFS(x);
		
	}
	
}
int main(){
    int t; cin >> t;
    while(t--){
    	int n, u, g, v, m;
    	cin >> n >> m >> g;
    	for(int i = 1; i<=n; i++){
    		vs[i].clear();
    		check[i] = 0;
		}
    	for(int i = 0; i<m; i++){
    		cin >> u >> v;
    		vs[u].push_back(v);
    		vs[v].push_back(u);
		}
		DFS(g);
		cout << endl;
		}
	}

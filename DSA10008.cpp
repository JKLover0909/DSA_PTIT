#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n, m, s;
vector<pair<int, int>> adj[100005];

void nhap(){
	cin >> n >> m>> s;
	for(int i = 0; i<=n; i++){
		adj[i].clear();
	}
	for(int i = 0; i<m; i++){
		int x, y, z; 
		cin >> x >> y >> z;
		adj[x].push_back({y,z});
	}
}

const ll inf = 1e9+5;

void dijkstra (int s){
	vector<ll> d(n+1,inf);
	d[s] = 0;
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
	Q.push({0,s});
	while(!Q.empty()){
		pair<int, int> top = Q.top(); Q.pop();
		int u = top.second;
		int kc = top.first;
		if(kc > d[u]) continue;
		for(auto x : adj[u]){
			int v = x.first;
			int w = x.second;
			if(d[v] > w +  d[u]){
				d[v] = w + d[u];
				Q.push({d[v], v});
			}
		}
	}
	for(int i = 1; i<=n; i++){
		cout << d[i] << " ";
	} 
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		dijkstra (s);
		cout << endl;
	}
}


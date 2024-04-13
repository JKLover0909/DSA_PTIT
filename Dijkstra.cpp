#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 100001;
int n, m, s;
vector<pair<int,int>> adj[maxn];

void nhap(){
	cin >> n >> m >> s;
	for(int i = 0; i<m; i++){
		int x, y, z;
		 cin >> x >> y >> z;
		 adj[x].push_back({y, z});
	}
}

const int inf =  1e9;

void dijkstra(int s){
	vector<ll> d(n+1, inf);
	d[s] = 0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
	Q.push({0,s});
	while(!Q.empty()){
		pair<int , int> top = Q.top(); Q.pop();
		int u =  top.second;
		int kc = top.first;
		if(kc > d[u]){
			continue;
		}
		for(auto x : adj[s]){
			int v = x.first;
			int w = x.second;
			if(d[v]>d[u]+w){
				d[v] = d[u] + w;
				Q.push({d[v], v});
			}
		}
	}
	for(int i =1; i<=n;i++){
		cout << d[i] << " ";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
	nhap();
	dijkstra(s);}
}
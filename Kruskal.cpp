#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct edge{
	int u, v;
	int w;
};

int n, m;
int parent[1000005], sz[1000005];
vector<edge> canh;

void make_set(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		sz[i] = 1;
	}
}

int Find(int v){
	if(v == parent[v]) return v;
	else return parent[v] = Find(parent[v]);
}

bool Union(int a, int b){
	a = Find(a);
	b = Find(b);
	if(a == b) return false;
	if(sz[a] < sz[b]) swap(a, b);
	parent[b] = a;
	sz[a] += sz[b];
	return true;
}

void inp(){
	
	memset(parent, sizeof(parent), 0);
	memset(sz, sizeof(sz), 0);
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		edge e;
		e.u = x; e.v = y; e.w = w;
		canh.push_back(e);
	}
}

bool cmp(edge a, edge b){
	return a.w < b.w;
}

void kruskal(){
	vector<edge> mst;
	ll d = 0;
	sort(canh.begin(), canh.end(), cmp);
	for(int i = 0; i < m; i++){
		if(mst.size() == n - 1) break;
		edge e = canh[i]; 
		if(Union(e.u, e.v)){
			mst.push_back(e);
			d += e.w;
		}
	}
	cout << d << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
	inp();
	make_set();
	kruskal();
	canh.clear();}
}
#include<bits/stdc++.h>
using namespace std;
int u, v, n , m, g;
vector<vector<int > > vc(1005);
bool a[1005]={0};

void nhap(){
	cin >> n >> m >> g;
	while(m--){
		cin >> u >> v;
		vc[u].push_back(v);
	}
}

void dfs(int g){
	queue<int> q;
	q.push(g);
	while(q.size()){
		int p  = q.front();
		cout << p<<" ";
		a[p] = 1;
		q.pop();
		for(auto x : vc[p]){
			if(!a[x]){
				dfs(x);
			}
		}	
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		dfs(g);
		cout << endl;
		for(int i = 1; i<n; i++){
		    vc[i].clear();
	        }
	    memset(a,false,sizeof(a));
	}
}

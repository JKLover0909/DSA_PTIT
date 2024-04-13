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

void bfs(int g){
	queue<int> q;
	q.push(g);
	a[g] =1;
	while(q.size()){
		int p  = q.front();
		cout << p<<" ";
		
		q.pop();
		for(auto x : vc[p]){
			if(!a[x]){
				q.push(x);
				a[x] = 1;
			}
		}	
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		bfs(g);
		cout << endl;
		for(int i = 1; i<n; i++){
		    vc[i].clear();
	        }
	    memset(a,false,sizeof(a));
	}
}

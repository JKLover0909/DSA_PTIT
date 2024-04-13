#include <bits/stdc++.h>
using namespace std;

int n, m , u, v, visited[1005], par[1005];
vector<int> ke[1005];

void bfs(int u){
	queue <int> q;
	q.push(u);
	while(!q.empty()){
		int z = q.front();
		for(int i : ke[z]){
			if(!visited[i]){
				visited[i] = 1;
				q.push(i);
				par[i] = z;
			}
		}
		q.pop();
	}	
}

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=0; i<1005; i++){
			ke[i].clear();
			visited[i] = 0;
			par[i] = 0;
		}
		cin >> n >> m >> u >> v ;
		int x , y;
		for(int i =1 ; i<=m ;i++){
			cin >> x  >> y;
			ke[x].push_back(y);
		}
		bfs(u);

		if(!visited[v]) cout << -1;
		else 
		{
			stack<int> st;
			while(u!=v)
			{
				st.push(v);
				v = par[v];
			}
			cout << v <<" ";
			while(!st.empty()){
				cout << st.top()<<" ";
				st.pop();
			}
		}
		cout << endl;
	}
}
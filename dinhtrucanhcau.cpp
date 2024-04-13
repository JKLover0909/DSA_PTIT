#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vc[1005];
bool visited[1005];
int parent[1005];
vector<pair<int,int> > edge(1005);


void nhap(){
	cin >> n >> m;
		    for(int i = 1; i<=1004; i++){
	    	vc[i].clear();
		}
	edge.clear();	
		
	for(int i = 0; i<m; i++){
		int x, y;
		cin >> x >> y;
		edge.push_back({x,y});
		vc[x].push_back(y);
		vc[y].push_back(x);	
	}
	memset(visited,false,sizeof(visited));
}

void DFS(int u, int x, int y){
	visited[u] = 1;
	for(auto v : vc[u]){
		if((x == u && y ==v) || (x ==v && y == u)){
			continue;
		}
		if (!visited[v]){
			DFS(v, x, y);
		}
	}
} 

void dfs(int u){
	visited[u] = 1;
	for(auto v : vc[u]){
		if (!visited[v]){
			dfs(v);
		}
	}
} 

int main(){
	int t; t=1;
	while(t--){
		int dinhtru =0, canhcau=0;
		vector<pair<int,int> > g;
	    nhap();

	    int tplt = 0;
	    for(int i = 1; i<=n; i++){
    	
		    if(!visited[i]){
			    tplt++;
				DFS(i,-1,-1);	
	        }
	    }
	    for(auto it : edge){
		int x = it.first, y = it.second;
	    int dem  = 0;
	    memset(visited, false, sizeof(visited));
	    for(int i = 1; i<=n ;i++){
	    	if(!visited[i]){
	    		dem++;
	    		DFS(i,x,y);
			}
		}
		if(dem > tplt)
		    {
			canhcau++;
		    }
	    }
	    
	    memset(visited,false,sizeof(visited));
	    
	    for(int j = 1; j<=n; j++){
	    int dem  = 0;
	    memset(visited, false, sizeof(visited));
	    visited[j] = 1;
	    for(int i = 1; i<=n ;i++){
	    	if(i==j) continue;
	    	if(!visited[i]){
	    		dem++;
	    		dfs(i);
			}
		}
		if(dem > tplt)
		    {
			dinhtru++;
		    }
	    }
	    
	    cout << dinhtru <<" "<< canhcau;
	}
}
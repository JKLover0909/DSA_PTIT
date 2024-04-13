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

void DFS(int u){
	visited[u] = 1;
	for(auto v : vc[u]){
		if (!visited[v]){
			DFS(v);
		}
	}
} 

int main(){
	int t; cin >> t;
	while(t--){
		vector<pair<int,int> > g;
	    nhap();

	    int tplt = 0;
	    for(int i = 1; i<=n; i++){
    	
		    if(!visited[i]){
			    tplt++;
				DFS(i);	
	        }
	    }
	for(int j = 1; j<=n; j++){
	    int dem  = 0;
	    memset(visited, false, sizeof(visited));
	    visited[j] = 1;
	    for(int i = 1; i<=n ;i++){
	    	if(i==j) continue;
	    	if(!visited[i]){
	    		dem++;
	    		DFS(i);
			}
		}
		if(dem > tplt)
		    {
			cout << j <<" ";
		    }
	    }
	    cout << endl;
	}
}
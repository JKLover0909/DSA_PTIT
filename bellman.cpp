#include<bits/stdc++.h>
using namespace std;

using ll  = long long;
int n, m, s;
int adj[105][105];

void nhap(){
	cin >> n >> m >> s;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
		    adj[i][j] = 100005;
	    }
	}
	for(int i = 0; i<m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		adj[x][y] = z;
	}
} 

void bellman(int s){
	vector<ll> d(n+1, 1e9);
	d[s] = 0;
	int  k = 1;
	while(k < n-1){
		for(int i = 1; i<=n; i++){
			if(i==s) continue;
			for(int j = 1; j<=n; j++){
				if(d[i]>d[j]+adj[j][i]){
					d[i] = d[j] + adj[j][i];
				}
			}
		}
	}
	for(int i = 1; i<=n; i++){
		cout << d[i] << " ";
	}
}

int main(){
	nhap();
	bellman(s);
}
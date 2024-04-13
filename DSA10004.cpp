#include<bits/stdc++.h>
using namespace std;
int m, n; 

int main(){
	int t; cin >> t;
	while(t--){
		int vao[1005]={}, ra[1005] ={};
		int x, y;
		cin >> m >> n;
		while(n--){
			
			cin >> x >> y;
			++vao[x];
			++ra[y];
		}
		int count1=0, count2=0;
		for(int i = 1; i<=m; i++){
			if(abs(vao[i]-ra[i])==0)
			count1++;
			
		}
		
		if(count1==m) cout << 1 << endl;
		else cout << 0<< endl;
	}
}
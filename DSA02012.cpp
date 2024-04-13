#include<bits/stdc++.h>
using namespace std;

int cnt, n, m;
int a[105][105];

void Try(int a, int b){
	if(a==n&&b==m) cnt++;
	if(a<n) Try(a+1,b);
	if(b<m) Try(a,b+1);
}

int main(){
	int t; cin >> t;
	while(t--){
       cin >> n >> m;
       for(int i=0; i<n; i++){
       	for(int y = 0; y<m; y++){
		    cin >> a[i][y];
	        }
        }
        cnt = 0;
        Try(1,1);
        cout << cnt << endl;
	}
}
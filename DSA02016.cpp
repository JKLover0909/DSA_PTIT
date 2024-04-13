#include<bits/stdc++.h>
using namespace std;
int n, cnt;
bool col[105], nguoc[105], xuoi[105];

void Try(int i){
	for(int j =0; j<n; j++){
		if(!col[j]&&!xuoi[n+i-j]&&!nguoc[i+j-1]){
			col[j] = 1;
			xuoi[n+i-j] =1;
			nguoc[i+j-1] =1;
			if(i==n) cnt++;
			else Try(i+1);
			col[j] = 0;
			xuoi[n+i-j] = 0;
			nguoc[i+j-1] = 0; 
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cnt=0;
		cin >> n;
		Try(1);
		cout << cnt << endl;
	}
}
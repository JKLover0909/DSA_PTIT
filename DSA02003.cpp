#include<bits/stdc++.h>
using namespace std;

int a[105][105];
int n, check;

void tryy(int i, int j, string s, int &check){
	if(i==n && j==n){
		check = 1;
		cout << s <<" ";
		return ;
	}
	if(i>n||j>n) return;
	if(i==n && j==n){
		cout << s <<" ";
		return;
	}
	if (a[i+1][j]==1){
		tryy(i+1,j,s+'D',check);
	}
	if (a[i][j+1]==1){
		tryy(i,j+1,s+'R',check);
	}
	
	return;
}

int main(){
	int t; cin >> t;
	while(t--){
		check = 0;
		cin >> n;
		for(int i = 1;i<=n; i++){
			for(int j = 1; j<=n; j++){
				cin >> a[i][j];		
			}
		}
		if(a[1][1]==0) cout <<-1;
		else {
			tryy(1,1,"",check);
			if(check==0) cout <<-1;
		}
		cout << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; t=1;
	while(t--){
		int u , v;
		int n; cin >> n;
		int a[n+1][n+1] = {0};
		cin.ignore();
		for(int i = 1; i<=n; i++)
		{
			string s, tmp;
			getline(cin,s);
			stringstream ss(s);
			while(ss >> s){
				int m = stoi(s);
				a[i][m] = a[m][i] = 1;
			}
		}
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=n; j++){
				cout << a[i][j]<<" ";
				}
			cout << endl;	
		}
	}
}
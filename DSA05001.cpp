#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string a, b; 
		cin >> a >> b;
		int S[a.size()+1][b.size()+1];
		for(int i = 0; i<=b.size();i++){
			S[0][i] = 0;
		}
		for(int i = 0; i<=a.size();i++){
			S[i][0] = 0;
		}
		for(int i = 0; i<a.size(); i++){
			for(int j = 0; j <b.size(); j++){
				if(a[i]==b[j]) S[i+1][j+1] = S[i][j]+1;
				else S[i+1][j+1] = max(S[i][j+1],S[i+1][j]);
			}
		}
		cout << S[a.size()][b.size()]<<endl;
	}
	return 0;
}
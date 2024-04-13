#include<bits/stdc++.h>
using namespace std;

string t;
int n, X[10001];
bool used[100];

void Try(int i){
	for(int j = 1; j<=n; j++){
		if(used[j]==0){
		X[i] = j;
		used[j]=1;
		if(i == n){
			for(int k = 1; k<=n; k++){
				cout << t[X[k]-1];
			}
			cout <<" ";
		}
		else{
			Try(i+1);
		}
		used[j]=0;
	    }
    }
}

int main(){
	int l;
	cin >> l;
	while(l--){
	cin >> t;
	n = t.size();
	memset(used , false, sizeof(used));
	Try(1);
	cout << endl;
}}
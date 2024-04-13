#include<bits/stdc++.h>
using namespace std;
int a[100005], n,k;

bool check(){
	for(int i = 0; i<n; i++){
		if(a[i]==k) return 1;
	}
	return 0;
	
}

int main(){
	int t ; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i<n; i++){
		cin >> a[i];}
		if(check()) cout <<"1"<<endl;
		else cout << "-1"<< endl;
	}
}
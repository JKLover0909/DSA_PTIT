#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[1000001],b[1000001], n;

ll check(){
	for(int i = 0; i<n; i++){
	   if(a[i]!=b[i])
	   return i+1;	
	}
	return n;
}

int main (){
	int t; cin >> t;
	while(t--){
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i = 0; i<n-1; i++){
		cin >> b[i];
	}
	cout << check()<<endl;
    }
}
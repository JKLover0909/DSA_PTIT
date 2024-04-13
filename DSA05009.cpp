#include<bits/stdc++.h>
using namespace std;
int n, X[100005]={0},Y[100005];


bool check1(){
	for(int i = 0; i<n; i++){
		if(X[i]==0) return 0;
	}
	return 1;
}

bool check2(){
	int a=0, b=0;
	for(int  i =0 ; i<n; i++){
		if(X[i]==0) a+=Y[i];
		else b+=Y[i];
	}
	if(a==b) return 1;
	return 0;
}

bool check3(){
	while(!check1()){
		for(int  i = n-1; i>=0; i--)
		{
			if(X[i]==0){
				X[i] = 1;
				for(int j = i+1; j<n; j++){
					X[j] = 0;
				}
				break;
			}
			if(check2()){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int sum = 0;
		for(int i = 0; i<n; i++){
			cin >> Y[i];
			sum+=Y[i];
		}
		if(sum%2!=0) cout <<"NO"<<endl;
		else{
		if(check3()) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}}
}
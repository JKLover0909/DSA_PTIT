#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int X[100005], n;


bool check(){
	for(int i = 0; i<n; i++){
		if(X[i]!=n-i) return 0;
	}
	return 1;
}


bool check2(){
	for(int i = 0; i<n-1; i++){
		int x = abs(X[i]-X[i+1]);
		if(x<=1) return 0;
	}
	return 1;
}


void in(){
	for(int i = 0; i<n; i++){
		cout  << X[i];
	}
	cout << endl;
}


int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		if(n==3) continue;
		else
		{
			for(int i = 0; i<n; i++){
				X[i] = i+1;
			}
			while(!check()){
				for(int  i = n-1; i>=0; i--){
					if(X[i]>X[i-1]){
						int g = X[i];
						int z = i;
						for(int j = i+1; j<n; j++){
							if(X[j]<=g&&X[j]>X[i-1]){
								z = j;
								g = X[j];
							}
						}
						swap(X[i-1],X[z]);
						sort(X+i,X+n);
						if(check2()){
							in();
						}
						break;
					}
				}
			}
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

string X[50]; 
int Y[50]={0}, n, k;
bool check(){
	for(int i = 0; i<k; i++){
		if (Y[i]!=n-k+i+1) return 0;
	}
	return 1;
}

void in(){
	for(int i=  0; i<k;i++){
		cout<< X[Y[i]-1]<<" ";
	}
	cout << endl;
}

int main(){
	int a;
	cin >> a >> k;
	set<string> se;
	string x;
	for(int i =0; i<a; i++){
		cin >> x ;
		se.insert(x);
	}
	int z = 0;
	for(auto y : se ){
		X[z] = y;
		z++;
	}
	n = z;
	for(int i = 0; i<k; i++){
		Y[i]=i+1;
	}
    in();
	while(!check()){
		for(int i =k-1; i>=0; i--){
			if(Y[i]!=n-k+i+1){
				Y[i]++;
				for(int y = i+1; y<k;y++){
					Y[y]=Y[y-1]+1;
				}
				in();
				break;
			}
		}
	}
}
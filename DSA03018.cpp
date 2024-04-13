#include<bits/stdc++.h>
using namespace std;

int n;

void in(){
	int a = n/7;
		int b = n%7;
		if(b==0){
			while(a--){
				cout <<"7";
			}
			return;
		}
		else{
			for(int i =a; i>=0; i--){
				int z = n-i*7;
				if(z%4==0){
					int g = (n-(i*7))/4;
					while(g--){
						cout <<"4";
					}
					while(i--){
						cout <<"7";
					}
					return ;
				}
			}
		    
		}
		cout <<"-1";
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		in();
		cout << endl;
    }
}
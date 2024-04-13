#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	string a, b;
	cin >> a >> b;
	for(char &x : a){
		if( x == '6') x = '5';
	}
	for(char &x : b){
		if( x == '6') x = '5';
	}
	cout << stoll(a) + stoll(b) <<" ";
	for(char &x : a){
		if( x == '5') x = '6';
	}
	for(char &x : b){
		if( x == '5') x = '6';
	}
	cout << stoll(a) + stoll(b);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	long long a, b, c; 
	cin >> a >> b;
	long long A[a], B[b];
	for(long long i = 0; i<a; i++){
		cin >> A[i];
	}
	for(long long i = 0; i<b; i++){
		cin >> B[i];
	}
	long long max_ele = -1e9, min_ele = 1e9;
for(long long i = 1; i < a; i++){
max_ele = max (max_ele, A[i]);
}
for(long long i = 1; i < b; i++){
min_ele = min (min_ele, B[i]);
}
c = max_ele*min_ele;
cout <<c<< endl;
}}
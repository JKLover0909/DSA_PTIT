#include<bits/stdc++.h>
using namespace std;

int N, S, M, z;

int check(){
	if(M*S%N==0)
	 z = M*S/N;
	 else z = M*S/N+1;
	if(M>N||N*6<M*7) {
		return -1;
	}

	else return z;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> N >> S >> M;
		cout << check() <<endl;
	}
}
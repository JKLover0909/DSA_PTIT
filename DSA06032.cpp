#include<bits/stdc++.h>
using namespace std;
long long B[100005], A[100005], n, k, Count;

bool check(){
	for(int i = 1; i<=3; i++){
		if(A[i]!=n-3+i) return 0;
	}
	return 1;
}

bool check2(){
	long long tong =0;
	for(int i = 1; i <=3 ;i++){
		tong+=B[A[i]];
	}
	if(tong < k){
	   return 1;
	}
	return 0;
}

void tohop(){
	for(int i = 1; i<=3; i++){
		A[i] = i;
	}
	if(check2){
		Count++;
	}
	while(!check()){
		for(int i = 3; i>0; i--){
			if(A[i]!=n-3+i){
				A[i]++;
				for(int y = i+1; y<=3; y++){
					A[y]= A[y-1]+1;
				}
				if(check2()) Count++;
				break;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i<=n; i++){
			cin >> B[i];
		}
		Count = 0;
		tohop();
		cout << Count << endl;
	}
}
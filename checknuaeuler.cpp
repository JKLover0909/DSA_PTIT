#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int A[n][n];
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n; j++){
			cin >> A[i][j];
		}
	}
	int count = 0;
	for(int i = 0; i <n; i++){
		int z = 0;
		for(int j = 0; i <n; i++){
			z += A[i][j];
		}
		if(z%2 != 0) count++;
	}
	if(count<=2&&count>0) cout <<"La do thi nua Euler";
    else if (count == 0) cout <<"La do thi Euler";
	else cout <<"Khong phai do thi nua Euler";
}
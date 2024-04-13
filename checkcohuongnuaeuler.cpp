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
		int count1 = 0, count2 = 0;
		for(int j= 0; j<n; j++){
			count1 += A[i][j];
			count2 += A[j][i];
		}
		int z = abs(count1 - count2);
		if(z==1){
			count++;
		}
    }
    if (count == 2) cout << "La do thi nua Euler";
    else cout <<"Khong phai do thi nua Euler";
}
	    
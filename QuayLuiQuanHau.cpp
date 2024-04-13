#include<bits/stdc++.h>
using namespace std;

int X[100], n;
bool cot[100], nguoc[100], xuoi[100];
int Y[9][9];

void Try(int i, int max){
	for(int j = 1; j<=n; j++){
		if(!cot[j]&&!nguoc[n+i-j]&&!xuoi[i+j-1]){
			X[i] = j;
			cot[j]=nguoc[n+i-j]=xuoi[i+j-1]=1;
			if(i==n){
				int count = 0;
				for(int k = 1; k<=n; k++){
					count += Y[k][X[k]];
				}
				if(count>=max) max = count;
			}
			else{
				Try(i+1,max);
			}
			cout << max;
			cot[j]=nguoc[n+i-j]=xuoi[i+j-1]=0;
		}
	}
}

int main(){
	n = 8;
	for(int  i = 1; i<=8 ; i++){
		for(int y=1; y<=8; y++){
			cin >> Y[i][y];
		}
	}
	int max = 0;
	Try(1, max);
	cout <<"Test "<<"t"<<": "<< max << endl;
}
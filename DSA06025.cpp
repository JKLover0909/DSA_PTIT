#include<bits/stdc++.h>
using namespace std;
int X[100005], n;

int main(){
    cin >> n;
    int count = 0 ;
	for(int i = 0; i<n; i++){
		cin >> X[i];
	}
	cout <<"Buoc 0: "<< X[0];
	cout << endl;
	for(int i = 1; i<n; i++){
		int pos = i-1, x = X[i];
		while (pos>=0 && X[pos] > x){
			X[pos+1] = X[pos];
			--pos;
		}
		X[pos+1] =  x;
		cout <<"Buoc "<<i<<": ";
		for(int j = 0; j<=i; j++){
			cout << X[j] <<" ";
		}
		cout << endl;
	}
}
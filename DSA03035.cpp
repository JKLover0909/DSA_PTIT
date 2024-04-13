#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	int a[t];
	for(int i = 0; i<t; i++){
		cin >> a[i];
	}
	int Sums = 0;
	vector<int> F(t+5,0);
	for(int i = 0; i<t; i++){
		F[a[i]] = F[a[i]-1]+1;
		Sums = max(Sums,F[a[i]]);
	}

	cout << t - Sums << endl;
}
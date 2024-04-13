#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t, a1, a2, a3; cin >> t;
	while(t--){
		cin >> a1 >> a2 >> a3;
		int x[a1], y[a2], z[a3];
		for(int i = 0; i<a1; i++){
			cin >> x[i];
		}
		for(int i = 0; i<a2; i++){
			cin >> y[i];
		}
		for(int  i= 0; i<a3; i++){
			cin >> z[i];
		}
		bool ok = 0;
		int i =0, j=0, k=0;
		while(i<a1 && j<a2 && k<a3){
			if(x[i]==y[j]&&x[i]==z[k]){
				ok = 1;
				cout << x[i]<<" ";
				i++;
				j++;
				k++;
			}
			else if (x[i]<y[j]) ++i;
			else if (y[j]<z[k]) ++j;
			else ++k;
		}
		if(!ok) cout <<"-1";
		cout<<endl;
	}
}
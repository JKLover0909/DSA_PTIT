#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,z; cin >> n;
    int a[n], b[n]; 
    for(int i = 0; i<n; i++){
    	cin >> a[i];
	    }
	b[0] = 1;
	for(int  i= 1; i<n; i++){
			b[i] = 1;
		for(int j = 0; j<i; j++){
			if(a[j]<a[i]){
				b[i] = max(b[j]+1,b[i]);
			}
		}
	}
	int Max = 0;
	for(int i = 0; i<n; i++){
		Max = max(Max,b[i]);
	}
	cout << Max << endl;
}
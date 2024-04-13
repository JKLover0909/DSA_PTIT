#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a; cin >> a;
		int A[a+1];
		for(int i = 1; i<=a ; i++){
			cin >> A[i];
		}
		sort(A+1, A+a+1);
		if(a%2==0){
		    for(int i = 1; i<a/2+1; i++){
			    cout << A[a-i+1] <<" "<< A[i]<<" ";
		    }
	    }
		else {
			for(int i = 1; i<a/2+1; i++){
			    cout << A[a-i+1] <<" "<< A[i]<<" ";
		    }
		    cout << A[a/2+1];
		}
		cout << endl;
	}
}
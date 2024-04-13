#include<bits/stdc++.h>
using namespace std;

int a[100005], n;

bool check(){
	for(int i = 0; i<n-1; i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}

int main(){
	cin >> n ;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	int count = 0;
	while(!check()){
		for(int i = 0; i<n-1; i++){
			if(a[i] > a[i+1]){
			swap(a[i], a[i+1]);}
		}
		count++;
		cout << "Buoc " << count << ": ";
		for(int i = 0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
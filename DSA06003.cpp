#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){
	int count = 0;
	for(int i = 0; i<n; i++){
		int min_pos = i;
		for(int j = i+1; j<n; j++){
			if(a[min_pos]>a[j]){
				min_pos = j;
			}
		}
		if(i!=min_pos){
		swap(a[min_pos],a[i]);
		count++;
	}}
	cout <<count<<endl;;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		selection_sort(a,n);
		
	}
}
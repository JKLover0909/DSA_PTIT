#include<bits/stdc++.h>
using namespace std;

int b[11], a[11], n, k;

bool check (){
	for(int i =0; i <n; i++){
		if (b[i]==0) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int g=0;
		cin >>  n >> k;
		for(int i =0; i<n; i++){
			cin >>a[i];
			b[i] = 0;
		}
		sort(a,a+n);
		while(!check()){
			for(int i = n-1; i>=0; i--){
				if(b[i]==0){
					b[i]=1;
					for(int y = i+1; y<n; y++){
						b[y] = 0;
					}
					int count = 0;
	                for(int i = 0; i<n; i++){
		                if(b[i]==0){
			            count+=a[i];
		                }
	                }
	                if(count==k){
	                	cout<<"[";
		                for(int i = 0; i<n; i++){
		                    if(b[i]==0){
			                    if(count-a[i]!=0){
			                        cout << a[i]<<" ";}
			                    else
			                       {cout << a[i]<<"]";}
			                    count-=a[i];
		                    }
	                    }
	                    cout <<" ";
	                    g++;
					}
					break;
				}
			}
	    }
		if(g==0)
		cout << "-1" << endl;
		else 
		cout << endl;
	}
}

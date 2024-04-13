#include<bits/stdc++.h>
using namespace std;

long long n, diem[100005], congdon[100005], baibo[100005];

int main(){
	
    cin >> n;
    
    for(int i = 1; i<=n; i++){
    	cin >> diem[i];
	    }
	
	for(int i = 1; i<=n; i++){
		if(i == 1) congdon[1] = diem[1];
		else congdon[i] = congdon[i-1] + diem[i]; 
	    }  
	
	for(int i = n; i>=1; i--){
		if(i==n) baibo[i] = diem[i];
		else baibo[i] = min(diem[i], baibo[i+1]);
	    }
	
	vector<pair<long long, double>> v;
	double Max = -1.7e18;
	
	for(long long i =2; i<=n-1; i++){
		long long res = congdon[n] - congdon[i-1] -baibo[i];
		double tmp = (double)res/(n - i);
		Max = max(Max, tmp);
		v.push_back({i-1,tmp});
	}
	
	for (auto i: v){
		if(i.second == Max) cout<<i.first<<" ";
	}	
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=1;
	while(t--){
		int n; cin >> n;
		stack<vector<int>> st;
		vector<int> vc;
		int k;
		for(int i = 1; i<=n; i++){
			cin >> k;
		    vc.push_back(k);	
		}
		for(int i = 0; i<n-1; i++){
			int j, k =vc[i];
			for(int y = i+1; y<n; y++){
				if(k>vc[y]){
				   j = y;
				   k = vc[y];	
				}  
			}
			swap(vc[i],vc[j]);
			st.push(vc);
		}		
		int g = 1;
		while(!st.empty()){
			vector<int> x;
			x = st.top();
			st.pop();
			cout <<"Buoc "<< n-1 <<": ";
			n--;
			for(auto z : x){
				cout << z <<" ";
			}
			cout << endl;
		}
	}
}
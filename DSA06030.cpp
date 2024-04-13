#include<bits/stdc++.h>
using namespace std;

int n; int a[100005];
bool check( ){
	for(int i = 0; i<n-1; i++){
		if(a[i]>a[i+1]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int k = 0;
		stack<vector<int>> st;
		cin >> n;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		while(!check()){
		for(int i = 1; i<n; i++){
			if(a[i-1]>=a[i]){
				swap(a[i-1],a[i]);
		 	    }  
		    }
		vector<int> v;		    
		for(int i = 0; i<n; i++){
			v.push_back(a[i]);
		    }    
		st.push(v);
		k++;
	    }
	    while(!st.empty()){
	    	vector<int> z;
	    	z = st.top();
	    	cout << "Buoc "<<k<<": ";
	    	for(auto x : z) cout << x<<" ";
	    	k--;
	    	st.pop();
	    	cout << endl;
		}
    }
}
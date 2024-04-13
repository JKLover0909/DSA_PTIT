#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	string s;
	int n;
	while(cin >> s){
		if(s=="push"){
			cin >> n;
			st.push(n);
		}
		else if(s=="pop"&&st.size()){
				st.pop();
		}
		else {
			if (st.empty()){
		    	cout <<"empty"<<endl;
			}
			else{
				vector<int> v;
			    int top;
			while(!st.empty()){
				top = st.top();
				st.pop();
				v.push_back(top);
			}
			for(int i=v.size()-1; i>=0; i--){
				cout << v[i] << " ";
				st.push(v[i]);
			}
			cout << endl;
			} 
		}
	}
}
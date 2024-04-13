#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		stack<string> st;
		
		string s; getline(cin,s);
		string tmp;
		stringstream ss(s);
		while(ss >> tmp){
			st.push(tmp);
		}
		while(!st.empty()){
			tmp = st.top();
			cout << tmp <<" ";
			st.pop();
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin>> s;
		stack<char> st;
		int count = 0;
		for(int i = 0; i < s.size();i++){
			if( st.empty() && s[i]==')' ){
				count++;
				st.push('(');
				continue;
			}
			if( st.top()=='(' && s[i]==')' ){
				st.pop();
				continue;
			}
			st.push(s[i]);
		}
		cout << count + (st.size()/2)<< endl;
	}
}
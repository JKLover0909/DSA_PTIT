#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(char  i : s ){
			if (i=='+'||i=='-'||i=='*'||i=='/'){
				string z ="";
				string z1 = st.top();
				st.pop();
				string z2 = st.top();
				st.pop();
				z = z+'('+ z2 + i + z1 + ')';
				st.push(z);
			}
			else {
				string z = "";
				z += i;
				st.push(z);
			}
		}
		cout << st.top() << endl;
	}
}
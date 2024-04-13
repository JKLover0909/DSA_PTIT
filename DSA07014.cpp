#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i = s.size()-1; i>=0; i--){
			if(isdigit(s[i])){
				st.push(string(1,s[i]));
			}
			else {
				int o1 = stoi(st.top());
				st.pop();
				int o2 = stoi(st.top());
				st.pop();
				int o3;
				if(s[i]=='+'){
					o3 = o1 + o2;
				}
				if(s[i]=='-'){
					o3 = o1-o2;
				}
				if(s[i]=='*'){
					o3 = o1 * o2;
				}
				if(s[i]=='/'){
					o3 = o1/o2;
				}
				string tmp = to_string(o3);
				st.push(tmp);	
			}
			cout << st.top() << endl;
		}
		cout << st.top() << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i = 0; i<s.size(); i++){
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
					o3 = o2-o1;
				}
				if(s[i]=='*'){
					o3 = o1 * o2;
				}
				if(s[i]=='/'){
					o3 = o2 / o1;
				}
				string tmp = to_string(o3);
				st.push(tmp);	
			}
			
		}
		cout << st.top() << endl;
	}
}
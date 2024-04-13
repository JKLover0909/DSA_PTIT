#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n  = s.size();
		stack<int> st;
		st.push(-1);
		int res = 0 ;
		for(int i = 0; i<s.size(); i++){
			if(s[i]==')'){
				if (st.size()&&s[st.top()]=='('){
				
				st.pop();
				res = max(res,i-st.top());}
				else 
				{
				
				st.push(i);
			}}
			else{
				st.push(i);
			}
		}
		int m = st.size();
		cout << res << endl;
	}
}
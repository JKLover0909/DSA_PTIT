#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	stack<char> st;
	for(char &x : s){
		if(x=='('){
			st.push(x);
		}
		if (x=='+'||x=='-'||x=='*'||x=='/'){
			st.push('z');
		}
		if (x==')'){
			if(st.top()!='z')
			return 0;
			else{
				while(st.top()!='('){
					st.pop();
				}
				st.pop();
			}
		}
	}
	return 1;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(check(s)){
			cout << "No"<<endl;
		}
		else cout <<"Yes"<<endl;
	}
}
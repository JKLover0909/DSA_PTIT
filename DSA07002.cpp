#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	string s;
	int n;
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		if(s=="PUSH"){
			cin >> n;
			st.push(n);
		}
		else if(s=="POP"&&st.size()){
				st.pop();
		}
		else if(s=="PRINT")
		{
			if (st.empty()){
		    	cout <<"NONE"<<endl;
			}
			else{
				cout <<st.top()<<endl;
			} 
		}
	}
}
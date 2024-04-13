#include<bits/stdc++.h>
using namespace std;

string solve (string s, int a){
	string z = to_string(a+1);
	for(int i = a; i< s.length(); i++){
		if(s[i]!='I'){
			z = to_string(i+2) + z; 
		}
		else {
			int g= solve(s,i+1).length();
			z = z+ solve(s,i+1);
			i+=g;
		}
	}
	return z;
}
int main(){
	int t;  cin >> t;
	while(t--){
		string s; cin >> s;
		cout << solve(s,0) << endl;	
	}
}
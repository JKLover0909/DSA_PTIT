#include<bits/stdc++.h>
using namespace std;
void check(string s){
	int z = s.size(),z1;
	if(z%2==0){
		z1 = z/2;
	}
	else z1=z/2+1;
		map<char, int> m;
		for(int i= 0; i<z; i++){
			m[s[i]]++;
		}
		for(int i=0; i<z; i++){
			if (m[s[i]]>z1){
				cout <<"-1"<<endl;
				return;
			}
		}
	cout <<"1"<<endl;	
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		check(s);
}}
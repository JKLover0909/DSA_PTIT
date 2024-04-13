#include<bits/stdc++.h>
using namespace std;

string s;
int n;

bool check(){
	int z;
	map<char, int> mp;
	int x = s.length();
	
		for(int  i = 0; i<x; i++){
			mp[s[i]]++;
		}
		
		int Max = 0;
		for(auto x : mp){
			Max = max(x.second,Max);
		    }
		int g = Max*n-n+1;    
		if (x >= g ) return 1;
		return 0;
		
}



int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		if(check()){
			cout << "1" << endl;
		}
		else cout <<"-1"<<endl;
	}
}
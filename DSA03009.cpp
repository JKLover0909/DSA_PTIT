#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct congviec {
	int deadline;
	int profit;
} a[100001];

ll n;

bool cmp (congviec a, congviec b){
	return a.profit > b.profit;
}

int main(){
	int t ; cin >> t;
	while(t--){
	cin >> n;
	ll b= 0, z=0, v=0;
	map<int, int> mp;
	for(int i = 0; i<n; i++){
		cin >> b; mp[b-1] = 0;
		cin >> a[i].deadline;
		cin >> a[i].profit;
	}
	sort(a,a+n,cmp);
	for(int  i =0; i<n; i++){
		for(int y=a[i].deadline-1; y>=0; y--){
			if (mp[y]==0){
				mp[y] = 1;
				z+=a[i].profit;
				v++;
				break;
			}
		}
	}
	cout <<v << " "<< z << endl;
    }
}
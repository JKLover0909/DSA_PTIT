#include<bits/stdc++.h>
using namespace std;
 
int mod = 1e9 + 7;
using ll = long long;
ll Pow(ll n, ll k)
{
    if(k == 1) return n;
    ll tmp = Pow(n, k / 2) % mod;
    tmp = (tmp * tmp) % mod;
    if(k % 2 == 0) return tmp % mod;
    return (n * tmp) % mod;
}
 
ll Reverse(ll n)
{
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    return stoll(tmp);
}
 
int main (){
int t; cin >> t;
while(t--){
    
        ll n, r;
        cin >> n;
        r = Reverse(n);
        cout << Pow(n, r);
        cout << endl;
}}
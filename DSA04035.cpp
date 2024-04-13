#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9 + 7;

ll binPow(ll a, ll b)
{
    if(!b) return 1;
    ll res = binPow(a, b >> 1);
    res = (res * res) % mod;
    if(b & 1) res = (res * a) % mod;
    return res;
}

int main(){
    ll a, b;
    while(1)
    {
        cin >> a >> b;
        if(!a and !b) return 0;
        cout << binPow(a, b) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, l, r;
ll a[300000];
vector<ll> vt;
int check = 0;
unordered_map<ll, ll> mp;
void Try(int i = 1, ll sum = 0)
{
    if (sum > r)
    {
        return;
    }
    if (sum >= l and sum <= r)
    {
        cout << vt.size() << "\n";
        for (auto i : vt)
            cout << mp[i] << " ";
        check = 1;
        return;
    }
    for (int j = i; j <= n; j++)
    {
        if (check == 1)
            return;
        vt.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        vt.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    sort(a + 1, a + n + 1, greater<>());
    Try();
    return 0;
}
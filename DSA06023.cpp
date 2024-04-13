#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    int t = 1, n;
    while(t--)
    {
        cin >> n;
        vector<int> v(n);
        for(int &i : v) cin >> i;
        int m = n - 1;
        for(int i = 0; i < m; ++i)
        {
            cout << "Buoc " << i + 1 << ": ";
            for(int j = i + 1; j < n; ++j) if(v[i] > v[j]) swap(v[i], v[j]);
            for(int i : v) cout << i << ' ';
            cout << endl;
        }
    }
    return 0;
}
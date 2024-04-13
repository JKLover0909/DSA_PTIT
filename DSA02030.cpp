#include<bits/stdc++.h>
using namespace std;


int k;
char n;

void Try(int i, string s = "", char c = 'A')
{
    if(i == k)
    {
        cout << s << endl;
        return;
    }
    for(char j = c; j <= n; ++j) Try(i + 1, s + j, j);
}

int main()
{

    int t = 1;
    //cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(0);
    }
    return 0;
}

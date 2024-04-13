#include <bits/stdc++.h>
using namespace std;
int n, a[10010]; int main() { cin >> n; for (int i = 0; i < n; i++) cin >> a[i]; sort(a, a + n, greater<int>()); cout << max(a[0] * a[1] * a[2], a[0] * a[n - 1] * a[n - 2]); return 0; }
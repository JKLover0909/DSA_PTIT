#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int la = a.size(), lb = b.size();
        if (la % lb == 0 || lb % la == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


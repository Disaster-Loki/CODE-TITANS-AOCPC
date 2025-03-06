#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int a = s[0] + s[1] + s[2], b = s[3] + s[4] + s[5];
        cout << (a == b ? "YES" : "NO") << '\n';
    }
    return (0);
}

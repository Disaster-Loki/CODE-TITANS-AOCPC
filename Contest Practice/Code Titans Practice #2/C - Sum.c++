#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a, b, c; cin >> t;
    string res;
    while (t--)
    {
        cin >> a >> b >> c;
        res += (a + b == c || a + c == b || b + c == a) ? "YES\n" : "NO\n";
    }
    cout << res;
    return (0);
}


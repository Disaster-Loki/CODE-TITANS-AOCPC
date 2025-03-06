#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        for (char &c : s) c = toupper(c);
        cout << (s == "YES" ? "YES" : "NO") << '\n';
    }
    return (0);
}

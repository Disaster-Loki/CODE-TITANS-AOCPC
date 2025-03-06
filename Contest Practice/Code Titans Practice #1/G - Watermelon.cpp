#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    cout << (((n % 2 == 0) && n > 2) ? "YES": "NO") << endl;
    return (0);
}
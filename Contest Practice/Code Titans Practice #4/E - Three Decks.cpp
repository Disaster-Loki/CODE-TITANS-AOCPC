#include <iostream>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int tot = a + b + c;
        if (tot % 3 == 0 && tot / 3 >= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

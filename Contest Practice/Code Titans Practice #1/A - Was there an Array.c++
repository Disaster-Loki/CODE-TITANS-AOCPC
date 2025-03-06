#include <iostream>
#include <vector>
using namespace std;

void solve(int n, vector<int>& b)
{
    for (int i = 0; i < n - 3; i++)
    {
        if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; i++)
            cin >> b[i];
        solve(n, b);
    }
    return 0;
}

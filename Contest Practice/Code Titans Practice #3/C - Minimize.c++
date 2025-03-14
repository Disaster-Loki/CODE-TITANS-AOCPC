#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        vector<int> v(2);
        for (int i = 0; i < 2; i++) cin >> v[i];
        cout << (v[1] - v[0]) << endl;
    }
    return 0;
}

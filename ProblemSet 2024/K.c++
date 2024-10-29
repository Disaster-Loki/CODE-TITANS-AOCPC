// Game
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p1, p2; cin >> p1 >> p2;
    if (p1 == p2)
    {
        cout << "d" << endl;
        return (0);
    }
    cout << ((p1 < p2) ? "p1":"p2") << endl;
    return (0);
}
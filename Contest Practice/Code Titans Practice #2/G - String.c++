#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ops = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '1')
                ops++;
        cout << ops << endl;
    }
    return 0;
}

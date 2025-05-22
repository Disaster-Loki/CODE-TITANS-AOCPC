#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int zeros = 0, ones = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == '0') zeros++;
            if (b[i] == '0') zeros++;
            if (a[i] == '1') ones++;
            if (ones > zeros) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}

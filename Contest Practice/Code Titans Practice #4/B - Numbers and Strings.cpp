#include <iostream>
#include <set>
#include <string>
#include <algorithm>
// Nao passou - TLE
using namespace std;

string S(int x) {
    int y = x + 1;
    string concat = to_string(x) + to_string(y);
    sort(concat.begin(), concat.end());
    return concat;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set<string> dist;
        for (int x = 1; x <= n; ++x)
            dist.insert(S(x));
        cout << (int)dist.size() << '\n';
    }
    return 0;
}


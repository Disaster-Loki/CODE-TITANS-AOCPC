#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canSplit(const string &s, int a, int b, int ab, int ba) {
    int countA = 0, countB = 0, countAB = 0, countBA = 0;
    vector<int> abBlocks, baBlocks;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'A') countA++;
        else countB++;

        int len = 1;
        while (i + 1 < s.size() && s[i] != s[i + 1]) {
            ++len;
            ++i;
        }
        if (len == 2) {
            if (s[i - 1] == 'A' && s[i] == 'B') countAB++;
            else if (s[i - 1] == 'B' && s[i] == 'A') countBA++;
        }
    }
    return countA <= a && countB <= b && countAB <= ab && countBA <= ba;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        int a, b, ab, ba;
        cin >> s >> a >> b >> ab >> ba;
        cout << (canSplit(s, a, b, ab, ba) ? "YES" : "NO") << '\n';
    }
    return 0;
}

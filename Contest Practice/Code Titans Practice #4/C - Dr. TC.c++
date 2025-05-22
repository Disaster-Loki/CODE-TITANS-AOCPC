#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int count_ones = 0;
        for (char c : s) {
            if (c == '1') count_ones++;
        }
        int total_ones = 0;
        for (char c : s) {
            if (c == '1') {
                total_ones += count_ones - 1;
            } else {
                total_ones += count_ones + 1;
            }
        }
        cout << total_ones << endl;
    }

    return 0;
}

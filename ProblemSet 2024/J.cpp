#include <bits/stdc++.h>
using namespace std;

string strcat_alt(char a[], char b[]) {

}

void solve() {
    int n, m, c;
    cin >> n >> m;
    char s[n + 1], t[m+1], x[n + 1];
    cin >> s >> t;
    c = 0;
    for (int i = 0; i < n / 2; i++) {
        x[c++] = s[i];
        for (int j = n - 1; j >= n / 2 ; j--) {
            x[c++] = s[j];
            break;
        }
    }
    x[c] = '\0';
    string str = x;
    if(str.find((string)t) != -1)
        cout << "Saba7" << endl;
    else 
        cout << "Wa7eed" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
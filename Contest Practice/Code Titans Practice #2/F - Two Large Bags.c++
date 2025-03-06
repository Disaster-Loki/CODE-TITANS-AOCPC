#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n), aux(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (aux.size() == a.size())
                break;
            aux.push_back(*min_element(a.begin(), a.end()));
            auto it = find(a.begin(), a.end(), aux[i]);
            if (it != a.end()) a.erase(it);
            for (int k = 0; k < n; k++)
                if (aux[k] == a[k])
                    a[k]++; break;
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        int sum2 = accumulate(aux.begin(), aux.end(), 0);
        
        if (sum == sum2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

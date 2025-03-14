#include <iostream>
#include <vector>
using namespace std;

bool solve(const vector<int> &melody)
{
    for (size_t i = 0; i < melody.size() - 1; i++)
    {
        int inter = abs(melody[i] - melody[i + 1]);
        if (inter != 5 && inter != 7)
            return false;
    }
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        vector<int> melody(n);
        for (int i = 0; i < n; i++)
            cin >> melody[i];
            
        cout << (solve(melody) ? "YES" : "NO") << endl;
    }
    return 0;
}

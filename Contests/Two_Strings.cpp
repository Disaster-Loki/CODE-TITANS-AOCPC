#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p; cin >> p;
    stringstream output;
    while (p--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        set<char> charsInS1(s1.begin(), s1.end());
        bool common = false;
        for (char ch: s2)
        {
            if (charsInS1.find(ch) != charsInS1.end())
                common = true; break;
        }
        if (common)
            output << "YES" << endl;
        else
            output << "NO" << endl;
    }
    cout << output.str();
    return (0);
}
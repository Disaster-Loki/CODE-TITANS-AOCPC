#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int ft_strchr(std::string s1, std::string s2)
{
    int count = 0;
    size_t pos = 0;
    while ((pos = s2.find(s1, pos)) != std::string::npos)
    {
        count++;
        pos += s1.length();
    }
    return count;
}

bool solve(string s, vector<int> v)
{
    int a = v[0], b = v[1], ab = v[2], ba = v[3];
    int count = 0;
    if (a != 0 && ft_strchr("A", s) >= a)
        count++;
    if (b != 0 && ft_strchr("B", s) >= b)
        count++;
    if (ab != 0 && ft_strchr("AB", s) >= ab)
        count++;
    if (ba != 0 && ft_strchr("BA", s) >= ba)
        count++;
    return (count > 0 && ft_strchr("A", s) >= a
            && ft_strchr("B", s) >= b
            && ft_strchr("AB", s) >= ab
            && ft_strchr("BA", s) >= ba);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stringstream output;
    int t; 
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string s; cin >> s;
        vector<int> v(4);
        for (int i = 0; i < 4; i++) cin >> v[i];
        output << (solve(s, v) ? "YES":"NO") << endl;
    }
    cout << output.str();
    return 0;
}

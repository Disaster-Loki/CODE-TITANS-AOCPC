#include <iostream>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> array(n);
    vector<int> v(n, -1);
    stack<int> s;
    stringstream output;
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && array[s.top()] < array[i])
        {
            v[s.top()] = array[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++)
        output << v[i] << " ";
    output << endl;
    cout << output.str();
}
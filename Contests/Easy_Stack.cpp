#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, n, op;
    stack<int> s;
    stringstream output;

    cin >> T;
    while (T--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> n;
            s.push(n);
        }
        else if (op == 2 && !s.empty())
            s.pop();
        else if (op == 3)
        {
            if (s.empty())
                output << "Empty!" << endl;
            else
                output << s.top() << endl;
        }
    }
    cout << output.str();
    return (0);
}

#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, n, op;
    queue<int> q;
    stringstream output;

    cin >> T;
    while (T--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> n;
            q.push(n);
        }
        else if (op == 2 && !q.empty())
            q.pop();
        else if (op == 3)
        {
            if (q.empty())
                output << "Empty!" << endl;
            else
                output << q.front() << endl;
        }
    }
    cout << output.str();
    return (0);
}

#include <iostream>
#include <random>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<> dis(1, 1000000000);
    int N = dis(gen);
    int X, i = -1;
    while (++i < 30)
    {
        cin >> X;
        if (N == X)
        {
            cout << "=\n" << "! " << N << endl;
            cout.flush();
            break;
        }
        if (N < X)
            cout << "<" << endl;
         if (N > X)
            cout << ">" << endl;
    }
    if (i == 30)
        cout << "Wrong Answer" << endl;
    return (0);
}
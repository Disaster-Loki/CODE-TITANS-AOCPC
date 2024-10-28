#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int bit_ones(int n)
{
    int count = 0;
    while (n > 0)
    {
        count = (n & 1);
        n = n >> 1;
    }
    return (count);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    vector<int> array(T);
    stringstream output;
    for(int i; i < T; i++)
    {
        cin >> array[i];
        output << ((bit_ones(array[i]) < 2) ? "-1":"") << endl;
    }
    cout << output.str();
    return (0);
}
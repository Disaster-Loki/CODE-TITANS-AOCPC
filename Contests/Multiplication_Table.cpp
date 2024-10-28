#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum, i; cin >> n;
    vector<int> vec;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += i;
            vec.push_back(sum);
        }
    }
    sort(vec.begin(), vec.end());
    i = (vec.size() - 1)/2;
    cout << vec[i] << endl;
    return (0);
}
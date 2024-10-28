#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, count = 0; cin >> N;
    vector<int> array(N);
    for (int i = 0; i < N; i++)
        cin >> array[i];
    for (int i = 0; i < N; i++)
    {
        while (array[i] > 0)
        {
            --array[i];
            ++count;
        }
        while (array[i] < 0)
        {
            ++array[i];  
            
            ++count;
        }
    }
    cout << count << endl;
    return (0);
}
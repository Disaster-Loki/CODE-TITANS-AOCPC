#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int d, sumTime;
    cin >> d >> sumTime;
    vector<int> minTimes(d), maxTimes(d);
    int minTotal = 0, maxTotal = 0;  
    for (int i = 0; i < d; ++i) {
        cin >> minTimes[i] >> maxTimes[i];
        minTotal += minTimes[i];
        maxTotal += maxTimes[i]; 
    }
    if (sumTime < minTotal || sumTime > maxTotal)
	{
        cout << "NO" << endl;
        return 0;
    }
    vector<int> schedule(d);
    int remainingTime = sumTime - minTotal;
    for (int i = 0; i < d; ++i)
        schedule[i] = minTimes[i];
    for (int i = 0; i < d; ++i)
	{
        int availableTime = maxTimes[i] - minTimes[i];
        int timeToAdd = min(remainingTime, availableTime);
        schedule[i] += timeToAdd;
		remainingTime -= timeToAdd;
    }
    if (remainingTime > 0)
	{
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < d; ++i)
        cout << schedule[i] << " ";
    cout << endl;
    return 0;
}

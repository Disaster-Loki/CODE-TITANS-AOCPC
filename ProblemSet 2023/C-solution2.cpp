#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int capacity;
    int queries;
    int count = 1;
    map<string, int> cars;
    queue<int> exits;

    cin >> capacity;
    cin >> queries;

    for (size_t i = 0; i < queries; i++)
    {  
        string aux;
        cin >> aux;
        string order = aux;
        cin >> aux;
        string idcar = aux;

        if(order == "E" && count <= capacity)
        {
            if(!exits.empty())
            {
                cout << "Good morning sir, please proceed to slot number " << exits.front() << '\n';
                cars[idcar] = exits.front();
                exits.pop();
                count++;
            }
            else
            {
                cout << "Good morning sir, please proceed to slot number " << count<< '\n';
                cars[idcar] = count++;
            }
        }
        else if(order == "L")
        {
            exits.push(cars[idcar]);
            count--;
        }
        else
        {
            cout << "Sorry sir, no available slots" << '\n';
        }
    
    }

    return 0;
}
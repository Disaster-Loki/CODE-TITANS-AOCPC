#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int    ft_binary_search(vector<int> v, int key)
{
    int low = 0;
    int steps = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        cout << "Steps : " << steps++ << endl; 
        int mid = low + (high - low)/2;
        if (v[mid] == key)
            return (mid);
        if (v[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return (-1);
}

int main()
{
    /*vector<int> vec;

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(25);
    int next;
    for (int i = 0;i < vec.size(); i++)
    {
        next = -1;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] < vec[j])
                next = vec[j];
            break;
        }
        cout << vec[i] << " -> " << next << endl;
    }

    // Pilha monotonica crescente

    stack<int> pilha;
    vector<int> resultado;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(5);        cout << "Steps : " << steps++ << endl; ;

    for (int i = 0; i < n; i++)
    {
        while (!pilha.empty() && pilha.top() > nums[i])
            pilha.pop();
        pilha.push(nums[i]);
    }
    while (!pilha.empty())
    {
        cout << pilha.top() << endl;
        pilha.pop();
    }
    while (!pilha.empty())
    {
        resultado.insert(resultado.begin(), pilha.top());
        pilha.pop();
    }*/
    //cout << endl;

    // Binary Search
    vector<int> vec2;
    for (int i = 1; i <= 10; i++)
        vec2.push_back(i);
    for (int i = 0; i < 10; i++)
    {
        cout << i << " -> " << vec2[i] << endl;
    }
    int index = ft_binary_search(vec2, 1);
    cout << "Index: " << index << endl;

    return (0);
}
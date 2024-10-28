#include <iostream>
#include <utility> // pair
#include <vector> // Vector
#include <bits/stdc++.h>

using namespace std;

bool    cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second);
}

bool    cmp_list(int a, int b)
{
    return (a > b);
}

int main()
{
    // Pairs
    pair<int, char> par0;
    par0.first = 100;
    par0.second = 'S';
    cout << "First: " << par0.first << endl;
    cout << "Second: " << par0.second << endl;

    pair<int, int> par1(1, 2);
    par1 = make_pair(2, 3);
    cout << "First: " << par1.first << endl;
    cout << "Second: " << par1.second << endl;

    auto [x, y] = par1;

    cout << "First: " << x << endl;
    cout << "Second: " << y << endl;

    // Vectors

    vector<int> v1;

    for (int i = 0;i < 5;i++)
        v1.push_back(i);
    v1.pop_back();
    for (int i = 0; i < (int) v1.size(); i++)
    {
        //cout << v1[i] << " ";
        cout << v1.at(i) << " ";
    }
    cout << endl;

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    v1.resize(10);
     cout << "New Size: " << v1.size() << endl;

    v1.push_back(8);
    cout << "[11]: " << v1.at(10) << endl;
    for (int i = 0; i < (int) v1.size(); i++)
    {
        //cout << v1[i] << " ";
        cout << v1.at(i) << " ";
    }
    cout << endl;

    cout << "First: " << v1.front() << endl;
    cout << "Last: " << v1.back() << endl;

    //v1.clear();
    for (int i = 0; i < (int) v1.size(); i++)
    {
        //cout << v1[i] << " ";
        cout << v1.at(i) << " ";
    }
    cout << endl;

    if (v1.empty())
        cout << "Empty" << endl;

    sort(v1.begin(), v1.end()); // crescente
    sort(v1.rbegin(), v1.rend()); // descrescente

    vector<int> v3 {2, -1};
    vector<pair<int, int>> v2 (3, {-1, -1});

    v2[0] = {1, 2};
    v2[1] = {1, 3};
    v2[2] = {4, 5};

    sort(v2.begin(), v2.end(), cmp);

    for (auto [x, y]: v2)
    {
        cout << x << " " << y << endl;
    }

    // 2D

    int rows = 3, cols = 4;
    vector<vector<bool>> vis(rows, vector<bool>(cols, false));

    for (int i=0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "[" << vis[i][j] << "]" << " ";
        }
        cout << endl;
    }

    int N = 4;
    vector<vector<int>> adjList(N + 1, vector<int>());

    int m = 4;
    for (int i=0;i < m;i++)
    {
        int u = i;
        int v = m - i;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout << endl;
    cout << "Lista de Adjancencias" << endl;
    for (int i = 0;i < N; i++)
    {
        cout << "[" << i << "] --> ";
        for (int x: adjList[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Lists
    cout << "List: " << endl;
    list<int> list1, list2;

    for(int i=0;i <= 4;i++)
    {
        list1.push_back(i);
        list2.push_front(i);
    }

    list1.sort(cmp_list);
    list1.pop_back();
    list1.pop_front();

    list<int>::iterator it;
    for (it = list1.begin(); it != list1.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    // Stacks

    cout <<  "Stacks " << endl;
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    cout << "Top -> " << stack.top() << endl;
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    cout << "Is_empty -> " << stack.empty() << endl;

    // Queue

    queue<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    cout << "Size: " << queue.size() << endl;
    cout << "Front: " << queue.front() << endl;
    cout << "Back: " << queue.back() << endl;

    while (!queue.empty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }

    // Priority Queue
    priority_queue<int> pq;

    pq.push(10);
    pq.push(98);
    pq.push(34);
    pq.push(110);
    cout << "Priority Top: " << pq.top() << endl;
    cout << "Priority Queue" << endl;
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    // Set, multiset, map;

    // SET
    cout << endl;
    cout << "Set" << endl;
    set<char> conjunt;
    for (char ch = 'a';ch <= 'f';ch++)
    {
        conjunt.insert(ch);
    }
    conjunt.insert('a');
    for (auto x: conjunt)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Frequenc {a}: " << conjunt.count('a') << endl;
    cout << "Frequenc {i}: " << conjunt.count('i') << endl;

    auto it_conj = conjunt.find('a');
    //cout << *it_conj << endl;
    conjunt.erase(it_conj);
    for (auto x: conjunt)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Lower_bound{a}: " << *conjunt.lower_bound('a') << endl;
    cout << "Upper_bound{a}: " << *conjunt.upper_bound('a') << endl;

    set<int> conj_cres;
    set<int, greater<int>> conj_decres;
    conj_decres.insert(10);
    conj_decres.insert(20);
    conj_decres.insert(30);
    for (auto x: conj_decres)
        cout << x << " ";
    cout << endl;

}
/***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    I.c++                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: optimus-prime <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 12:46:17 by optimus-prime     #+#    #+#              #
#    Updated: 2024/11/21 12:46:22 by optimus-prime    ###   ########.fr        #
#                                                                              #
# *****************************************************************************/

// Tree MEX Queries
#include <iostream>
#include <vector>
#include <set>
#include <sstream>
using namespace std;

const int MAXN = 1e6 + 5;

vector<int> tree[MAXN]; // Lista de adjacências para a árvore
int values[MAXN];       // Valores escritos nos nós (permutação)

// Função de coleta dos valores na subárvore usando DFS
void collectValuesDFS(int node, set<int> &Values) {
    Values.insert(values[node]);
    for (int child : tree[node]) {
        collectValuesDFS(child, Values);
    }
}

// Calcula o MEX (Menor Número Positivo Ausente)
int MEX(const set<int> &Values) {
    int mex = 1;
    while (Values.find(mex) != Values.end())
        mex++;
    return mex;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stringstream output;
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> values[i];
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        tree[u].push_back(v);
    }
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int l, r;
            cin >> l >> r;
            swap(values[l], values[r]);
        } else if (op == 2) {
            int u;
            cin >> u;
            set<int> Values;
            collectValuesDFS(u, Values);
            output << MEX(Values) << endl;
        }
    }
    cout << output.str();
    return 0;
}

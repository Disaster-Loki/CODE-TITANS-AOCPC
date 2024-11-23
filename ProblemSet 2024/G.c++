/***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    G.c++                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: optimus-prime <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 11:15:57 by optimus-prime     #+#    #+#              #
#    Updated: 2024/11/23 11:16:02 by optimus-prime    ###   ########.fr        #
#                                                                              #
# *****************************************************************************/

// Amin's Campaign
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

vector<int> costs(int n, int x, vector<int>& h)
{
    vector<int> costs;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
            costs.push_back(h[i] + x * k);
    }
    return (costs);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stringstream output;
    int t; cin >> t;
    while (t--)
    {
        int n, m, x; cin >> n >> m >> x;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];
        vector<int> cost = costs(n, x, h);
        sort(cost.begin(), cost.end());
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += cost[i];
        output << sum << endl;
    }
    cout << output.str();
    return (0);
}


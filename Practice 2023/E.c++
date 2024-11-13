/******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    E.c++                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: optimus-prime <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 03:36:02 by optimus-prime     #+#    #+#              #
#    Updated: 2024/11/13 03:36:07 by optimus-prime    ###   ########.fr        #
#                                                                              #
# *****************************************************************************/

// Guess Number
#include <iostream>
#include <sstream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<> dist(1, 1000000000);
    int N = dist(gen);
    long X;
    int i = 0;
    while (i < 30)
    {
        cin >> X;
        if (N == X)
        {
            cout << "=\n" << "! " << N << endl;
            cout.flush();
            break;
        }
        if (N > X)
            cout << ">" << endl;
        if (N < X)
            cout << "<" << endl;
    }
    if (i == 30)
        cout << "Wrong Answer" << endl;
    return (0);
}

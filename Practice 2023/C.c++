/***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    C.c++                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: optimus-prime <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 02:55:15 by optimus-prime     #+#    #+#              #
#    Updated: 2024/11/13 02:55:44 by optimus-prime    ###   ########.fr        #
#                                                                              #
# *****************************************************************************/

#include <iostream>
#include <sstream>
using namespace std;

int bit_ones(int n)
{
    int count = 0;
    while (n > 0)
    {
        count = (n & 1);
        n >>= 1;
    }
    return (count);
}
int main()
{
    int t, n; cin >> t;
    stringstream output;
    while (t--)
    {
        cin >> n && output << ((bit_ones(n) < 2) ? "-1":"") << endl;
    }
    return (0);
}

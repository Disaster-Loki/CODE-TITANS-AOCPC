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

// Rady and His Arms
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, l1,l2; cin >> t;
    stringstream output;
    while (t--)
        cin >> l1 >> l2 && output << l2 + 1 << endl;
    cout << output.str();
    return (0);
}
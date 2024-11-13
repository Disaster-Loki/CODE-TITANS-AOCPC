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
#include <algorithm>

using namespace std;

int ft_gcd(int a, int b)
{
    if (b == 0)
        return (a);
    return (ft_gcd(b, a % b));
}

int main() {
    stringstream output;
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        output << ((ft_gcd(a, b) > 1) ? "YES":"NO") << endl;
    }
    cout << output.str();
    return 0;
}

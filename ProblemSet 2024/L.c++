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

// Nablus Nostalgia
#include <iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n; cin >> n && cout << ((n % 2 == 0) ? "Work\n":"Rest\n");
  return (0);
}
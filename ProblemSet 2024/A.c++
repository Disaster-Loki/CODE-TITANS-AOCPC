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

// Wu-Tang and Monsters
#include <iostream>
#include <vector>

using namespace std;

void    swap(int *arr)
{
    arr[0] = arr[0] ^ arr[1];
    arr[1] = arr[0] ^ arr[1];
    arr[0] = arr[0] ^ arr[1];
}

void    rotate(int *arr)
{
    int aux = arr[2];
    arr[2] = arr[0];
    arr[0] = arr[1];
    arr[1] = aux;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h, l, a; cin >> n;
    vector<int> array(n); 
    cin >> h >> l >> a;
    for (size_t i = 0; i < n; i++)
        cin >> array[i];
}
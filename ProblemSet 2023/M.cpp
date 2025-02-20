/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   M.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/02/20 17:37:12 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/02/20 17:51:58 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//#include <stdlib.h>

using namespace std;

int	ft_unfinished(int a)
{
	if (a == 1)
		return (0);
	else
		return (a - 1 + ft_unfinished(a - 1));
}

// Ate eu econtrar uma formula matematica pra isso
// a solucao sera essa, que carece otimizacao
int	main(void)
{
	int	size;
	//int	*values;
	int	np, ni;
	int	val;

	cin >> size;
	np = ni = 0;
	//values = (int *) calloc(size, sizeof(int));
	for (int i = 0; i < size; i++)
	{
		cin >> val;
		if (val % 2)
			ni++; // conta pares
		else
			np++; // conta impares
	}
	cout << ft_unfinished(np) + ft_unfinished(ni) << endl;
	//free(values);
}

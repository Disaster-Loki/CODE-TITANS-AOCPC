/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   D.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/02/16 22:48:24 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/02/16 23:26:51 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

using namespace std;

int	is_in(int num, int *array, int size)
{
	int	index;

	index = 0;
	while (index < size)
		if (*(array + index++) == num)
			return (1);
	return (0);
}

int	main(void)
{
	int	n;
	int	m;
	int	*a;
	int	*b;
	int	k;
	int	*p;
	int	counter;
	int	aux;

	cin >> n >> m;
	a = (int *) malloc(sizeof(int) * n);
	b = (int *) malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
	for (int i = 0; i < n; i++)
		cin >> *(b + i);
	cin >> k;
	p = (int *) malloc(sizeof(int) * k);
	for (int i = 0; i < k; i++)
                cin >> *(p + i);
	// here it comes...
	counter = 0;
	for (int i = 0; i < n; i++)
	{
		aux = (*(a + i) + *(b + i)) / 2;
		counter += is_in(aux, p, k);
	}
	cout << counter << endl;	
	free(a);
	free(b);
	free(p);
	return (0);
}

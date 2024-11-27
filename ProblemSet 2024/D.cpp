/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   D.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2024/11/27 17:51:27 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2024/11/27 19:10:05 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int	compute(int *array, int size)
{
	int	x;
	//int	m;
	int	index;

	x = *(min_element(array, array + size));
	if (x == 1)
		return (-1);
	index = 0;
	while (index < size)
	{
		if (*(array + index) % x)
			return (-1);
		index++;
		//m = *(array + index) / x;
	}
	return (x);
}

int	main(void)
{
	int	testcases;
	int	size;
	int	index;
	int	*array;

	cin >> testcases;
	while (testcases--)
	{
		cin >> size;
		array = (int *) malloc(sizeof(int) * size);
		index = 0;
		while (index < size)
		{
			cin >> *(array + index);
			index++;
		}
		cout << compute(array, size) << endl;
		free(array);
	}
	return (0);
}

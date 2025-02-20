/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   G.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/02/20 12:48:04 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/02/20 13:00:50 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

// A minha confianca de que essa e a solucao e de 1%
int	main(void)
{
	int		testcases;
	int		size;
	int		*aux;
	stringstream	stream;

	cin >> testcases;
	while (testcases--)
	{
		cin >> size;
		aux = (int *) malloc(sizeof(int) * size);
		for(int i = 0; i < size; i++)
		{
			cin >> *(aux + i);
		}
		free(aux);
		stream << (int) pow(2, size - 1) << endl;
	}
	cout << stream.str();
}

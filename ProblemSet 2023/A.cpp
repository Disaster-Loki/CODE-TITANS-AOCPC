/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   A.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/01/24 18:16:43 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/01/26 08:00:17 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <sstream>

using namespace std;

int	main(void)
{
	int		t;
	int		k;
	int		*friends;
	int		cur;
	int		cmp;
	int		total;
	stringstream	stream;

	cin >> t;
	while (t--)
	{
		cin >> k;
		if (k == 1)
		{
			stream << 1 << endl;
			continue;
		}
		friends = (int *) malloc(sizeof(int) * k);
		for (int i = 0; i < k; i++)
		{
			cin >> cur;
			*(friends + i) = cur;
		}
		sort(friends, friends + k);
		cmp = 0;
		total = 0;
		while (cmp < k)
		{
			cur = *(friends + cmp);	
			total++;
			cmp += cur;
		}
		stream << total << endl;
		free(friends);
	}
	cout << stream.str();
}

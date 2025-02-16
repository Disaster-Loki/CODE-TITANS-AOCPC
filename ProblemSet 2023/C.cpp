/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   C.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/02/15 17:53:04 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/02/16 20:28:06 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

int	main(void)
{
	int	slots;
	int	queries;
	int	*park;
	int	hashcode;
	char	operation;
	string	input;

	cin >> slots >> queries;
	park = (int *) calloc(slots, sizeof(int));
	while (queries--)
	{
		cin >> operation >> input;
		hashcode = (int) hash<string>()(input);
		for (int i = 0; i < slots; i++)
		{
			if (operation == 'E')
			{
				if (!*(park + i))
                                {
                                        *(park + i) = hashcode;
					cout << "Good morning sir, please proceed to slot number " << i + 1 << endl;
                                        break;
                                }
				else if (i == slots - 1)
					cout << "Sorry sir, no available slots\n";
			}
			else if (operation == 'L') // so pra garantir
			{
				if (*(park + i) == hashcode)
                                {
                                        *(park + i) = 0;
                                        break;
                                }
			}
		}
	}
	free(park);
}

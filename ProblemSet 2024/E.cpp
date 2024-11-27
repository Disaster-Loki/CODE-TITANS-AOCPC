/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   E.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2024/11/27 19:15:16 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2024/11/27 19:40:33 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	primes[] = {2, 11, 101, 1009, 10007, 100003, 1000003, 10000019};
	int	input;

	cin >> input;
	cout << primes[input - 1] << endl;
	return (0);
}

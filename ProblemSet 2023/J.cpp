/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   J.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/02/20 13:01:51 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/02/20 13:39:23 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#define JUMPS (9)

using namespace std;

int	main(void)
{
	char	c;
	
	cin >> c;
	c = ('z' - c);
	if (c < 9)
		cout << 1 << endl;
	else
		cout << ((int) c / 9) + (((int) c % 9) ? 1 : 0)  << endl;
}

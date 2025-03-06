/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   I - Registration System.cpp                          /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2025/03/06 18:37:58 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2025/03/06 18:38:54 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

using namespace std;

int	main(void)
{
	int			queries;
	string			user;
	map<string, int> 	database;

	cin >> queries;
	while (queries--)
	{
		cin >> user;
		if (!database.count(user))
		{
			database[user] = 1;
			cout << "OK" << endl;
		}
		else
		{
			database[user];
			cout << user << database[user]++ << endl;
		}
	}
}


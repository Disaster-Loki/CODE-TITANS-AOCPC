/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   B.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2024/11/05 20:45:44 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2024/11/05 22:28:47 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

long	max_prime = 0;

long	next_prime(long prime)
{
	long	div;

	div = 2;
	++prime;
	while (div != prime)
	{
		if (!(prime % div))
		{
			++prime;
			div = 2;
		}
		div++;
	}
	return (prime);
}

long	wawa(long l, long r, long x, long *a)
{
	int	counter;
	long	c_prime;
	long	aux; // pra nao bugar o bagulho no segundo loop

	c_prime = 2;
	if (max_prime)
		c_prime = max_prime;
	x = *(a + x - 1); // poderia fazer diretamente no ponteiro, mas isso vai bugar a poha toda
	while (1 && (c_prime > max_prime))
	{
		if (!(x % c_prime))
		{
			x /= c_prime;
			if (x == 1)
				break;
			else
				while (!(x % c_prime))
					x /= c_prime;
		}
		c_prime = next_prime(c_prime); //cout << "next prime " << *(a + x) << endl;
	}
	//segundo loop
	counter = 0;
	aux = *(a + l - 1);
	while (l <= r)
	{
		if (!(aux % c_prime))
		{
			aux /= c_prime;
			counter++;
		}
		else
		{
			l++;
			aux = *(a + l -1);
		}
		//cout << *(a + l - 1) << endl;
	}
	return (counter);
}

int	main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long		testcases;
	long		n;
	long		q;
	long		*a;
	long		aux;
	long		l;
	long		r;
	long		x;
	stringstream	stream;

	cin >> testcases;
	while (testcases--)
	{
		cin >> n >> q;
		a = (long *) malloc(sizeof(long) * n);
		aux = 0;
		while (aux < n)
			cin >> *(a + aux++);
		while (q--)
		{
			cin >> l >> r >> x;
			//cout << l << " " << r << " " << x << endl;
			stream << wawa(l, r, x, a) << endl;
		}
		free(a);
	}
	cout << stream.str();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                         ___       ___      */
/*   A.cpp                                                /\  \     /\  \     */
/*                                                       /::\  \    \:\  \    */
/*   By: Rafael_Marcos <rafix995@gmail.com>             /:/\:\__\   /::\__\   */
/*                                                      \:\ \/__/  /:/\/__/   */
/*   Created: 2024/11/26 20:48:12 by Rafael_Marcos       \:\__\    \/__/      */
/*   Updated: 2024/11/26 20:48:54 by Rafael_Marcos        \/__/               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

// Selects the most suitable body part to defeat the
// first monster.
int	select_first(int monster, int hla[3])
{
	int	i;
	int	weakest;
	int	strongest;

	weakest = 0;
	strongest = 0;
	i = 0;
	while (i < 3)
	{
		if (hla[i] < hla[weakest])
			weakest = i;
		else if (hla[i] > hla[strongest])
			strongest = i;
		else if (hla[i] == monster)
			return (i);
		i++;
	}
	if (monster > strongest)
		return (strongest);
	else
		return (weakest);
}

// Selects the most suitable body part
// to defeat the next monster

int	select_next(int monster, int hla[3], int cur)
{
	int	t1;
	int	t2;
	int	op1;
	int	op2;

	op1 = (cur + 1) % 3;
	op2 = (cur + 2) % 3;
	if (hla[op1] < monster && hla[op2] < monster)
	{
		if (hla[op1] > hla[op2])
			return (op1);
		else
			return (op2);
	}
	else if (hla [op1] > monster && hla[op2] > monster)
	{
		if (hla[op1] < hla[op2])
			return (op1);
		else
			return (op2);
	}
	else
	{
		t1 = monster - hla[op1];
		t2 = monster - hla[op2];
		if (t1 < t2)
			return (op1);
		else
			return (op2);
	}
}

int	main(void)
{
	int	n;
	int	hla[3];
	int	i_hla;
	int	i_monsters;
	int	ops;
	int	*monsters;

	cin >> n >> hla[0] >> hla[1] >> hla[2];
	monsters = (int *) malloc(sizeof (int) * n);
	i_monsters = 0;
	while (i_monsters < n)
		cin >> *(monsters + i_monsters++);
	i_hla = select_first(monsters[0], hla);
	i_monsters = 0;
	ops = 0;
	while (i_monsters < n)
	{
		*(monsters + i_monsters) -= hla[i_hla];
		if (*(monsters + i_monsters) <= 0)
		{
			i_monsters++;
			i_hla = select_next(*(monsters + i_monsters), hla, i_hla);
		}
		++ops;
	}
	cout << ops << endl;
	free(monsters);
	return (0);
}

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool	is_palindrome(string str)
{
	int	start;
	int	end;

	start = 0;
	end = str.length() - 1;
	while (start < end)
		if (str[start++] != str[end--])
			return (false);
	return (true);
}

bool	has_right_count(string str, int a, int b)
{
	bool	has_right_zeroes;
	bool	has_right_ones;

	has_right_zeroes = count(str.begin(), str.end(), '0') == a;
	has_right_ones = count(str.begin(), str.end(), '1') == b;
	return (has_right_ones && has_right_zeroes);
}

void	get_palindromes(int a, int b, vector<string>& v, int index, string str)
{
	if (index > (a + b))
	{
		if (is_palindrome(str) && has_right_count(str, a, b) && find(v.begin(), v.end(), str) == v.end())
			v.push_back(str);
	}
	else
	{
		get_palindromes(a, b, v, index + 1, str);
		str[index] = '1';
		get_palindromes(a, b, v, index + 1, str);
	}
}

int	main(void)
{
	int	testcases;
	int	a;
	int	b;
	vector<string>	v;

	cin >> testcases;
	while (testcases--)
	{
		cin >> a;
		cin >> b;
		get_palindromes(a, b, v, 0, string(a + b, '0'));
		if (v.size())
		{
			cout << v[1] << endl;
			v.clear();
		}
		else
			cout << -1 << endl;
	}
	return (0);
}

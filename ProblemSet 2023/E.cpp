#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int	main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<int> teamA(n);
	vector<int> teamB(n);
	for (int i = 0; i < n; i++) cin >> teamA[i];
	for (int i = 0; i < n; i++) cin >> teamB[i];
	int count = 0;
	if (teamA[0] != *min_element(teamA.begin(), teamA.end())
		&& teamA[teamA.size() - 1] == *max_element(teamA.begin(), teamA.end()))
		count += 1;
	if (teamB[0] != *min_element(teamB.begin(), teamB.end())
		&& teamB[teamB.size() - 1] == *max_element(teamB.begin(), teamB.end()))
		count -= 1;
	if (count == 0)
		cout << "Tie\n";
	if (count == 1)
		cout << "Team A\n";
	if (count == -1)
		cout << "Team B\n";
	return (0);
}

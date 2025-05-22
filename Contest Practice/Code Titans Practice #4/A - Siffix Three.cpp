#include <iostream>
#include <string>
using namespace std;
int	main(void){
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int len = s.size();
		if (s[len - 2] == 'p' && s[len - 1] == 'o') cout << "FILIPINO" << endl;
		if (s[len - 2] == 's' && s[len - 1] == 'u') cout << "JAPANESE" << endl;
		if (s[len - 2] == 'd' && s[len - 1] == 'a') cout << "KOREAN" << endl;
	}
	return (0);
}
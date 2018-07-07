#include <string>

using namespace std;

string solution(string s) {
	string tmp1, tmp2, tmp3;
	if (s.size() % 2)
		tmp3 = s.at(s.size() / 2);
	else {
		tmp2 = s.at(s.size() / 2);
		tmp1 = s.at((s.size() / 2) - 1);
		tmp3 = tmp1 + tmp2;
	}
	return tmp3;

}
#include <string>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int i, pp = 0, yy = 0;
	for (int i = 0; i < s.size(); i++)
		if (s.at(i) == 'p'|| s.at(i) == 'P')
			pp++;
		else if (s.at(i) == 'y'|| s.at(i) == 'Y')
			yy++;
	if (pp == yy)
		answer = true;
	else
		answer = false;
	
	return answer;
}
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	bool answer = true;
	int i;
	if (s.size() != 4 && s.size() != 6)
		answer = false;
	if (answer != false)
		for (i = 0; i < s.size(); i++)
			if ((s.at(i) >= 65 && s.at(i) <= 90) || (s.at(i) >= 97 && s.at(i) <= 122))
				answer = false;
	return answer;
}
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string s) {
	string answer = s;
	int i, j = 0;
	for (i = 0; i < answer.size(); i++) {
		if (answer.at(i) == ' ')
			j = 1;
		else if (j % 2) {
			if (answer.at(i) >= 65 && answer.at(i) <= 90)
				answer.at(i) += 32;
		}
		else
			if (answer.at(i) >= 97 && answer.at(i) <= 122)
				answer.at(i) -= 32;
		j++;
	}

	cout << answer;
	return answer;
}
void main() {
	string s = "";
	cin >> s;
	solution(s);

}
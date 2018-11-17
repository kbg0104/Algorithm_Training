#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	int i, j;
	for (i = 0; i < s.size(); i++) {
		for (j = 0; j < n; j++) {
			if (s.at(i) == 90)
				s.at(i) = 65;
			else if (s.at(i) == 122)
				s.at(i) = 97;
			else if (s.at(i) == ' ')
				continue;
			else s.at(i)++;
		}
	}
	answer = s;
	cout << answer;
	
	return answer;
}
void main() {
	int n;
	string s = "";
	cin >> s;
	cin >> n;
	solution(s, n);
}
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	int i, j;
	for (i = 0; i < s.size(); i++) {
		if (s.at(i) >= 65 && s.at(i) <= 90) {
			s.at(i) += n;
			if (s.at(i) > 90) {
				s.at(i) = 64 + (s.at(i) - 90);
			}
		}
		else if (s.at(i) >= 97 && s.at(i) <= 122) {
			s.at(i) += n;
			if (s.at(i) += n > 122) {
				s.at(i) = 96 + (s.at(i) - 122);
			}
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
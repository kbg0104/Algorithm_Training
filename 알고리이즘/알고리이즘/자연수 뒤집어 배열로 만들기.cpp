#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	string a = to_string(n);
	int i;
	for (i = a.size() - 1; i >= 0; i--)
		answer.push_back(a.at(i) - 48);
	for (i = 0; i < answer.size(); i++)
		cout << answer.at(i);
	return answer;
}
void main() {
	long long n = 123456789;
	solution(n);

}
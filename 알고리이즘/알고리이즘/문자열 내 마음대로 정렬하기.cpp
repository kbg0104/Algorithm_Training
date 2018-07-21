#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	int i, j;
	for (int i = strings.end; i > strings.begin; i--)


	for (i = 0; i < strings.size(); i++)
		answer.push_back(strings.at(i));
	sort(answer.begin(), answer.end());
	return answer;
}
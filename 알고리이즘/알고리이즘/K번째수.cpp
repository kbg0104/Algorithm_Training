#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> sum;
	int i;
	for (i = 0; i < commands.size(); i++) {
		sum = arr;
		sort(sum.begin() + commands.at(i).at(0) - 1, sum.begin() + commands.at(i).at(1));
		answer.push_back(sum.at(commands.at(i).at(2) + commands.at(i).at(0) - 2));
	}
	return answer;
}

void main() {
	int i;
	vector<int> answer;
	vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>> commands = { {2,5,3},{4,4,1},{1,7,3} };
	answer = solution(array, commands);
	for (i = 0; i < answer.size(); i++)
	cout << answer.at(i);
}
#include <string>
#include <vector>
#include <iostream>
#include <assert.h>
#include <algorithm>
using namespace std;

//프로토타입
int PairFirst_in(int);
string solution(vector<int>);



string solution(vector<int> numbers) {
	string answer = "";
	vector<pair<int, int>> sss;
	pair<int, int> s;
	int i;
	for (i = 0; i < numbers.size(); i++) {
		s.second = numbers.at(i);
		s.first = PairFirst_in(numbers.at(i));
		sss.push_back(s);
	}
	
	sort(sss.begin(), sss.end());
	for (i = sss.size() - 1; i >= 0; i--)
		answer = answer + to_string(sss.at(i).second);
	return answer;
}
/************************************/
int PairFirst_in(int n) {
	if (n / 10 == 0)
		return n * 1111;
	if (n / 100 == 0)
		return (n * 100) + (n % 10) * 11;
	if (n / 1000 == 0)
		return (n * 10) + (n % 10);
	return n;
}
/************************************/
void main() {
	vector<int> numbers = { 3, 30, 34, 5, 9 };
	string answer = "";
	solution(numbers);
	cout << answer;
}
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//프로토타입
bool str_sort(string, string);

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> ss;
	int i;
	
	for (i = 0; i < numbers.size(); i++)
		ss.push_back(to_string(numbers.at(i)));
	
	sort(ss.begin(), ss.end(), str_sort);

	for (i = 0; i < ss.size(); i++)
		answer = answer + ss.at(i);
	
	if (answer.at(0) == '0')
		answer = '0';

	return answer;
}
/************************************/
bool str_sort(string a, string b) {
	return a + b > b + a ? true : false;
}
/************************************/
void main() {
	vector<int> numbers = { 0,0,0,0 };
	string answer = solution(numbers);
	cout << answer;
}
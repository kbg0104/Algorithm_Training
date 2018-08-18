#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
	string answer = "";
	vector<char> sum;
	vector<char> sum_b;
	int i;
	//int zero = 0;
	for (i = 0; i < s.size(); i++)
		sum.push_back(s.at(i));
	for (i = (sum.size() - 1); i >= 0; i--) {
		if ((sum.at(i) >= 65 && sum.at(i) <= 90) && i >= 0) {
			sum_b.push_back(sum.at(i));
			continue;
		}
		answer = answer + sum.at(i);
	}
	for (i = 0; i < sum_b.size(); i++)
		answer = answer + sum_b.at(i);
	return answer;
}

void main()
{
	string s = "Zzbcdefg";
	string answer;
	answer = solution(s);
	cout << answer;
}
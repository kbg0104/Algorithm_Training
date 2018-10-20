#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
string solution(string number, int k)
{
	string answer = "";
	vector<int> ss;
	int i, j, c = 0, s = 0, h;
	for (i = 0; i < number.size(); i++) {
		ss.push_back(number.at(i) - 48);
	}
	int g = ss.size() - k;
	for (j = 0; j < g; j++) {
		for (i = s; i <= k; i++) {
			if (c < ss.at(i)) {
				c = ss.at(i);
				h = i;
			}
			
		}
		answer = answer + to_string(c);
		s = h + 1;
		k++;
	}
	

		

	return answer;
}
void main()
{
	string number = "4177252841";
	int k = 4;
	string answer;
	answer = solution(number, k);
	cout << answer;
}
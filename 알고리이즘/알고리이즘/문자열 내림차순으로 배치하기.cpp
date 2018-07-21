#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	vector<char>  sum;
	int i;
	for (i = 0; i < s.size(); i++)
		sum.push_back(s.at(i));
	sort(sum.end(), sum.begin());
	for (i = 0; i < sum.size(); i++)
		answer = answer + sum.at(i);
	return answer;
}
void main()
{
	string s = "Zbcdefg";
	string answer;
	answer = solution(s);
	printf("%s", answer);
}
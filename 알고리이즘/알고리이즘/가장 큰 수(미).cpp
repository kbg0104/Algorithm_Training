#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> ss;
	int i, j;
	string tmp;
	for (i = 0; i < numbers.size(); i++) {
		ss.push_back(to_string(numbers.at(i)));
	}
	

	for (i = 0; i < ss.size() - 1; i++) 
		for (j = 0; j < ss.size() - 1 - i; j++)
		if (ss.at(i).at(0) < ss.at(i + 1).at(0)) {
			tmp = ss.at(i);
			ss.at(i) = ss.at(i + 1);
			ss.at(i + 1) = tmp;
		}
		else if (ss.at(i).at(0) == ss.at(i + 1).at(0)) {
			if (ss.at(i).at(1) < ss.at(i + 1).at(1)) {
				tmp = ss.at(i);
				ss.at(i) = ss.at(i + 1);
				ss.at(i + 1) = tmp;
			}
			else if (ss.at(i).at(1) == ss.at(i + 1).at(1)) {
				if (ss.at(i).at(2) < ss.at(i + 1).at(2)) {
					tmp = ss.at(i);
					ss.at(i) = ss.at(i + 1);
					ss.at(i + 1) = tmp;
				}
				else if (ss.at(i).at(2) == ss.at(i + 1).at(2)) {
					if (ss.at(i).at(3) < ss.at(i + 1).at(3)) {
						tmp = ss.at(i);
						ss.at(i) = ss.at(i + 1);
						ss.at(i + 1) = tmp;
					}
				}
			}
		}
	
	for (i = 0; i < ss.size(); i++)
	cout << ss.at(i);

	return answer;
}
void main()
{
	vector<int> numbers = { 3, 30, 34, 5, 9 };
	string answer = "";
	solution(numbers);
	cout << answer;
}
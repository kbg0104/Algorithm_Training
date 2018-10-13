#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
string solution(string number, int k) {
	string answer = "";
	vector<int> ss, sum, ss_2;
	int i, j;
	for (i = 0; i < number.size(); i++) {
		ss.push_back(number.at(i) - 48);
	}
	ss_2 = ss;
	sort(ss.begin(), ss.end());
	for (i = 0; i < k; i++)
		ss.at(i) = 0;
	for (i = 0; i < ss.size(); i++)
		if (ss.at(i) != 0)
			sum.push_back(ss.at(i));
	
	for (i = 0; i < ss_2.size(); i++)
		for (j = 0; j < sum.size(); j++) {
			if (ss_2.at(i) == sum.at(j))
				ss_2.at(i) = 0;
		
		}
	
		
		
		
	for (i = 0; i < ss.size(); i++)
		cout << sum.at(i);
	return answer;
}





void main() {
	string number = "1924";
	int k = 2;
	solution(number, k);

}
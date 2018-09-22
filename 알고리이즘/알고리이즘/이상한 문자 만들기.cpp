#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string s) {
	string answer = "";
	string word = "";
	vector<string> list;
	stringstream sum(s);
	int i;
	while (sum >> word)
	{
		list.push_back(word);
	}
	
	for (i = 0; i <= list.size(); i++) {
		cout << list.at(i);
	}
	return answer;
}
void main() {
	int n;
	string s = "";
	cin >> s;
	solution(s);

}
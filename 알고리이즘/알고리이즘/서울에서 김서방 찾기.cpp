#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	int i, j;
	string answer = "";
	for (i = 0; i < seoul.size(); i++)
		if (seoul.at(i) == "kim") {
			j = i;
			break;
		}
	//answer = "김서방은 에 있다";
	answer = "김서방은 " + i + "에 있다";
	return answer;
}
#include <iostream>
using namespace std;
void main() {
	string test2 = "";
	int tmp = 3;


}
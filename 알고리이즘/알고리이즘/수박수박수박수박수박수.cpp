#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
	string answer = "";
	int i;
	for (i = 1; i <= n; i++) {
		if (i % 2)
			answer = answer + "��";
		else
			answer = answer + "��";
	}
	
	cout << answer;

	return answer;
}
void main()
{
	int n = 5;
	solution(n);
}
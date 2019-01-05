#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	bool answer = true;
	int i, sum=0;
	string x_s = to_string(x);
	for (i = 0; i < x_s.size(); i++)
		sum = sum + x_s.at(i) - 48;
	answer = x % sum ? false : true;
	return answer;
}
void main() {
	int a = 11;
	solution(a);
}
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	long long num = n;
	for (; answer < 500; answer++) {
		if (num == 1) {
			break;
		}
		if (num % 2)
			num = num * 3 + 1;
		else
			num /= 2;
	}
	if (answer == 500)
		answer = -1;

	return answer;
}
void main() {
	int num = 626331;
	solution(num);
}
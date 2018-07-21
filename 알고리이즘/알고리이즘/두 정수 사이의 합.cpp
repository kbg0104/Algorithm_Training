#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	int i;
	if (a >= b)
		for (i = b; i <= a; i++)
			answer += i;
	else
		for (i = a; i <= b; i++)
			answer += i;

	return answer;
}
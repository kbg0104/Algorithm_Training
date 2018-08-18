#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
	int answer = 0;
	int i, j, z = 0, x;
	if (n >= 2)
		answer = 1;
	for (i = 3; i <= n; i += 2) {
		for (j = 3; j < i; j += 2) {
			if (i % j == 0)
				z++;
		}
		if (z == 0)
			answer++;
		z = 0;
	}

	return answer;
}
void main()
{
	int a = 10;
	a = solution(a);
	cout << a;
}
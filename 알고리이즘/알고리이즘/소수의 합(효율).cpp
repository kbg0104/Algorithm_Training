#include <string>
#include <vector>

#include <math.h>

using namespace std;

int solution(int n) {
	int answer = 0;
	int* arr;
	int i, j;
	arr = (int*)calloc(sizeof(int), n + 1);
	for (i = 3; i <= n; i += 2) {
		arr[i] = i;
	}
	/**********************************/
	for (i = 3; i <= sqrt(n); i += 2) {
		if (arr[i] == 0)
			continue;
		else
			for (j = i * 2; j <= n; j += i)
				arr[j] = 0;
	}
	/**********************************/
	for (i = 3; i <= n; i += 2)
		if (arr[i] != 0)
			answer += arr[i];
	answer += 2;

	return answer;
}
void main()
{
	int n = 7;
	solution(n);



}
#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
	int answer = 0;
	int* arr;
	int i, j;
	arr = (int*)calloc(sizeof(int), n + 1);
	for (i = 1; i <= n; i++) {
		arr[i] = i;
	}
	/**********************************/
	for (i = 2; i <= sqrt(n); i++) {
		if (arr[i] == 0)
			continue;
		else
			for (j = i*2; j <= n; j += arr[i])
				arr[j] = 0;
	}
	/**********************************/
	for (i = 2; i <= n; i++)
		if (arr[i] != 0)
			answer += arr[i];

	cout << answer;
	return answer;
}
void main()
{
	int n = 7;
	solution(n);



}
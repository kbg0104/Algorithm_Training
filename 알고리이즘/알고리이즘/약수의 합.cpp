#include <string>
#include <vector>
#include <iostream>

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
	for (i = 2; i <= n; i++) {
		if (n % arr[i] == 0)
			answer += arr[i];
	}
	/**********************************/
	answer++;

	cout << answer;
	return answer;
}
void main()
{
	int n = 15;
	solution(n);



}
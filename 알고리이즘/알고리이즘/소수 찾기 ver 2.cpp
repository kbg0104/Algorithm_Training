#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
	int* arr;
	int i, j;
	arr = (int*)malloc(sizeof(int)*n);
	int answer = 0;
	for (i = 0; i < n; i++)
		arr[i] = i + 1;
	if (n >= 2)
		answer = 1;
	for (i = 3; i < n; i += 2) {
		if (arr[i] == 0)
			continue;
		else
			for(j = 3; j < i - 1; j += 2)

	}
	
	
	
	
	
	return answer;

}
void main()
{
	int a = 10;
	a = solution(a);
	cout << a;
}
	
	
	
	
	
	
	
	
	
	
	
	

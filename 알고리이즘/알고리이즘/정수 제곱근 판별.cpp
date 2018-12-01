#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	double a = sqrt(n);
	int b = a / 1;
	if (a == b)
		answer = (a + 1) * (a + 1);
	else
		answer = -1;
	return answer;
}
void main(){
	long long n;
	cin >> n;
	solution(n);
}
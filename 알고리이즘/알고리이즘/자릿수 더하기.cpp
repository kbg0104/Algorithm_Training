#include <iostream>
#include <vector>
#include <string>
using namespace std;
int solution(int n)
{
	int answer = 0;
	int i = n;
	
	
	for (;i > 0;) {
		answer += (i % 10);
		i /= 10;
	
	}
	cout << answer;

	return answer;
}
void main() {
	int n = 123;
	solution(n);

}
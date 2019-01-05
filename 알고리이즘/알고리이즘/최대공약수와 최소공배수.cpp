#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	int i, sum;
	sum = n < m ? n : m;
	for (i = sum; i >= 1; i--) {
		if (n % i == 0 && m % i == 0) {
			answer.push_back(i);
			break;
		}
	}
	cout << i;
	sum = n > m ? n : m;
	for (i = sum; i <= n*m; i++) {
		if (i % n == 0 && i % m == 0) {
			answer.push_back(i);
			break;
		}
	}
	cout << i;
	return answer;
}
void main() {
	vector<int> answer;
	int n, m;
	cin >> n;
	cin >> m;
	solution(n, m);
}
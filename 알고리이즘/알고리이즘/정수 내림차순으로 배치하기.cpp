#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
bool something_good(int a, int b) {
	return a > b ? true : false;
}
long long solution(long long n) {
	long long answer = 0;
	int i;
	vector<int> a;
	string b = to_string(n);
	for (i = 0; i < b.size(); i++)
		a.push_back(b.at(i) - 48);
	sort(a.begin(), a.end(), something_good);
	b = "";
	for (i = 0; i < a.size(); i++)
		b = b + to_string(a.at(i));
	answer = stoll(b);
	cout << answer;
	return answer;
}
void main() {
	long long n;
	cin >> n;
	solution(n);

}
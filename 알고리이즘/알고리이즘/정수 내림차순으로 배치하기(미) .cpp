#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	int i, j, hl = 0;
	vector<char> arr;
	string wa = to_string(n);
	/***************************************/
	for (i = 0; i < wa.size(); i++)
		arr.push_back(wa.at(i));
	sort(arr.begin(), arr.end());
	wa = "";
	for (i = arr.size() - 1; i >= 0; i--)
		wa = wa + arr.at(i);
		
	answer = stoi(wa);
	
	return answer;
}
void main() {
	long long n;
	cin >> n;
	solution(n);

}
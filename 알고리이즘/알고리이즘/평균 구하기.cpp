#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	int i;
	for (i = 0; i < arr.size(); i++) {
		answer += arr.at(i);
	}
	answer /= arr.size();
	return answer;
}
void main() {
	vector<int> arr = { 1, 2, 3, 4 };
	solution(arr);

}
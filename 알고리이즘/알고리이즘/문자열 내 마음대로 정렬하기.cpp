#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int num;
bool str_sort(string a, string b) {
	return a.at(num) < b.at(num) ? true : false;
}
vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	num = n;
	sort(strings.begin(), strings.end());
	sort(strings.begin(), strings.end(), str_sort);
	answer = strings;
	
	return answer;
}

void main() {
	vector<string> strings = { "asdfe", "awcrd", "bqbrx","tyace", "qbgcd","eqfhc", "qehfs","oqejv", "wfije", };
	int n = 4;
	solution(strings, n);

}
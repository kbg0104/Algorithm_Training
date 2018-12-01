#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	int i, index = arr.at(0), h = 0;
	for (i = 1; i < arr.size(); i++)
		if (arr.at(i) < index) {
			index = arr.at(i);
			h = i;
		}
	arr.erase(arr.begin() + h);
	if (arr.size() == 0)
		arr.push_back(-1);
	for (i = 0; i < arr.size(); i++)
		cout << arr.at(i);
	answer = arr;
	return answer;
}
void main(){
	vector<int> arr = { 7 };
	solution(arr);


}
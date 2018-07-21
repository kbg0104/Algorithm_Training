#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
	int i;
	vector<int> an;
	for (i = 0; i < arr.size(); i++)
		if (i == 0)
			an.push_back(arr.at(i));
		else if (arr.at(i) == arr.at(i - 1))
			continue;
		else
			an.push_back(arr.at(i));

		return an;
}
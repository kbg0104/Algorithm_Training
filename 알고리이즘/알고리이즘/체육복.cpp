#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int> st;
	int i = 0, j;
	
	/****************************************/
	while (1) {
		st.push_back(1);
		if (st.size() == n)
			break;
	}
	for (i = 0; i < lost.size(); i++) {
		j = lost.at(i);
		st.at(j - 1)--;
	}
	for (i = 0; i < reserve.size(); i++) {
		j = reserve.at(i);
		st.at(j - 1)++;
	}
	/*****************************************/
	for (i = 0; i < st.size(); i++) {
		if (st.at(i) > 0)
			continue;
		else {
			if (i != 0 && i != (st.size() - 1)) {
				if (st.at(i - 1) == 2) {
					st.at(i - 1)--;
					st.at(i)++;
				}
				else if (st.at(i + 1) == 2) {
					st.at(i + 1)--;
					st.at(i)++;
				}
			}
			else {
				if (i == 0) {
					if (st.at(i + 1) == 2) {
						st.at(i + 1)--;
						st.at(i)++;
					}
					else if (i == (st.size() - 1))
						if (st.at(i - 1) == 2) {
							st.at(i - 1)--;
							st.at(i)++;
						}
				}
			}
		}
	}
	for (i = 0; i < st.size(); i++)
		cout << st.at(i);
	for (i = 0; i < st.size(); i++)
		if (st.at(i) > 0)
			answer++;
	return answer;
}
void main()
{
	vector<int> lost = { 2, 4 };
	vector<int> reserve = { 1, 3, 5 };
	int n = 5;
	solution(n, lost, reserve);

}
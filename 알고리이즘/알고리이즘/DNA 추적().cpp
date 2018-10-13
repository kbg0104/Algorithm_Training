#include <string>
#include <vector>
using namespace std;
int something_good(vector<int>);
int main() {
	vector<int> list = { 1,3,0,3,0 };
	sometning_good(list);


}
int sometning_good(vector<int> list) {
	bool go = true;
	int i = 0;
	vector<int> dm1 = { 0,0,0,0,0 };
	while (go) {
		if (i != 0) {
			if (list.at(i) != 0) {
				if (list.at(i + 1) != 0)
					dm1.at(i + 2) = list.at(i + 1) - list.at(i);
			}
		}
		else
			if (list.at(i + 1) != 0)
					;


		
		
		i++;
	}


}


}
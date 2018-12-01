#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;
string str_cut(string, string);
string checker(string);

string main() {
	string one, two;
	cin >> one >> two;
	str_cut(one, two);

}
string str_cut(string one, string two) {
	int i;
	string st = "";
	vector<string> vec_one, vec_two;
	for (i = 0; i < one.size() - 1; i++) {
		st = one.at(i) + one.at(i + 1);
		checker(st);
		vec_one.push_back(st);
	}
}
string checker(string st) {
	int i;
	for (i = 0; i < 2; i++) {
		if (st.at(i) >= 65 && st.at(i) <= 90)
			st.at(i) + 32;
	
	
	
	
	
	
	
	
	
	
	
	}
}
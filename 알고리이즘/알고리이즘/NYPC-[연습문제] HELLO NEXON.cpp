#include <string>
#include <iostream>
void main()
{
	
	using namespace std;
	int x, y, i, j, arr = 0;
	string nexon = "";
	cin >> x; cin >> y;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			cin >> nexon;
			if (nexon == "NEXON")
				arr++;
		}
		cin.get();
	}
	cout << arr;



}
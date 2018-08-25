#include <string>
#include <iostream>
using namespace std;
int main()
{
	int x, p, q, i, j;
	cin >> p; cin >> q; cin >> x;
	for (i = x;i > 0; i--) {
		for (j = x;j > 0; j--) {
			
		}
		if ((p * i) + (q * j) == x)
			break;
	}
	cout << i <<" "<< j;
}
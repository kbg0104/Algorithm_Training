#include <string>
#include <string.h>

using namespace std;

string solution(int a, int b) {
	int m, sum = 0;
	int month[12] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
	char answer[4];
	for (m = 0; m <= a - 1; m++) {
		sum = sum + month[m];
	}
	sum = sum + b;
	if (sum % 7 == 1)
		strcpy(answer, "FRI");
	else if (sum % 7 == 2)
		strcpy(answer, "SAT");
	else if (sum % 7 == 3)
		strcpy(answer, "SUN");
	else if (sum % 7 == 4)
		strcpy(answer, "MON");
	else if (sum % 7 == 5)
		strcpy(answer, "TUE");
	else if (sum % 7 == 6)
		strcpy(answer, "WED");
	else
		strcpy(answer, "THU");
	return answer;
}
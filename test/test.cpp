
#include "test.h"

using namespace std;

int main()
{
	char ch;
	int num = 0;
	double sq_root = 0;

	for (num = 1; num < 100; num++) {
		sq_root = sqrt((double)num);
		cout << "Число: " << num << " " << "Квадратный корень: " << sq_root << '\n';
	}
	
	return 0;
}

// CPP program to illustrate rint()
// with fesetround() function
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double x = 3.7, y = 3.3, hasil;

	fesetround(FE_DOWNWARD);

	hasil = rint(x);
	cout << hasil << endl;

	fesetround(FE_UPWARD);

	hasil = rint(y);
	cout << hasil << endl;

	_getch();
	return 0;
}

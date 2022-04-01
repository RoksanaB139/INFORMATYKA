#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "Podaj a" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;

	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}

	}
	cout <<"NWD " << a;


}
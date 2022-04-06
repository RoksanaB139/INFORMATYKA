#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int i;
	int n;

	cout << "Podaj a" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	i = a * b;
	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}
		n = i / a;


	}
	cout << "NWD " << a << endl;
	cout << "NWW " << n;


}
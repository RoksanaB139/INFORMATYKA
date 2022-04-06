#include <iostream>

using namespace std;

int main()
{
	int lp = 0;//liczby pierwsze
	int p;//testowane liczby
	int n;//ilość liczb
	int d;//dzielniki

	cout << "podaj liczbe" << endl;
	cin >> n;

	cout << 'yyy' << endl;
	cin >> d;

	for (int p = 2; p <= 100; p++) {
		if (p % d == 0) {
			p = p + 1;
		}
	} while (lp < n);
}
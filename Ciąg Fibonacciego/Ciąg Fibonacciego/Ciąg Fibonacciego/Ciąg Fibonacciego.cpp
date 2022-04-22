#include <iostream>
using namespace std;

void funkcja(int n);

int main()
{
	int n;
	cout << "Ile wyrazów ciągu wypisać: " << endl;
	cin >> n;
	funkcja(n);

}
void funkcja(int n) {
	int f0;
	int f1;
	int f2;
	int f;

	f0 = 0;
	f1 = 1;

	for (int i=0; i <= n; i++) {
		if (i > 1) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else {
			f = i;
		}
		cout << f << endl;
	}
}
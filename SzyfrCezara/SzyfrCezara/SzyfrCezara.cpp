#include <iostream>
using namespace std;

void funkcja(char tab[], int klucz) {

	int dl = strlen(tab);

	if (!(klucz >= -26 and klucz <= 26)) {
		return;
	}

	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'z') {
				tab[i] += klucz;
			}
			else{
				tab[i] = tab[i] + klucz - 26;
			}
		}

	}
		
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] += klucz;
			}
			else{
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
}
int main() {
	char tab[1000];

	cout << "Podaj wyraz skladajacy sie z malych liter: " << endl;
	cin >> tab;

	int klucz;
	cout << "Podaj klucz z przedzialu [-26..26]: " << endl;
	cin >> klucz;

	funkcja(tab, klucz);

	cout << "Po zaszyfrowaniu: " << tab << endl;

	funkcja(tab, -klucz);

	cout << "Po rozszyfrowaniu: " << tab << endl;
}
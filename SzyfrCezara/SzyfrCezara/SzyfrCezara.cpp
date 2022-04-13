#include <iostream>
using namespace std;

void funkcja(char tab[], int klucz) {



	char tab[1000];
	cout << "Podaj wyraz skladajacy sie z malych liter: " << endl;
	cin >> tab;

	int klucz;
	cout << "Podaj klucz z przedzialu [-26..26]: " << endl;
	cin >> klucz;
	int dl = strlen(tab);
	if (!(klucz >= -26 and klucz <= 26)) {
		return;
	}
	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= z) {
				tab[i] += klucz;
			}
			else if (tab = tab + klucz - 26) {

			}
		}
	}
	//EDYTOWAĆ ELSA!!!
	/*k6:   inaczej,
	k7:    Dopóki i < dl,
    wykonuj krok k8
	k8:    Jeśli tab + klucz >= a,
    to tab += klucz,
    inaczej tab ← tab + klucz + 26,*/
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= z) {
				tab[i] += klucz;
			}
			else if (tab = tab + klucz - 26) {

			}
		}
	}
}

int main()
{
	int a = funkcja(tab, klucz);
	cout << "aa: " << a << endl;
}
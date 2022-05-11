#include <iostream>
using namespace std;


int y(int szukana, int tab[])
{
int l = 0; //lewy kraniec
int sr = 0; //prawy kraniec
int p = 15; //?? XD

	sr = (l + p) / 2;
	while (l <= p) {
		if (tab[sr] == szukana) {
			return sr;
		}
		if (tab[sr] > szukana) {
			p = sr - 1;
		}
		else {
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}
	return -1;
}

int main()
{
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int szukana;

	cout << "Podaj liczbe ktora chcesz znalezc: " << endl;
	cin >> szukana;

	cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << y(szukana, tab) << endl;
	return 0;
}
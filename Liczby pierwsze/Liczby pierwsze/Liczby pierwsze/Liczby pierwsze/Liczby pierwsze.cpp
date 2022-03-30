#include <iostream>

using namespace std;

int main()
{
	int lp = 0;//liczby pierwsze
	int p=2;//testowane liczby
	int n;//ilość liczb
	int d;//dzielniki
	bool x;

	cout << "podaj liczbe" << endl;
	cin >> n;

	
	while (lp < n) {
		x = true;
		for (int d = 2; d <= p-1; d++) {
			if (p % d == 0) {
				x = false;
			}
		}
		if(x==true){
			cout << " " << p;
			lp = lp + 1;
		}
		p = p + 1;
	}
	
}
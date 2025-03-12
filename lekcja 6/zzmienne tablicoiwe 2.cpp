#include <iostream>
using namespace std;
int main() {
	int tab[5];
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tab[i];
		if (tab[i] < 0) tab[i] = 0;
	}
	cout << "LIczby po zamianie ujemnych na 0: ";
	for (int i = 0; i < 5; i++) {
		cout << tab[i] << " ";

	}
	return 0;
	
}
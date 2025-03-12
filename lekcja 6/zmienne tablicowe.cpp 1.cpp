#include <iostream>
using namespace std;
int main() {
	int tab[5], suma = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe nr " << i + 1 <<": ";
		cin >> tab[i];
		suma += tab[i];	
	}
	cout << "Sriednia liczb: " << suma / 5.0 << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main () {
	int  N;
	cout << "Podaj liczbę N:" ;
cin >> N;
if (N <= 0) {
	cout << "Błąd: liczba N powinna byc większa od 0." << endl;
	return 1;
}
cout << "Kwadraty liczb od 1 do " << N << ":" << endl;
for (int i = 1; i <= N; i++) {
	cout << i << "^2 = " << i * i << endl;
}
return 0;
}

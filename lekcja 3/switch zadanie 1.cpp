#include <iostream>
using namespace std;
int main(){
int Liczba1, Liczba2;
char operacja;
cout << "Podaj pierwsza liczbe: ";
cin >> Liczba1;
cout << "Podaj druga liczbe: ";
cin >> Liczba2;
cout << "Podaj dzialanie (+, -, *, /): ";
cin >> operacja;
switch (operacja) {
	case '+':
		cout << "Wynik: " << Liczba1 + Liczba2 << endl;
		break;
	case '-':
	    cout <<"Wynik: " << Liczba1 - Liczba2 << endl;
	 	break;
	case '*':
		cout << "Wynik: " <<Liczba1 * Liczba2 << endl;
		break;
	case '/':
		if (Liczba2 != 0)
		cout <<"Wynik: " << Liczba1 / Liczba2 << endl;
		else 
		cout << "Blad dzielenie przez zero!" << endl;
		break;
	default:
		cout << "Nieznana operacja!" << endl;
		break;	
}
	return 0;	
	}   
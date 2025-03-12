#include <iostream>
int main() {
	int liczby[10];
	std::cout <<" Podaj 10 liczb calkowitych:\n";
	for (int i = 0; i < 10; i++) {
		std::cout << "Podaj liczbe nr " << i + 1 << ": ";
		std::cin >> liczby[i];
		
	}
	int min = liczby[0];
	for (int i = 1; i < 10; i++) {
		if (liczby[i] < min) {
			min = liczby[1];
		}
	}
	std::cout<<"Najmniejsza liczba to: " << min << std::endl;
	return 0;
}
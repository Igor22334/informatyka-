#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char tekst[21];
	cout<<"podaj ciag znakow (max 20 znakow): ";
	cin.getline(tekst, 21);
	cout <<"wprowadzono tekst: "<< tekst << endl;
}
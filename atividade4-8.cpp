//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int idioma;
	cout << "\n----------MENU---------- ";
	cout << "\n escolha um idioma / choose a language";
	cout << "\n portugues (1) ";
	cout << "\n ingles (2) ";
	cout << "\n ";
	cin >> idioma;
		
	switch (idioma) {
    case 1:
    cout << "bem vindo!"; 
    break;
    case 2:
    cout << "welcome";
    break;
	}
    
    	//encerra o programa
	return 0;
}

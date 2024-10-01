//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int animais;
	cout << "\n----------MENU---------- ";
	cout << "\n cachorro(1) ";
	cout << "\n gato(2) ";
	cout << "\n passaro(3) ";
	cout << "\n ";
	cin >> animais;
		
	switch (animais) {
    case 1:
    cout << "Cachorro/Expectativa de Vida: 10 a 13 anos";
    break;
    case 2:
    cout << "Gato/Expectativa de Vida: 12 a 18 anos";
    break;
    case 3:
    cout << " dependendo da especies  40 a 60 anos ou mais";
    break;
	}
    
    	//encerra o programa
	return 0;
}

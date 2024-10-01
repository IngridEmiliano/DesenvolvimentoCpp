//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int velocidade;
	cout << "\n----------MENU---------- ";
	cout << "\n velocidade baixa(1) ";
	cout << "\n velocidade media(2) ";
	cout << "\n velocidade alta(3) ";
	cout << "\n ";
	cin >> velocidade;
		
	switch (velocidade) {
    case 1:
    cout << "a velocidade minima na avenida cristiano machado e de: 30 km/h";
    break;
    case 2:
    cout << "a velocidade media na avenida cristiano machado e de: 40 a 60 km/h";
    break;
    case 3:
    cout << "a velocidade maxima na avenida cristiano machado e de: 60 a 80 km/h";
    break;
	}
    
    	//encerra o programa
	return 0;
}

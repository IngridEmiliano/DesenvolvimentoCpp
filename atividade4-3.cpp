//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int semana;
	cout << "\n----------MENU---------- ";
	cout << "\n domingo(1) ";
	cout << "\n segunda(2) ";
	cout << "\n terca(3) ";
	cout << "\n quarta(4) ";
	cout << "\n quinta(5) ";
	cout << "\n sexta(6) ";
	cout << "\n sabado(7) ";
	cout <<"\n ";
	cin >> semana;
		
	switch (semana) {
    case 1:
    cout << "Doingo e feriado";
    break;
    case 2:
    cout << "segunda e dua util";
    break;
    case 3:
    cout << "terca e dia ultil";
    break;
    case 4: 
    cout << "quarta e dia ultil";
    break;
    case 5: 
    cout << "quinta e dia ultil:";
    break;
    case 6: 
    cout << "sexta e dia ultil:";
    break;
    case 7: 
    cout << "sabado e feriado";
    break;
	}
    
    	//encerra o programa
	return 0;
}

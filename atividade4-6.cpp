//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int camisa;
	cout << "\n----------MENU---------- ";
	cout << "\n qual tamanho de camisa deseja ?";
	cout << "\n camisa tamanho P (1) ";
	cout << "\n camisa tamanho M (2) ";
	cout << "\n camisa tamanho G (3) ";
	cout << "\n ";
	cin >> camisa;
		
	switch (camisa) {
    case 1:
    cout << "o valor da camisa tamanho P e de: 30 reais"; 
    break;
    case 2:
    cout << "o valor da camisa tamanho M e de: 70 reais";
    break;
    case 3:
    cout << "o valor da camisa tamanho G e de: 150 reais";
    break;
	}
    
    	//encerra o programa
	return 0;
}

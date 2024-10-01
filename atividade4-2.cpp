//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int calculadora;
	double num1, num2, conta;
	cout << "\n----------MENU---------- ";
	cout << "\n sua conta e de: " ;
	cout << "\n adcao(1) ";
	cout << "\n subtracao(2) ";
	cout << "\n multiplicacao(3) ";
	cout << "\n divisao(4) ";
	cout <<"\n ";
	cin >> calculadora;
	
	cout <<"\nDigite o primeiro numero: ";
	cin >> num1;
	cout <<"\nDigite o segundo numero: ";
	cin >> num2;
		
	switch (calculadora) {
    case 1: conta = num1 + num2;
    cout << "resultado: " << conta;
    break;
    case 2: conta = num1 - num2;
    cout << "resultado: " << conta;
    cin >> conta;
    break;
    case 3: conta = num1 * num2;
    cout << "resultado: " << conta;
    cin >> conta;
    break;
    case 4: conta = num1 / num2;
    cout << "resultado: " << conta;
    cin >> conta;
    break;
	}
    
    	//encerra o programa
	return 0;
}

//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	int num1;
	int num2;
	int mult;
	
	//pedindo o usuario para inserir o numeros
cout << "\nDigite o primeiro numero da multiplicacao: ";
//armazena e le o numero
cin >> num1;
//pedindo o usuario para inserir o numeros
cout << "\nDigite o segundo numero da multiplicacao:: ";
//armazena e le o numero
cin >> num2;

//conta
mult = num1 * num2;

//exibe o resultado
cout << "\nResultado :" << mult;

		//encerra o programa
		 return 0;
}

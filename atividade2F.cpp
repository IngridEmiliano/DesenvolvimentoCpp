//biblioteca
#include <iostream>
using namespace std;

int main() {
	// declarando variaveis
	int num1;
	int num2;
	int sub;
	
//pedindo o usuario para inserir os numeros
cout << "\nDigite o primeiro numero para a subtracao: ";
//armazena e le o numero
cin >> num1;	
//pedindo o usuario para inserir os numeros
cout << "\nDigite o segundo numero para a subtracao: ";
//armazena e le o numero
cin >> num2;

//soma
sub = num2 - num1;

//exibe o resultado
cout << "\n o resultado da subtracao do segundo para o primeiro numero e :" << sub;

		//encerra o programa
		 return 0;
}

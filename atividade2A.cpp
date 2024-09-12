//biblioteca
#include <iostream>
using namespace std;

int main() {
	// declarando variaveis
	int num1;
	int num2;
	int soma;
	
	//pedindo o usuario para inserir os numeros
	cout << "\nDigite o primeiro numero da adcao: ";
	//armazena e le o numero
	cin >> num1;
	//pedindo o usuario para inserir os numeros
		cout << "\nDigite o segundo numero da adcao: ";
		//armazena e le o numero
	cin >> num2;
	
	//calculo
	soma = num1 + num2;
	
	//exibe o resultado
	cout << "\nSoma da adicao: " << soma;
	 
	 //encerra o programa
	 return 0;
}

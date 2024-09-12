//biblioteca
#include <iostream>
using namespace std;

int main() {
	// declarando variaveis
	float num1;
	float num2;
	float divisao; 
	
	cout << "Divisao do primeiro numero pelo segundo";
	//pedindo o usuario para inserir os numeros
	cout << "\nDigite o primeiro numero: ";
	//armazena e le o numero
	cin >> num1;
	cout << "\nDigite o segundo numero: ";
	//armazena e le o numero
	cin >> num2;
	
	//soma
	divisao = num1 / num2;
	
	//exibe o resultado
	cout << "\nResultado: " << divisao;
	
	//encerra o programa
		 return 0;
}

//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	int celsius, fahrenheit;
	
	
	//pedindo o usuario para inserir os dados
	cout << "converter a temperatura de Celsius para Fahrenheit";
	
	cout << "\nDigite a temperatura em Celsius: ";
    //armazena e le o numero
    cin >> celsius;
    
    //conta
    fahrenheit = celsius * 9/5 + 32;

    //exibe o resultado
    cout << "\nA temperatura em Fahrenheit e:" << fahrenheit;

	//encerra o programa
	return 0;
}

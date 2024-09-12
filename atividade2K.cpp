//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	int num1, num2, num3;
	double media;
	
	//pedindo o usuario para inserir o numeros
	cout << "media aritimetica";
	cout << "\nDigite o primeiro numero: ";
    //armazena e le o numero
    cin >> num1;
    cout << "\nDigite o segundo numero: ";
    cin >> num2;
    cout << "\nDigite o terceiro numero: ";
     cin >> num3;
    
    //conta
    media = num1 + num2 + num3 / 3;

    //exibe o resultado
    cout << "\nResultado :" << media;

	//encerra o programa
	return 0;
}

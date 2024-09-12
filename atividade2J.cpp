//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	int num, divisao, divisaoint;
	
	
	//pedindo o usuario para inserir o numeros
	cout << "Digite um numero que quer divisao inteira: ";
    //armazena e le o numero
    cin >> num;
    //pedindo o usuario para inserir o numeros
    cout<<"digite por qual numero deseja dividir o primeiro numero: ";
    //armazena e le o numero
    cin>>divisao;
    
    //conta
    divisaoint = num / divisao;

    //exibe o resultado
    cout << "\nResultado :" << divisaoint;

	//encerra o programa
	return 0;
}

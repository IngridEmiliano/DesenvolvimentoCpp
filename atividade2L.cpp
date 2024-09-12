//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	float peso, altura, imc, elev2;
	
	//pedindo o usuario para inserir os dados
	cout << "calculo do seu indice  de massa corporal";
	cout << "\nDigite o seu peso (em kg): ";
    //armazena e le o numero
    cin >> peso;
    cout << "\nDigite sua altura (em metros): ";
    cin >> altura;
    
    //conta
    elev2 = pow(altura, 2);
    imc = peso / elev2;

    //exibe o resultado
    cout << "\nO indice da sua massa corporal e :" << imc;

	//encerra o programa
	return 0;
}

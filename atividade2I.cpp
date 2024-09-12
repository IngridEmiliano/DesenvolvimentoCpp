//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	int num;
	double resto_div;
	
	//pedindo o usuario para inserir o numeros
	cout << "Digite um numero para saber o resto da divisao por 2: ";
//armazena e le o numero
cin >> num;

//conta, o % diide o resto da divisao
resto_div = num % 2;

//exibe o resultado
cout << "\nResultado :" << resto_div;

		//encerra o programa
		 return 0;
}

//biblioteca
#include <iostream>
using namespace std;

int main() {
	//declara a variavel
	string nome;
	int idade;
	
		//pede ao usuario para digitar oq se pede
	cout << "\nDigite seu nome: ";
		//armazena e le oque foi digitado
	cin >> nome;
	cout << "\nDigite sua idade: ";
		//armazena e le oque foi digitado
	cin >> idade;
	// exibe oque foi digitado
	cout << "\nSeu nome: " << nome << "\nSua idade: " << idade;
	
		//encerra o programa
	return 0;
}

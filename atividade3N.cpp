//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declarando variaveis
string idade;
string carteira;

//pedindo o usuario para inserir os dados]
    cout << "Voce tem 18 anos ou mais? (sim / nao): ";
    //armazena e le o que o usuario inseriu
	cin >> idade;
cout << "Voce tem carteira de motorista? (sim / nao) ";
		cin >> carteira;

// Verifica as respostas e exibe se o usuário pode ou não dirigir
	if (idade == "sim" && carteira == "sim") {
		cout << "voce pode dirigir!";
	} else if(carteira == "nao") {
    cout << "voce nao pode dirigir por falta da carteira...";
	}else{
		cout << "voce nao pode digirir";
	}

	//encerra o programa
	return 0;
}

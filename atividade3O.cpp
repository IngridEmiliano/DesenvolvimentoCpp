//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declarando variaveis
string carro;
string dinheiro;

//pedindo o usuario para inserir os dados
    cout << "Voce deseja comprar um carro novo? (sim / nao): ";
    //armazena e le o que o usuario inseriu
    cin >> carro;
    cout << "Voce tem dinheiro suficiente para isso? (sim / nao)\n";
    cin >> dinheiro;

// Verifica as respostas e exibe se o usuário pode ou nao comprar o carro
if (carro == "sim" && dinheiro == "sim"){
    cout << "\nParabens, voce pode comprar um carro novo!";
    
} else if (dinheiro == "nao") {
    cout << "voce nao tem dinheiro o suficiente para isso...";
    
}else{
cout << "voce nao pode comprar um carro";
}
	//encerra o programa
	return 0;
}

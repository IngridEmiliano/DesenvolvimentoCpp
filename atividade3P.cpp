//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declarando variaveis
string idade;
string diploma;

//pedindo o usuario para inserir os dados
    cout << "Voce tem mais de 21 anos ou mais? (sim / nao): ";
    //armazena e le o que o usuario inseriu
    cin >> idade;
     cout << "Voce tem diploma para ensino superior? (sim / nao) ";
    cin >> diploma;
    
// Verifica as respostas e exibe
if (idade == "sim"){
   cout << "Parabens, voce esta qualificado para a vaga!";
} else if (diploma == "nao") {
    cout << "voce nao esta qualificado para a vaga devido a falta de um diploma!";
}else{
cout << "voce nao esta qualificado para a vaga";
}
	//encerra o programa
	return 0;
}

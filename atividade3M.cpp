//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int mes;
	
		//pedindo o usuario para inserir os dados
	cout << "escolha um mes para saber quantos dias ele tem, sendo janeiro = 1, fevereiro = 2 e assim respectivamente: ";
	    //armazena e le o numero
	cin >> mes;
	
	//O comando switch permite transferir o controle para comandos diferentes dentro do corpo switch
	switch (mes) {
		//case permite ao usuário executar certas ações baseando-se no valor de uma expressão
  case 1:
    cout << "janeiro tem 31 dias";
    //break interrompe somente o comando de repetição no qual está inserido.
    break;
  case 2:
    cout << "fevereiro tem 28 dias (29 dias nos anos bissextos)";
    break;
  case 3:
    cout << "marco tem 31 dias";
    break;
  case 4:
    cout << "abril tem 30 dias";
    break;
  case 5:
    cout << "maio tem 31 dias";
    break;
  case 6:
    cout << "junho tem 30 dias";
    break;
  case 7:
    cout << "julho tem 31 dias";
    break;
  case 8:
    cout << "agosto tem 31 dias";
    break;
  case 9:
    cout << "setembro tem 30 dias";
    break;
  case 10:
    cout << "outubro tem 31 dias";
    break;
  case 11:
    cout << "novembro tem 30 dias";
    break;
  case 12:
    cout << "desembro tem 31 dias";
    break;
}
    
    	//encerra o programa
	return 0;
}

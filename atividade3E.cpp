//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// declarando variaveis
    	double num1, num2;
	
	//pedindo o usuario para inserir os dados
    cout << "Digite o primeiro numero real: ";
    //armazena e le o numero
cin >> num1;

cout << "Digite o segundo numero real: ";
cin >> num2;

 //se numero 1 for maior ou igual que o numero 2, a mensagem abaixo e exibida
 if (num1 >= num2) {
     cout << "o numero : "<<num1 << "é maior igual que" <<num2;
     
     // se nao se encaixar na condiçao do if ele é menor 
 }else{
     cout<<"o numero" <<num1<<" menor que: "<<num2 << "portanto ele nao se encaixa no programa";
 }
 
	//encerra o programa
	return 0;
}

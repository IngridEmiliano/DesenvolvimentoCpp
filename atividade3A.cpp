//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// declarando variaveis
    int num1, num2;
	
	//pedindo o usuario para inserir os dados
    cout << "Digite o primeiro numero inteiro: ";
    //armazena e le o numero
cin >> num1;

cout << "Digite o segundo numero inteiro: ";
cin >> num2;

 //se numero 1 for maior que o numero 2, a mensagem abaixo e exibida
 if (num1 > num2) {
     cout << "o numero maior e: "<<num1;
     
     //  se senao os numeros forem iguais, a mensagem abaixo e exibida
 }else if(num1 == num2){
     cout<<"os demais numeros sao iguais";

     
     // se ao for nenhuma das opera�oes acima, a mensagem abaixo e exibida
 }else{
     cout<<"o numero maior e: "<<num2;
 }
 
	//encerra o programa
	return 0;
}

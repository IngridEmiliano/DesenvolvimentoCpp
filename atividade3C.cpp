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

     //  se os numeros forem iguais, a mensagem abaixo e exibida
 if(num1 == num2){
     cout << "os demais numeros sao iguais";
    
 }else{
     cout<<"os numeros nao sao iguais";
 }
 
	//encerra o programa
	return 0;
}

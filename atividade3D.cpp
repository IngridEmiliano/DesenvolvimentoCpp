
//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// declarando variaveis
	int num1, num2, num3;
	
		//pedindo o usuario para inserir os dados
    cout << "Digite o primeiro numero inteiro: ";
    //armazena e le o numero
cin >> num1;

cout << "Digite o segundo numero inteiro: ";
cin >> num2;

cout << "Digite o terceiro numero inteiro: ";
cin >> num3;

// if =  se / && = e
if (num1 > num2 && num1 < num3) {
cout << "O " << num1 << "e menor que " << num2 << "e maior que " <<num3;

// else if = se senao
} else if (num1 < num2 && num1 > num3) {
       cout << "O " << num1 << "e maior que " << num2 << "e menor que " << num3 << "sendo assim ele nao se encaixa no que se pede";
       
       //else = senao
   }    else {
       cout << "os numeros nao se encaixa no que se pede";
       
       return 0
       }

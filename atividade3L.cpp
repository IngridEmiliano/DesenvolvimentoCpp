//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// declarando variaveis
	int num1, num2, resultado;
	
	//pedindo o usuario para inserir os dados]
    cout << "Digite o primeio numero inteiro: ";
    //armazena e le o numero
cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
cin >> num2;

//calculo
resultado = num1 - num2;

//se o resultado entre o numero 1 e o numero 2 for menor que 10 sera exibido a mensagem abaixo
if (resultado < 10) {
	cout << "a diferença entre " <<num1 << " e " <<num2 << " e menor que 10";

//se o resultado entre o numero 1 e o numero 2 for igual a 10 sera exibido a mensagem abaixo	
	} else if (resultado == 10) {
	cout << "a diferenca de " <<num1 << " e " <<num2 << " e igual a 10";
	
	//se for qualquer outra resposta alem disso a mensagem abaixo sera exibida
}else{
 	cout<<"os demais numeros nao sao nem iguais e nem menor que 10";
 }
 
	//encerra o programa
	return 0;
}

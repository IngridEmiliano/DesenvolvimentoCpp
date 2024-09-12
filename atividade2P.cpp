//biblioteca
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
		// declarando variaveis
	double raio, raio2, Area, altura,resultado;
	double Pi1 = 3.14;
	
		//pedindo o usuario para inserir os dados
cout<<"Digite o raio do cilindro que deseja descobrir a area: ";
//armazena e le o numero
cin>>raio;

cout<<"Digite a altura do cilindro: ";
cin>>altura;

 //Calculos
raio2 = pow(raio, 2);
Area = Pi1 * raio2;
resultado = Area * altura;


    //exibe o resultado
cout<<"a area do circulo e: "<< resultado;

	//encerra o programa
	return 0;
}

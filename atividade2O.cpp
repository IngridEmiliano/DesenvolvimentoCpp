//biblioteca
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
		// declarando variaveis
	double raio, raio2, Area;
	double Pi1 = 3.14;
	
		//pedindo o usuario para inserir os dados
cout<<"Digite o raio do circulo que deseja descobrir a area: ";
//armazena e le o numero
cin>>raio;

 //conta
raio2 = pow(raio, 2);
Area = Pi1 * raio2;

    //exibe o resultado
cout<<"a area do circulo e: "<< Area;

	//encerra o programa
	return 0;
}

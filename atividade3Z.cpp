
#include <iostream>
#include <string>
using namespace std;

int main(){
	string clube;
	
	cout << "voce e um membro ativo do senai? (sim/nao) ";
	cin >> clube;
	
	 if (clube == "nao") {
		cout << "Por favor, atualize sua inscri��o para continuar usufruindo dos benef�cios do senai";
	}else (clube == "sim") {
		cout <<  ("obrigada por ser um membro senai! ");
	}
	return 0;
}



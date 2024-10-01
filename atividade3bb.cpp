
#include <iostream>
#include <string>
using namespace std;

int main(){
	string operacao;
	
	cout << "deseja cancelar a operacao? (sim/nao) ";
	cin >> operacao;
	
	 if (operacao == "nao") {
		cout << "Por favor, cancele a operacao";
	}else (operacao == "sim"); {
		cout <<  ("operacao cancelada! ");
	}
	return 0;
}



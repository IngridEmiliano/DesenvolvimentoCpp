
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string nome;
	
	cout << "digite seu nome: ";
	cin >> nome;
	
	 if (nome == "wilson" || nome == "gloria") {
		cout << "bem vindo de volta!";
	}else {
		cout << "bem vindo ao seu primeiro acesso ";
	}
	return 0;
}



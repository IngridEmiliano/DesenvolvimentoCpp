//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int horario;
	
		
	cout << "\n----------MENU---------- ";
	cout << "\n esta de: " ;
	cout << "\n manha(1) ";
	cout << "\n tarde(2) ";
	cout << "\n noite(3) ";
	cout <<"\n ";
	cin >> horario;
	
	//O comando switch permite transferir o controle para comandos diferentes dentro do corpo switch
	switch (horario) {
		//case permite ao usuário executar certas ações baseando-se no valor de uma expressão
  case 1:
    cout << "Bom dia!";
    //break interrompe somente o comando de repetição no qual está inserido.
    break;
    case 2:
    cout << "Boa tarde!";
    break;
    case 3:
    cout << "Boa noite!";
    break;
	}
    
    	//encerra o programa
	return 0;
}

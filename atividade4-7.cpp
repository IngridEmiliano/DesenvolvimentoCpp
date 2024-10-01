#include <iostream>
using namespace std;

int main()
{
    int opcao;

    cout << "1.Saque \n";
    cout << "2.Deposito \n" ;
    cout << "3.Consulta de saldo \n" ;
    cin >> opcao;
    
      switch(opcao)
    {
        case 1:
            cout << "bem vindo a area de saque";
            break;

        case 2:
            cout << "bem vindo a area de deposito";
            break;

       case 3:
            cout << "bem vindo a area de consulta de saldo";
            break;
            
             default:
            cout << "Opcao invalida";

    }
    return 0;
}

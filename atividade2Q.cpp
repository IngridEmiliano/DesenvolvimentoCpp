//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	int peso1, peso2, peso3;
	double nota1, nota2, nota3, mediapond;
	
	
	//pedindo o usuario para inserir os dados
	cout << "media ponderada - Digite 3 notas e seus respectivos pesos";
	
	cout << "\nDigite a primeira nota: ";
    //armazena e le o numero
    cin >> nota1;
    cout << "Digite o peso da primeira nota: ";
    cin >> peso1;
    
    cout << "\nDigite a segunda nota: ";
     cin >> nota2;
      cout << "Digite o peso da segunda nota: ";
    cin >> peso2;
     
      cout << "\nDigite a terceira nota: ";
     cin >> nota3;
      cout << "Digite o peso da terceira nota: ";
    cin >> peso3;
    
    //conta
    mediapond = peso1 * nota1 + peso2 * nota2 + peso3 * nota3 / peso1 + peso2 + peso3;

    //exibe o resultado
    cout << "\nResultado :" << mediapond;

	//encerra o programa
	return 0;
}

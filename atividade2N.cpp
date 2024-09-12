//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// declarando variaveis
	double valor_produto, desconto, valorfinal, valor_porcentagem;
	
	//pedindo o usuario para inserir os dados
	
	cout << "\nDigite o preco do produto: ";
    //armazena e le o numero
    cin >> valor_produto;
    
    cout << "\nDigite o desconto em porcentagem: ";
    //armazena e le o numero
    cin >> desconto;
    
    //conta
    valor_porcentagem = desconto * valor_produto / 100;
    valorfinal = valor_produto - valor_porcentagem;

    //exibe o resultado
    cout << "\nO valor final com o desconto e de :" << valorfinal << " reais";

	//encerra o programa
	return 0;
}

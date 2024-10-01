//biblioteca
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declarando variaveis
string netflix;
string serie;

//pedindo o usuario para inserir os dados
    cout << "Voce é assinante da netflix? (sim / nao): ";
    //armazena e le o que o usuario inseriu
    cin >> netflix;
     cout << "Voce ja assistiu la casa de papel? (sim / nao) ";
    cin >> serie;
    
// Verifica as respostas e exibe
if (netflix == "sim" && serie == "sim"){
   cout << "Otimo, agora voce pode assistir a nova temporada!";
} else if (serie == "nao") {
    cout << "Otimo, agora falta assistir alguma serie!";
}else{
cout << "voce precisa ter uma assinatura netflix!";
}
	//encerra o programa
	return 0;
}

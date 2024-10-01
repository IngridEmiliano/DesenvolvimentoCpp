#include <iostream> 
#include <string>   
using namespace std; 

int main() { 

    string palavra; // 

    cout << "Digite uma palavra: "; 
    getline(cin, palavra); // Lê a linha inteira inserida pelo usuário e armazena em palavra


    // Verifica se a palavra é um espaço em branco ou uma string vazia
    if (palavra == " " || palavra == "") { 
        cout << "a palavra e vazia"; 
    } else {
        cout << "a palavra nao e vazia"; 
    }

    return 0; 
}


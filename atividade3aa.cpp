#include <iostream> 
#include <string>   
using namespace std; 

int main() { 

    string palavra; // 

    cout << "Digite uma palavra: "; 
    getline(cin, palavra); // L� a linha inteira inserida pelo usu�rio e armazena em palavra


    // Verifica se a palavra � um espa�o em branco ou uma string vazia
    if (palavra == " " || palavra == "") { 
        cout << "a palavra e vazia"; 
    } else {
        cout << "a palavra nao e vazia"; 
    }

    return 0; 
}


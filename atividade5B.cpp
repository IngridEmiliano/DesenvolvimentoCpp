#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout<< "Digite um numero inteiro: ";
	cin >> num;
	
    cout << "Os numeros pares entre " << num << " e 100 sao: ";
    for (int i = num; i <= 100; i += 2) {
        cout << i << " ";  // Imprime os números pares
    }
   
    return 0;
}S

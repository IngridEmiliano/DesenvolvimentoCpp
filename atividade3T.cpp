#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	
	cout << "digite um numero inteiro para saber se ele se divide poir 3 ou por 5: ";
	cin >> num;
	
	if (num % 3 == 0 || num % 5 == 0) {
	    cout << "o numero digitado se divide por 3 ou por 5";
	}else {
	 cout << "o numero digitado nao se divide nem por 3 nem por 5";
	}
	 return 0;
}

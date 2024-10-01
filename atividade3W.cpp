
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int num;
	
	cout << "digite um numero inteiro: ";
	cin >> num;
	
	 if (num > 10 || num < 0) {
		cout << "numero invalido";
	}else {
		cout << "numero valido";
	}
	return 0;
}



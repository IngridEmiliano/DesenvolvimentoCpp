
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string compra;
	
	cout << "deseja comprar essa blusa? ";
	cin >> compra;
	
	 if (compra == "sim" || compra == "s") {
		cout << "obrigado pela compra!";
	}else {
		cout << "obrigada pela atencao";
	}
	return 0;
}

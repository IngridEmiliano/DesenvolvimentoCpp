
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string adicional;
	
	cout << "deseja adicional de acucar ou leite no cafe? (acucar/leite) ";
	cin >> adicional;
	
	 if (adicional == "acucar" || adicional == "leite") {
		cout << "cafe com adicional preparado!";
	}else {
		cout << "Cafe sem adicional ";
	}
	return 0;
}

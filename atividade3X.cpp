
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string robo;
	
	cout << "voce e um robo? (sim/nao) ";
	cin >> robo;
	
	 if (robo == "nao") {
		cout << "por favor, prove que nao e um robo";
	}else {
		cout << "....";
	}
	return 0;
}



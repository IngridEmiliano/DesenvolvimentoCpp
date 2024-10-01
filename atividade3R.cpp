/*Escreva um programa que solicite ao usuário o seu nome e idade. O
programa deve verificar se o nome possui mais de 3 caracteres e se a idade é
maior ou igual a 18 anos. Se ambas as condições forem verdadeiras, o
programa deve imprimir &quot;Acesso permitido&quot;. Caso contrário, deve imprimir
&quot;Acesso negado&quot;.*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string nome;
	int nometamanho;
	int idade;
	
	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	nometamanho = nome.length();
	
	if (nometamanho > 3 && idade >= 18){
		cout << "Acesso permitido";
	}else {
		cout << "Acesso negado";
	}
	return 0;
}



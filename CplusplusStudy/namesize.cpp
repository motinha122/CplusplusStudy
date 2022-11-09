#include <iostream>
#include <string.h>
using std::cout; using std::cin; using std::endl;

int main()
{
	char nome[100];

	cout << "Digite um nome: ";
	cin >> nome;
	cout << "Nome: " << nome << endl;
	cout << "Size: " << strlen(nome) << endl;
	return 0;
}

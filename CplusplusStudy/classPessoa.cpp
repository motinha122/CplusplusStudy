#include <iostream>
#include <string.h>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

class Pessoa {

private:
	string nome;
	int cpf;
	int idade;

public:
	void getDados(string nome, int cpf, int idade) {
		this->nome = nome;
		this->cpf = cpf;
		this->idade = idade;
	}

	void showDados() {
		cout << "Nome: " << nome << endl;
		cout << "CPF: " << cpf << endl;
		cout << "Idade: " << idade << endl;
		cout << endl;
	}
};

int main()
{
	Pessoa pessoas[4];

	string nome[4] = { "Joao","Maria","Marcos","Lucas" };
	int cpf[4] = { 234554344,545565776,344566543,5688865545 };
	int idade[4] = { 20,40,21,54 };

	for (int i = 0; i < 4; i++)
	{
		pessoas[i].getDados(nome[i], cpf[i], idade[i]);
		pessoas[i].showDados();
	}
	return 0;
}

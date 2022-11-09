#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

class Pessoa {

private:
	string nome = "default";
	string cpf = "default";
	int idade = 0;

public:
	void getDados(string nome, string cpf, int idade) {
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

	int showIdade() {
		return idade;
	}

	string showNome() {
		return nome;
	}

	string showCpf() {
		return cpf;
	}
};

int getIdade(Pessoa pessoas[], string nome, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (pessoas[i].showNome() == nome) {
			return pessoas[i].showIdade();
		}
	}
	return -1;
}

int main()
{
	Pessoa pessoas[4];

	const string nome[4] = { "Joao","Maria","Marcos","Lucas" };
	const string cpf[4] = { "59754700052","46421878040","65483507070","65953905076" };
	const int idade[4] = { 20,40,21,54 };

	for (int i = 0; i < 4; i++)
	{
		pessoas[i].getDados(nome[i], cpf[i], idade[i]);
	}

	int size = sizeof(pessoas) / sizeof(Pessoa);

	cout << getIdade(pessoas, "Lucas", size);

	return 0;
}

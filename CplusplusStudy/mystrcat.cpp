#include <iostream>
using std::cout; using std::cin; using std::endl;

int my_strlen(char* str) {
	int tam = 0;
	while (*str != '\0') {
		tam++;
		str++;
	}
	return tam;
}

char* my_strcat(char* dest, char* orig) {
	char* resultado;
	int tam_orig = my_strlen(orig);
	int tam_dest = my_strlen(dest);
	resultado = new char[tam_orig + tam_dest];
	char* p_str = resultado;

	while (*dest != '\0') {
		*p_str = *dest;
		p_str++;
		dest++;
	}

	while (*orig != '\0') {
		*p_str = *orig;
		p_str++;
		orig++;
	}
	*p_str = '\0';
	return resultado;
}

int main()
{
	char* nome1 = new char[100];
	char* nome2 = new char[100];
	char* resultado;

	cout << "Digite o nome 1: ";
	cin >> nome1;
	cout << "Digite o nome 2: ";
	cin >> nome2;

	resultado = my_strcat(nome1, nome2);

	cout << "Resultado: " << resultado;

	return 0;
}

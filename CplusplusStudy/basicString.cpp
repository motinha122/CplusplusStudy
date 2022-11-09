#include <iostream>
#include <string>

void modf(std::string& s) {
	s += " Nao";
}

int main()
{
	std::string x = "Xampson";
	modf(x);
	std::cout << x << std::endl;
	return 0;
}

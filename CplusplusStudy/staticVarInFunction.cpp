#include <iostream>
#include <string>
#include <memory>

using std::string;

void Function()
{
	static int i = 0; //Creates the variable 1 time
	int a = 0; //Creates the variable every time the function is called
	i++;
	a++;
	std::cout << i << std::endl;
	std::cout << a << std::endl;
}

int main()
{
	Function();
	Function();
	Function();
	Function();
	Function();
	return 0;
}
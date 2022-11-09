#include <iostream>
#include <string>

using string = std::string;

class Entity {
private:
	string eName;
	int eAge;

public:
	Entity() :eName("null"), eAge(-1) {}

	Entity(const string& name, int age) :eName(name), eAge(age) {}

	~Entity() {
		std::cout << "Deleted" << std::endl;
	}
	void GetData() {
		std::cout << eName << std::endl;
		std::cout << eAge << std::endl;
	}
};

int main()
{
	Entity e;
	Entity e1("Xampson", 10);
	e1.GetData();
	e.GetData();
	return 0;
}
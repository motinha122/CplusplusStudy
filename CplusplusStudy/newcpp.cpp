#include <iostream>
#include <string>

using string = std::string;

class Entity {
private:
	string name;

public:
	Entity() :name("unknown") {}

	Entity(const string& pName) :name(pName) {}

	~Entity() {
		std::cout << "Object Deleted" << std::endl;
	}

	const string& GetName() const {
		return name;
	}
};

int main()
{
	Entity enty("Xampson");
	std::cout << enty.GetName() << std::endl;

	Entity* enty2 = new Entity("Batata");
	std::cout << enty2->GetName() << std::endl;

	Entity* a = new Entity[50];
	std::cout << a[10].GetName() << std::endl;

	delete enty2;
	delete[] a;
	return 0;
}
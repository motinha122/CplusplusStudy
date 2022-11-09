#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;

public:

	Entity() : m_Name("unknown") {}

	Entity(const std::string& name) : m_Name(name) {}

	const std::string& GetName() const {
		return m_Name;
	}
};

int main()
{
	const Entity e("Xampson");
	const Entity e1;
	std::cout << e.GetName() << std::endl;
	std::cout << e1.GetName() << std::endl;
	return 0;
}
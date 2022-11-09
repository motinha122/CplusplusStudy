#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;

public:
	Entity(const std::string& name)
		:m_Name(name) {}

	const std::string& GetName() const {
		m_DebugCount++;
		return m_Name;
	}
};

int main()
{
	const Entity e("Xampson");
	std::cout << e.GetName() << std::endl;
	return 0;
}
#include <iostream>
#include <string>

using string = std::string;

class Entity {
private:
	string mName;
	int mAge;

public:
	explicit Entity(const string& name)
		:mName(name), mAge(-1) {}

	explicit Entity(int age)
		:mName("Unknown"), mAge(age) {}

	void getInfo() {
		std::cout << mName << " , " << mAge << std::endl;
	}

};

int main()
{
	Entity a("Xampson");
	// Entity b = 22; ERROR
	Entity b(22);
	a.getInfo();
	b.getInfo();
	return 0;
}
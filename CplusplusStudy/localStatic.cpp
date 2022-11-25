#include <iostream>
#include <string>
#include <memory>

using std::string;

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}

	void Hello() {}
};

int main()
{
	Singleton::Get().Hello();

	return 0;
}
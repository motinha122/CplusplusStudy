#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

class Entity {
public:
	int x, y;
	static int printedTimes;

	void Print() {
		cout << x << "," << y << endl;
		printedTimes++;
	}

	static void printTimes() {
		cout << printedTimes << endl;
	}
};

int Entity::printedTimes = 0;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1 = { 1,5 };

	e.Print();
	e1.Print();

	Entity::printTimes();

	return 0;
}

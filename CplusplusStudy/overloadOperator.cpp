#include <iostream>
#include <string>

using string = std::string;

struct Vector2
{
	float x, y;

	Vector2(float x, float y)
		:x(x), y(y) {}

	Vector2 Add(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator+(const Vector2& other) const {
		return Add(other);
	}

	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);
	}

	void Show() {
		std::cout << x << " , " << y << std::endl;
	}

};

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result = position.Add(speed.Multiply(powerup)); // without operator overload 
	Vector2 result2 = position + (speed * powerup); // with operator overload

	result.Show();
	result2.Show();

	return 0;
}
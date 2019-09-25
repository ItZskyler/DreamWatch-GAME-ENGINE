#include "../../neededHeaders.h"

namespace engine {
	vec2::vec2(){
		x = 0;
		y = 0;
	}

	vec2::vec2(const float& x, const float& y) {
		this->x = x;
		this->y = y;
	}

	vec2& vec2::add(const vec2& other) {
		x += other.x;
		y += other.y;

		return *this;
	}

	vec2& vec2::subtract(const vec2& other) {
		x -= other.x;
		y -= other.y;

		return *this;
	}

	vec2& vec2::multiply(const vec2& other) {
		x *= other.x;
		y *= other.y;

		return *this;
	}

	vec2& vec2::divide(const vec2& other) {
		x /= other.x;
		y /= other.y;

		return *this;
	}

	std::ostream& operator<<(std::ostream& stream, const vec2& vector) {
		stream << "vec2: (" << vector.x << ", " << vector.y << ")";
		return stream;
	}
}
#include "../../neededHeaders.h"

namespace engine {
	vec3::vec3(){
		x = 0;
		y = 0;
		z = 0;
	}

	vec3::vec3(const float& x, const float& y, const float& z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	vec3& vec3::add(const vec3& other) {
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	vec3& vec3::subtract(const vec3& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	vec3& vec3::multiply(const vec3& other) {
		x *= other.x;
		y *= other.y;
		z *= other.z;

		return *this;
	}

	vec3& vec3::divide(const vec3& other) {
		x /= other.x;
		y /= other.y;
		z /= other.z;

		return *this;
	}

	std::ostream& operator<<(std::ostream& stream, const vec3& vector) {
		stream << "vec3: (" << vector.x << ", " << vector.y << ")";
		return stream;
	}
}
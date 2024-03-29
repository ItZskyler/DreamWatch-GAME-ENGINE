#include "../../neededHeaders.h"

namespace engine {
	vec4::vec4() {
		x = 0;
		y = 0;
		z = 0;
		w = 0;
	}

	vec4::vec4(const float& x, const float& y, const float& z, const float& w) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}

	vec4& vec4::add(const vec4& other) {
		x += other.x;
		y += other.y;
		z += other.z;
		w += other.w;

		return *this;
	}

	vec4& vec4::subtract(const vec4& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
		w -= other.w;

		return *this;
	}

	vec4& vec4::multiply(const vec4& other) {
		x *= other.x;
		y *= other.y;
		z *= other.z;
		w *= other.w;

		return *this;
	}

	vec4& vec4::divide(const vec4& other) {
		x /= other.x;
		y /= other.y;
		z /= other.z;
		w /= other.w;

		return *this;
	}

	std::ostream& operator<<(std::ostream& stream, const vec4& vector) {
		stream << "vec4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
		return stream;
	}
}
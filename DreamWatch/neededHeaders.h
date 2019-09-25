#pragma once

#include "glew.h"
#include "GLFW/glfw3.h"

#include <iostream>
#include <time.h>

namespace engine {
	class Window {
	public:
		inline int getWidth() const { return WIDTH; }
		inline int getHeight() const { return HEIGHT; }

		Window(void);
		~Window(void);
	private:
		static const int WIDTH;
		static const int HEIGHT;
	};

	class Renderer {
	public:
		void Render(void);

		Renderer(void);
	};

	struct vec2 {
		float x, y;

		vec2();
		vec2(const float& x, const float& y);

		vec2& add(const vec2& other);
		vec2& subtract(const vec2& other);
		vec2& multiply(const vec2& other);
		vec2& divide(const vec2& other);

		friend std::ostream& operator<<(std::ostream& stream, const vec2& vector);
	};

	struct vec3 {
		float x, y, z;

		vec3();
		vec3(const float& x, const float& y, const float& z);

		vec3& add(const vec3& other);
		vec3& subtract(const vec3& other);
		vec3& multiply(const vec3& other);
		vec3& divide(const vec3& other);

		friend std::ostream& operator<<(std::ostream& stream, const vec3& vector);
	};

	struct vec4 {
		float x, y, z, w;

		vec4();
		vec4(const float& x, const float& y, const float& z, const float& w);

		vec4& add(const vec4& other);
		vec4& subtract(const vec4& other);
		vec4& multiply(const vec4& other);
		vec4& divide(const vec4& other);

		friend std::ostream& operator<<(std::ostream& stream, const vec4& vector);
	};
}

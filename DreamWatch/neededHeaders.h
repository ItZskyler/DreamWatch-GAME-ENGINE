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
}

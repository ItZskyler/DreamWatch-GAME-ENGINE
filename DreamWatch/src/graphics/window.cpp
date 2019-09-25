#include "../../neededHeaders.h"

namespace engine {
	GLFWwindow* window;

	const int Window::WIDTH = 1260;
	const int Window::HEIGHT = 820;

	void GetFPS()
	{
		clock_t current_ticks, delta_ticks;
		clock_t fps = 120;


		current_ticks = clock();

		delta_ticks = clock() - current_ticks;
		if (delta_ticks > 0)
			fps = CLOCKS_PER_SEC / delta_ticks;
		std::cout << "FPS: " << fps << std::endl;
	}

	Window::Window() {
		if (!glfwInit()) {
			Window::~Window();
			return;
		}

		if (!glewInit()) {
			Window::~Window();
			return;
		}

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_ANY_PROFILE);
		glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

		window = glfwCreateWindow(getWidth(), getHeight(), "DreamWatch", nullptr, nullptr);
		glViewport(0, 0, getWidth(), getHeight());

		//glfwSetWindowSizeCallback();

		if (!window) {
			Window::~Window();
			return;
		}
		glfwMakeContextCurrent(window);

		while (!glfwWindowShouldClose(window)) {
			if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS) {
				Window::~Window();
				return;
			}

			Renderer::Renderer();
			glfwSwapBuffers(window);

			std::cout << "Width: " << getWidth() << ", " << " Height: " << getHeight() << std::endl;
			GetFPS();
			system("cls");
		}

		Window::~Window();
	}

	Window::~Window() {
		glfwTerminate();
	}
}
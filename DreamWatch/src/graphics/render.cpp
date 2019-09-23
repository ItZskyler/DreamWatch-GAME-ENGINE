#include "../../neededHeaders.h"

namespace engine {

	Renderer::Renderer() {
		Render();
	}

	void Renderer::Render() {
		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);

		glClearColor(0, 0, 1, 1);
	}
}
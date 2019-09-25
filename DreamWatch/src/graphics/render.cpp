#include "../../neededHeaders.h"

namespace engine {

	Renderer::Renderer() {
		Render();
	}

	void Renderer::Render() {
		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_QUADS);
		glColor4f(0.5, 0.8, 1, 0);
		glVertex2d(-0.5f, 0.5f);
		glColor4f(0.5, 0.8, 1, 0);
		glVertex2d(0.5f, 0.5f);
		glColor4f(0.8, 0.4, 1, 0);
		glVertex2d(0.5f, -0.5f);
		glColor4f(0.8, 0.4, 1, 0);
		glVertex2d(-0.5f, -0.5f);
		glEnd();
		glClearColor(0.8, 1, 1, 1);
	}
}
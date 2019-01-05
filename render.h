#ifndef RENDER_H
#define RENDER_H

#define GLM_ENABLE_EXPERIMENTAL

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <string>
#include <vector>

/*---------------------------------------------------------------------------*/

struct Vertex
{
	public:
		Vertex(const glm::vec3& pos)
		{
			this->pos = pos;
		}

	private:
		glm::vec3 pos;
};

/*---------------------------------------------------------------------------*/

class Render
{
	public:
		Render(Vertex* vertices, unsigned int nb_vertices, unsigned int * indices, unsigned int nb_indices);
		virtual ~Render();

		void Draw();
	private:

		enum
		{
			VERTEX_VBO,
			INDEX_VBO,
			NB_BUFFERS
		};

		GLuint vao_id;
		GLuint vbo[NB_BUFFERS];
		unsigned int nb_vertices;
};

#endif

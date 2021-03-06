#include "vao.hpp"


VAO::VAO() {
}

void VAO::setAttrib(GLuint attribute, Buffer &&b, int size, GLenum type, bool normalized) {
	this->bind();
	b.setAttrib(attribute, size, type, normalized);
	this->unbind();
}

void VAO::setAttrib(GLuint attribute, Buffer const &b, int size, GLenum type, bool normalized) {
	this->bind();
	b.setAttrib(attribute, size, type, normalized);
	this->unbind();
}

void VAO::setAttrib(GLuint attribute, Buffer &&b, GLenum type, bool normalized) {
	setAttrib(attribute, b, 1, type, normalized);
}

void VAO::setAttrib(GLuint attribute, Buffer const &b, GLenum type, bool normalized) {
	setAttrib(attribute, b, 1, type, normalized);
}

void VAO::setAttrib(GLuint attribute, Buffer &&b, int size, bool normalized) {
	setAttrib(attribute, b, size, GL_FLOAT, normalized);
}

void VAO::setAttrib(GLuint attribute, Buffer const &b, int size, bool normalized) {
	setAttrib(attribute, b, size, GL_FLOAT, normalized);
}

void VAO::setAttrib(GLuint attribute, Buffer &&b, GLenum type) {
	setAttrib(attribute, b, 1, type, false);
}

void VAO::setAttrib(GLuint attribute, Buffer const &b, GLenum type) {
	setAttrib(attribute, b, 1, type, false);
}

void VAO::setAttrib(GLuint attribute, Buffer &&b) {
	setAttrib(attribute, b, 1, GL_FLOAT, false);
}

void VAO::setAttrib(GLuint attribute, Buffer const &b) {
	setAttrib(attribute, b, 1, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer &&b, int size, GLenum type, bool normalized) {
	setAttrib(s.getAttribLocation(name), b, size, type, normalized);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer const &b, int size, GLenum type, bool normalized) {
	setAttrib(s.getAttribLocation(name), b, size, type, normalized);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer &&b, GLenum type, bool normalized) {
	setAttrib(s, name, b, 1, type, normalized);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer const &b, GLenum type, bool normalized) {
	setAttrib(s, name, b, 1, type, normalized);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer &&b, int size, bool normalized) {
	setAttrib(s, name, b, size, GL_FLOAT, normalized);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer const &b, int size, bool normalized) {
	setAttrib(s, name, b, size, GL_FLOAT, normalized);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer &&b, GLenum type) {
	setAttrib(s, name, b, 1, type, false);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer const &b, GLenum type) {
	setAttrib(s, name, b, 1, type, false);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer &&b, int size) {
	setAttrib(s, name, b, size, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer const &b, int size) {
	setAttrib(s, name, b, size, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer &&b) {
	setAttrib(s, name, b, 1, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &s, std::string name, Buffer const &b) {
	setAttrib(s, name, b, 1, GL_FLOAT, false);
}


void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer &&b, int size, GLenum type, bool normalized) {
	setAttrib(s.getAttribLocation(name), b, size, type, normalized);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer const &b, int size, GLenum type, bool normalized) {
	setAttrib(s.getAttribLocation(name), b, size, type, normalized);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer &&b, GLenum type, bool normalized) {
	setAttrib(s, name, b, 1, type, normalized);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer const &b, GLenum type, bool normalized) {
	setAttrib(s, name, b, 1, type, normalized);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer &&b, int size, bool normalized) {
	setAttrib(s, name, b, size, GL_FLOAT, normalized);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer const &b, int size, bool normalized) {
	setAttrib(s, name, b, size, GL_FLOAT, normalized);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer &&b, GLenum type) {
	setAttrib(s, name, b, 1, type, false);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer const &b, GLenum type) {
	setAttrib(s, name, b, 1, type, false);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer &&b, int size) {
	setAttrib(s, name, b, size, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer const &b, int size) {
	setAttrib(s, name, b, size, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer &&b) {
	setAttrib(s, name, b, 1, GL_FLOAT, false);
}

void VAO::setAttrib(ShaderProgram &&s, std::string name, Buffer const &b) {
	setAttrib(s, name, b, 1, GL_FLOAT, false);
}

void VAO::bind() {
	if(this->id == GL_MAX_VERTEX_ATTRIBS)
		glGenVertexArrays(1, &this->id);
	glBindVertexArray(this->id);
}

void VAO::unbind() {
	glBindVertexArray(0);
}
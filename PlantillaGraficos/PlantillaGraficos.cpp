// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"



using namespace std;



void dibujarPoligonos()
{
	//Sun
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 1.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) + -.8, (0.15 * sin(i * 3.14159 / 180.0)) + .8, 0.0f);
	}

	glEnd();

	//Pasto
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.9f,0.1f);

	glVertex3f(-1.0f, -0.6, 0.0f);
	glVertex3f(1.0f, -0.6, 0.0f);
	glVertex3f(1.0f, -1.0, 0.0f);
	glVertex3f(-1.0f, -1.0, 0.0f);

	glEnd();

	//Casa
	glBegin(GL_POLYGON);

	glColor3f(0.6f, 0.5f, 0.3f);

	glVertex3f(-0.4f, 0.4, 0.0f);
	glVertex3f(0.6f, 0.4, 0.0f);
	glVertex3f(0.6f, -0.8, 0.0f);
	glVertex3f(-0.4f, -0.8, 0.0f);

	glEnd();

	//Puerta
	glBegin(GL_POLYGON);

	glColor3f(0.6f, 0.6f, 0.7f);

	glVertex3f(-0.1f, -0.4, 0.0f);
	glVertex3f(0.3f, -0.4, 0.0f);
	glVertex3f(0.3f, -0.8, 0.0f);
	glVertex3f(-0.1f, -0.8, 0.0f);

	glEnd();

	//Perilla
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.04 * cos(i * 3.14159 / 180.0)) + 0.2, (0.045 * sin(i * 3.14159 / 180.0)) + -0.6, 0.0f);
	}

	glEnd();

	//Ventana
	glBegin(GL_POLYGON);

	glColor3f(0.6f, 0.9f, 1.0f);

	glVertex3f(0.2f, 0.2, 0.0f);
	glVertex3f(0.5f, 0.2, 0.0f);
	glVertex3f(0.5f, -0.2, 0.0f);
	glVertex3f(0.2f, -0.2, 0.0f);

	glEnd();

	//Arbol
	glBegin(GL_POLYGON);

	glColor3f(0.6f, 0.5f, 0.3f);

	glVertex3f(-0.8f, -0.4, 0.0f);
	glVertex3f(-0.6f, -0.4, 0.0f);
	glVertex3f(-0.6f, -0.9, 0.0f);
	glVertex3f(-0.8f, -0.9, 0.0f);

	glEnd();

	//Hojas de arbol
	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.9f, 0.1f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) + -0.7, (0.2 * sin(i * 3.14159 / 180.0)) + -0.3, 0.0f);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.9f, 0.1f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) + -0.7, (0.2 * sin(i * 3.14159 / 180.0)) + -0.0, 0.0f);
	}

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.0f, 0.9f, 0.1f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) + -0.65, (0.2 * sin(i * 3.14159 / 180.0)) + -0.2, 0.0f);
	}

	glEnd();

	//nube 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - .3, (0.1 * sin(i * 3.14159 / 180.0)) + .7, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) - .2, (0.08 * sin(i * 3.14159 / 180.0)) + .8, 0.0f);
	}
	glEnd();

	//nube 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) + 0.4, (0.1 * sin(i * 3.14159 / 180.0)) + .8, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) + .5, (0.08 * sin(i * 3.14159 / 180.0)) + .9, 0.0f);
	}
	glEnd();

	//nube 3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) + 0.8, (0.1 * sin(i * 3.14159 / 180.0)) + .5, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) + .9, (0.08 * sin(i * 3.14159 / 180.0)) + .6, 0.0f);
	}
	glEnd();
}

void dibujarTrianguloContinuo()
{
	glBegin(GL_TRIANGLE_STRIP);

	glVertex3f(0.0f,0.0f,0.0f);

	glVertex3f(0.0f, 1.0f,0.0f);

	glVertex3f(-1.0f, 0.0f, 0.0f);

	glVertex3f(-0.5f,0.7f, 0.0f);

	glEnd();
}

void dibujarLineaContinua()
{
	glLineWidth(5);


	//Ventana Marco
	glBegin(GL_LINE_STRIP);

	glColor3f(0.6f, 0.3f, 0.1f);

	glVertex3f(0.2f, 0.2, 0.0f);
	glVertex3f(0.5f, 0.2, 0.0f);
	glVertex3f(0.5f, -0.2, 0.0f);
	glVertex3f(0.2f, -0.2, 0.0f);

	glEnd();
}

void dibujarLineas()
{
	glLineWidth(3);

	glBegin(GL_LINES);
	
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.8f, 0.6f, 0.0f);
	glVertex3f(-0.8f, 0.5f, 0.0f);

	glVertex3f(-0.7f, 0.63f, 0.0f);
	glVertex3f(-0.65f, 0.55f, 0.0f);

	glVertex3f(-0.6f, 0.7f, 0.0f);
	glVertex3f(-0.53f, 0.65f, 0.0f);

	glVertex3f(-0.6f, 0.8f, 0.0f);
	glVertex3f(-0.5f, 0.8f, 0.0f);

	glVertex3f(-0.6f, 0.9f, 0.0f);
	glVertex3f(-0.5f, 0.95f, 0.0f);


	glEnd();

	//Marco Ventana
	glLineWidth(5);

	glBegin(GL_LINES);

	glColor3f(0.6f, 0.3f, 0.1f);

	glVertex3f(0.35f, 0.2f, 0.0f);
	glVertex3f(0.35f, -0.2f, 0.0f);

	glVertex3f(0.2f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);



	glEnd();

}

void dibujarTriangulos() {
	
	glBegin(GL_TRIANGLES);
	//Techo
	glColor3f(0.6f, 0.3f, 0.1f);
	
	glVertex3f(0.1f, 0.8f, 0.0f);

	glVertex3f(0.8f, 0.3f, 0.0f);

	glVertex3f(-0.6f, 0.3f, 0.0f);

		glEnd();
}

void dibujar() 
{
	dibujarPoligonos();
	dibujarTriangulos();
	dibujarLineas();
	dibujarLineaContinua();
}

int main()
{
	//Declarar una vetana
	GLFWwindow* window;

	//si no se pudo inicializar glfw terminamos la ejecución

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	//Si se pudo inicial glfw, se inicia la ventana

	window = glfwCreateWindow(600, 600, "ventana", NULL, NULL);

	// si no se pudo crear la ventana, terminamos la ejecución

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, se activan las funciones modernas (gpu)
	glewExperimental = true;

	//Imprimir posibles errores

	GLenum errores = glewInit();
	if (errores != GLEW_OK)
	{
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	cout << "Version openGL" << versionGL;

	//ciclo de dibujo (Draw loop)

	while (!glfwWindowShouldClose(window))
	{
		//establecer la región de dibujo
		glViewport(0, 0, 600, 600);
		//establecemos el color de borrado, valores rgba, van de 0 a 1
		glClearColor(0, 1, 1, 1);
		//Borrar!  Con el borrar solo se hace el swap der buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Actualizar valores y dibujar
		dibujar();
		//pa poder usar el mouse
		glfwPollEvents();

		glfwSwapBuffers(window);
	}

	//Despues del ciclo de dibujo eliminamos ventana y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();

}

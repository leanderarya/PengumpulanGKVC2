/*
 * FreeGLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone 
 * and torus shapes in FreeGLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <GL/glut.h>

#include <gl/glut.h>

//Nabila Betari Anjani - 24060122140169
//23 Februari 2024 - Praktikum 1-3


void Praktikum1(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  
  glColor3f(0.87f, 0.42f, 0.57f);
  glRectf(-0.7, -0.18, -0.3, 0.3);
  
  glColor3f(0.97f, 0.86f, 0.93f);
  glRectf(-0.3, -0.18, 0.1, 0.3);
  
  glColor3f(0.87f, 0.42f, 0.57f);
  glRectf(0.1, -0.18, 0.5, 0.3);
  
  glColor3f(0.47f, 0.67f, 0.86f);
  glRectf(-0.9, -0.7, -0.5, -0.18);
  
  glColor3f(0.52f, 0.74f, 0.93f);
  glRectf(-0.5, -0.7, -0.1, -0.18);
  
  glColor3f(0.86f, 0.75f, 0.86f);
  glRectf(-0.1, -0.7, 0.3, -0.18);
  
  glColor3f(0.53f, 0.31f, 0.71f);
  glRectf(0.3, -0.7, 0.7, -0.18);
  
  glColor3f(0.53f, 0.31f, 0.71f);
  glRectf(-0.9, -0.7, -0.7, -0.9);
  
  glColor3f(0.8f, 0.7f, 1.0f);
  glRectf(-0.7, -0.7, -0.5, -0.9);
  
  glColor3f(1.0f, 0.5f, 0.6f);
  glRectf(-0.5, -0.7, -0.3, -0.9);
  
  glColor3f(1.0f, 0.8f, 0.8f);
  glRectf(-0.3, -0.7, -0.1, -0.9);
  
  glColor3f(0.4f, 0.6f, 1.0f);
  glRectf(-0.1, -0.7, 0.1, -0.9);
  
  glColor3f(0.52f, 0.74f, 0.93f);
  glRectf(0.1, -0.7, 0.3, -0.9);
  
  glColor3f(0.5f, 0.8f, 1.0f);
  glRectf(0.3, -0.7, 0.5, -0.9);
  
  glColor3f(0.0f, 0.3f, 0.8f);
  glRectf(0.5, -0.7, 0.7, -0.9);
  glFlush();
}

int main(int argc, char* argv[]) {
  glutInit(&argc, argv);
  glutInitWindowSize(640, 480);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
  glutCreateWindow("Persegi");
  glutDisplayFunc(Praktikum1);
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  glutMainLoop();

  
  return 0;
}



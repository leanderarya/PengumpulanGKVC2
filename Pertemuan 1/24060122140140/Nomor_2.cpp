#include <windows.h>
#include <GL/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glEnd();


   
	glBegin(GL_LINE_LOOP);
	glLineWidth(2.0f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.3f, 0.3f);
    glEnd();


  
	glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(0.6f, -0.1f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.4f, -0.1f);
    glVertex2f(0, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(-0.3f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, -0.3f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.4f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.2f, -0.1f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0, -0.3f);
    glVertex2f(-0.2f, -0.3f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); 

    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f); 

    glVertex2f(0.8f, 0.8f);
    glVertex2f(0.9f, 0.8f);
    glVertex2f(0.8f, 0.6f);
    glVertex2f(0.9f, 0.6f);
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1080, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Nomor 2");

    glClearColor(0.8f,0.1f,0.2f,1.0f);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
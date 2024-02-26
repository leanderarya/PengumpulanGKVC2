#include <GL\glut.h>
#include <windows.h>

void hailHit(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3.0f);
	glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(0, 0.3);
    glVertex2f(0, -0.3);
    glVertex2f(0.3, 0);
    glVertex2f(-0.3, -0);
    glVertex2f(0, 0.3);
    glVertex2f(0.3, 0.3);
    glVertex2f(0, -0.3);
    glVertex2f(-0.3, -0.3);
    glVertex2f(-0.3, 0);
    glVertex2f(-0.3, 0.3);
    glVertex2f(0.3, 0);
	glVertex2f(0.3, -0.3);
	glEnd();

    glPointSize(5.0f); 
    glBegin(GL_POINTS);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.7f);
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.2f, 0.9f);
	glVertex2f(-0.1f, 0.8f);
	glVertex2f(0, 0.7f);
	glVertex2f(0.1f, 0.6f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.2f, 0.6f);
	glVertex2f(0.2f, 0.7f);
	glVertex2f(0.2f, 0.8f);
	glVertex2f(0.2f, 0.9f);



    glEnd();


    glFlush();
}


int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("No: 1, Membuat Partai");
	glutDisplayFunc(hailHit);
	glClearColor(0.8f,0.1f,0.2f,1.0f);
	glutMainLoop();
	return 0;
}
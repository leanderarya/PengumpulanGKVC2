#include <gl/glut.h>

void QuadsStrip(void) {
	glBegin(GL_QUAD_STRIP);
  	glColor3f(0.75f, 0.02f, 0.0f);
  	glVertex2f(-0.5f, -0.5f);
  	glColor3f(0.0f, 0.75f, 0.32f);
  	glVertex2f(0.5f, -0.5f);
  	glColor3f(0.0f, 0.89f, 0.12f);
  	glVertex2f(0.5f, 0.0f);
  	glColor3f(0.1f, 0.0f, 0.88f);
  	glVertex2f(-0.5f, 0.0f);
  	glColor3f(0.70f, 0.23f, 0.16f);
  	glVertex2f(-0.5f, 0.5f);
  	glColor3f(0.07f, 0.13f, 0.94f);
  	glVertex2f(0.5f, 0.5f);
  	glEnd();

	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat Quads Strip");
	glutDisplayFunc(QuadsStrip);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}

#include <gl/glut.h>

void Quads(void) {
	glClear(GL_COLOR_BUFFER_BIT);
  	glBegin(GL_QUADS);
  	glColor3f(0.65f, 0.20f, 0.0f);
  	glVertex2f(-0.5f, -0.5f);
  	glColor3f(0.0f, 0.30f, 0.12f);
  	glVertex2f(0.5f, -0.5f);
  	glColor3f(0.54f, 0.1f, 0.24f);
  	glVertex2f(0.5f, 0.5f);
  	glColor3f(0.0f, 0.3f, 0.67f);
  	glVertex2f(-0.5f, 0.5f);
  	glEnd();

	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat Quads");
	glutDisplayFunc(Quads);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}



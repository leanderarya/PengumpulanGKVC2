#include <gl/glut.h>

void SegitigaStrip(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.5f,0.5f,0.0f);
	glVertex2f(-0.10f,-0.10f);
	glColor3f(0.0f,0.1f,0.5f);
	glVertex2f(0.10f,-0.10f);
	glColor3f(0.1f,0.0f,0.5f);
	glVertex2f(0.0f,0.10f);
	glColor3f(0.5f,0.5f,0.5f);
	glVertex2f(-0.05f,0.05f);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(0.05f,0.05f);
	glEnd();
	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat Segitiga STRIP");
	glutDisplayFunc(SegitigaStrip);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}



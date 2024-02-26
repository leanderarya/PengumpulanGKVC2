#include <gl/glut.h>

void SegitigaFan(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.5f,0.5f,0.0f);
	glVertex2f(0.0f,0.0f);
	glColor3f(0.0f,0.5f,0.5f);
	glVertex2f(-0.10f,0.10f);
	glColor3f(0.5f,0.0f,0.5f);
	glVertex2f(0.10f,0.10f);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(0.0f,-0.10f);
	glEnd();
	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat Segitiga FAN");
	glutDisplayFunc(SegitigaFan);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}







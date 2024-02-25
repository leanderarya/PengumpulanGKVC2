// Nama : Baron Albana Achmad
// Lab : GKV C2
// NIM : 24060122130073
// Deskripsi : membuat struktur trianglefandengan opengl primitif

#include <GL/glut.h>

void trianglefan(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(-0.10f,0.20f,0.0f);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(-0.10f,-0.20f,0.0f);
	glVertex3f(0.30f,0.10f,0.0f);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.40f,0.0f,0.0f);
	glVertex3f(0.40f,-0.50,0.0f);
	glEnd();
	glFlush();
	
	
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1366,768);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Trianglefan");
	glutDisplayFunc(trianglefan);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}

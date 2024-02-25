
// Nama : Baron Albana Achmad
// Lab : GKV C2
// NIM : 24060121130073
// Deskripsi : membuat struktur linestrip dengan opengl primitif

#include <GL/glut.h>

void linestrip(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.50f,0.20f,0.0f);
	glVertex3f(0.50f,0.0f,0.0f);
	glVertex3f(0.25f,0.15f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.30f,0.0f);
	glVertex3f(0.10f,0.40f,0.0f);
	glVertex3f(0.0f,0.50f,0.0f);
	glVertex3f(0.0f,0.80f,0.0f);
	glVertex3f(0.25f,0.65f,0.0);
	glVertex3f(0.50f,0.80f,0.0f);
	glVertex3f(0.50f,0.60f,0.0f);
	glEnd();
	glFlush();
}

//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(1366,768);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("linestrip");
//	glutDisplayFunc(linestrip);
//	glClearColor(1.0f,1.0f,1.0f,1.0f);
//	glutMainLoop();
//	return 0;
//}

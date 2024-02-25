
// Nama : Baron Albana Achmad
// Lab : GKV C2
// NIM : 24060122130073
// Deskripsi : membuat struktur quads dengan opengl primitif

#include <GL/glut.h>

void quads(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(0.0f,0.20f,0.0f);
	glVertex3f(0.50f,0.0f,0.0f);
	glVertex3f(0.50f,0.10f,0.0f);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(0.40f,0.20f,0.0f);
	glVertex3f(0.0f,0.70f,0.0f);
	glVertex3f(0.50f,0.50f,0.0f);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.50f,0.60f,0.0f);
	glVertex3f(0.40f,0.70f,0.0f);

	glEnd();
	glFlush();
}

//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(1366,768);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("Quads");
//	glutDisplayFunc(quads);
//	glClearColor(1.0f,1.0f,1.0f,1.0f);
//	glutMainLoop();
//	return 0;
//}

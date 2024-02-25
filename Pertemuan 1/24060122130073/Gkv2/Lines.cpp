// Nama : Baron Albana Achmad
// Lab : GKV C2
// NIM : 24060122130073
// Deskripsi : membuat lines

#include <GL/glut.h>

void lines(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(15.0f);
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex3f(0.10f,0.10f,0.0);
	glVertex3f(0.50f,0.10f,0.0);
	glVertex3f(0.10f,0.20f,0.0);
	glVertex3f(0.50f,0.20f,0.0);
	glEnd();
	glFlush();
}
//
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(1366,768);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("Lines");
//	glutDisplayFunc(lines);
//	glClearColor(1.0f,1.0f,1.0f,1.0f);
//	glutMainLoop();
//	return 0;
//}

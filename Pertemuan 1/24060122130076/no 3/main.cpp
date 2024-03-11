// 	Nama : Azzam Saefudin Rosyidi
//	NIM	: 24060122130076

#include <gl/glut.h>
void Menara(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(0.0, 0.0, 0.0);
	glRectf(-0.5, -0.3, -0.3, -0.5);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(-0.04, -0.25, 0.0);
	glRectf(-0.25, -0.05, -0.05, -0.25);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(-0.04, -0.25, 0.0);
	glRectf(0.0, 0.2, 0.2, 0.0);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(-0.0425, -0.25, 0.0);
	glRectf(0.25, 0.45, 0.45, 0.25);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(0.082, 0.71725, 0.0);
	glRectf(-0.25, -0.05, -0.05, -0.25);
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(-0.04, -0.25, 0.0);
	glRectf(0.0, 0.2, 0.2, 0.0);		
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glTranslatef(0.025, 0.3135, 0.0);
	glRectf(-0.1, 0.05, 0.05, -0.1);
	
	glTranslatef(0.0, 0.1625, 0.0);
	glRectf(-0.1, 0.05, 0.05, -0.1);
	
	glTranslatef(0.0, 0.1625, 0.0);
	glRectf(-0.1, 0.05, 0.05, -0.1);
	
	glTranslatef(0.0, 0.1625, 0.0);
	glRectf(-0.1, 0.05, 0.05, -0.1);
	
	glTranslatef(0.0, 0.11, 0.0);
	glRectf(-0.05, 0.0, 0.0, -0.05);

	glFlush();
}
int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Gambar Menara");
	glutDisplayFunc(Menara);
	glClearColor(0.529f, 0.808f, 0.922f, 1.0f);
	glutMainLoop();
	return 0;
}

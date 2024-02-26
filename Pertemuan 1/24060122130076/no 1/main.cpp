// 	Nama : Azzam Saefudin Rosyidi
//	NIM	: 24060122130076

#include <gl/glut.h>

void kincir(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
//	GL_POINTS
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0, 0.0);
	glEnd();
	
//	GL_LINES
	glLineWidth(3.0f);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3, 0.0);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.0, -0.3);
	glVertex2f(-0.1, -0.1);
	glVertex2f(-0.1, -0.1);
	glVertex2f(-0.3, 0.0);
	glVertex2f(-0.3, 0.0);
	glVertex2f(-0.1, 0.1);
	glVertex2f(-0.1, 0.1);
	glVertex2f(0.0, 0.3);
	glVertex2f(0.0, 0.3);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.3, 0.0);
	glEnd();
	
	glFlush();	
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Gambar Kincir");
	glutDisplayFunc(kincir);
	glClearColor(0.7f,0.7f,0.7f,0.7f);
	glutMainLoop();
	return 0;
}

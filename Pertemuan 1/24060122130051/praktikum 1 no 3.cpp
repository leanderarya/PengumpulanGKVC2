//Nama: Miriam Stefani Abigail Hutapea
//NIM: 24060122130051

#include <GL/glut.h>

void Kubus1(){
	glColor3f (1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2,0);
	glVertex2f(-0.7,0);
	glVertex2f(-0.7,-2);
	glVertex2f(-2,-2);
	glEnd();
}

void Kubus2(){
	glColor3f (0.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.3,-2);
	glVertex2f(-2.6,-2);
	glVertex2f(-2.6,-4);
	glVertex2f(-1.3,-4);
	glEnd();
}

void Kubus3(){
	glColor3f (1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0,2);
	glVertex2f(-1.3,2);
	glVertex2f(-1.3,0);
	glVertex2f(0,0);
	glEnd();
}

void Segitiga(){
	glColor3f(1.0f, 0.0f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0,2);
	glVertex2f(-1.3,2);
	glVertex2f(-0.6,1);
	glEnd();
}

void Kubus4(){
	glColor3f (0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5,0);
	glVertex2f(0.8,0);
	glVertex2f(0.8,-2);
	glVertex2f(-0.5,-2);
	glEnd();
}

void Kubus5(){
	glColor3f (1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.3,-2);
	glVertex2f(1.6,-2);
	glVertex2f(1.6,-4);
	glVertex2f(0.3,-4);
	glEnd();
}

void Jendela(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void render(){
	Kubus1();
	Kubus2();
	Kubus3();
	Kubus4();
	Kubus5();
	Segitiga();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit (&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE |GLUT_RGBA);
	glutCreateWindow("soal praktikum no. 3");
	glutDisplayFunc(Jendela);
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glOrtho(-4, 4, -5, 5, -4, 6);
	glutDisplayFunc(render);
	glutMainLoop();
	return 0;
}

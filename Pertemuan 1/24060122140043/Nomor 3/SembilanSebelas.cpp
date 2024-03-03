#include <gl/glut.h>

/*
Nama	: Muhammad Farhan Hafiz ALkirami
NIM		: 24060122140043
Tanggal	: 20 Februari 2024
*/

void SembilanSebelas(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Kotak tanah
	glColor4f(0.85f,0.6f,0.4f,1.0f);
	glRectf(-1.0,-0.3,1.0,-1.0);
	
	//Kotak gedung 1
	glColor4f(0.5f,0.5f,0.5f,1.0f);
	glRectf(0.2,-0.3,0.45,0.8);
	
	//Kotak gedung 2
	glColor4f(0.5f,0.5f,0.5f,1.0f);
	glRectf(0.65,-0.3,0.9,0.8);
	
	
	//---PESAWAT---
	//Kotak pesawat
	glColor4f(1.0f,0.9f,0.9f,0.8f);
	glRectf(-0.6,0.3,-0.25,0.5);
	
	//Kotak sayap
	glColor4f(1.0f,1.0f,1.0f,1.0f);
	glRectf(-0.45,0.4,-0.3,0.45);
	
	//Border sayap
	glColor4f(0.0f,0.0f,0.0f,1.0f);
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.45, 0.4);
        glVertex2f(-0.3, 0.4);
        glVertex2f(-0.3, 0.45);
        glVertex2f(-0.45, 0.45);
	glEnd();
	
	//Segitiga ekor pesawat
	glColor4f(1.0f,0.9f,0.9f,0.8f);
	glBegin(GL_POLYGON);
		glVertex2f(-0.6,0.5);
		glVertex2f(-0.55,0.5);
		glVertex2f(-0.6,0.6);
	glEnd();
	
	//Segitiga kepala pesawat
	glColor4f(1.0f,0.9f,0.9f,0.8f);
	glBegin(GL_POLYGON);
		glVertex2f(-0.25,0.3);
		glVertex2f(-0.1,0.3);
		glVertex2f(-0.25,0.5);
	glEnd();
	
	//-----------
	
	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("9-11");
	glutDisplayFunc(SembilanSebelas);
	glClearColor(0.0f,0.0f,0.0f,1.0f);
	glutMainLoop();
	return 0;
}

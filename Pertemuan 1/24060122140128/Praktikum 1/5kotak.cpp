// nama : Rahman Hanif Aji Saputra
// nim	: 24060122140128
// lab 	: C2

#include <GL/glut.h>
#include <stdlib.h>

void Kubus(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	//warna light salmon (kotak teratas)
	glColor3ub(255, 160, 122); 
	glRectf(-0.094, 0.58, 0.095, 0.39);
	
	//warna lavender (kotak kedua)
	glColor3ub(230, 230, 250); 
	glRectf(-0.22, 0.34, -0.02, 0.14);
	glRectf(0.02, 0.34, 0.22,0.14);
	
	//warna biru langit (kotak ketiga)
	glColor3ub(135, 206, 250); 
	glRectf(-0.35, 0.09, -0.15, -0.11);
	glRectf(0.15, 0.09, 0.35, -0.11);
	glRectf(-0.1, 0.09, 0.1, -0.11);
	
	//warna light steel blue (kotak keempat)
	glColor3ub(176, 196, 222); 
	glRectf(-0.46, -0.17, -0.25, -0.37);
	glRectf(-0.2, -0.17, 0.02, -0.37);
	glRectf(0.07, -0.17, 0.27, -0.37);
	glRectf(0.33, -0.17, 0.53, -0.37);
	
	//Kotak samping kanan
	glColor3ub(255, 160, 122); 
	glRectf(0.70, 0.58, 0.85, 0.39);
	glColor3ub(230, 230, 250); 
	glRectf(0.75, 0.34, 0.9, 0.14);
	glColor3ub(135, 206, 250);
	glRectf(0.70, 0.09, 0.85, -0.11);
	glColor3ub(176, 196, 222); 
	glRectf(0.75, -0.17, 0.9, -0.37);
	
	//Kotak samping kiri
	glColor3ub(255, 160, 122); 
	glRectf(-0.70, 0.58, -0.85, 0.39);
	glColor3ub(230, 230, 250); 
	glRectf(-0.75, 0.34, -0.9, 0.14);
	glColor3ub(135, 206, 250);
	glRectf(-0.70, 0.09, -0.85, -0.11);
	glColor3ub(176, 196, 222); 
	glRectf(-0.75, -0.17, -0.9, -0.37);
	
	
	glFlush();
}



int main (int argc,char *argv[]) {
	
	glutInit(&argc,argv);
	glutInitWindowSize(720,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Kubus");
	glutDisplayFunc(Kubus);
	glClearColor(0.0, 0.0f ,0.0f, 0.0f);
	glutMainLoop();
	
return 0;
}

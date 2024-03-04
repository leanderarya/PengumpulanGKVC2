#include <GL/glut.h>
#include <stdlib.h>
//Nama : Muhammad Fikri Firdaus
//NIM : 24060122140115
//Lab : GKV C2

void Kubus(void){
glClear(GL_COLOR_BUFFER_BIT);
glTranslatef(0.1f,0.5f,0.0f);

glColor3f(1.0f, 0.0f, 0.0f); //Warna merah
glRectf(0.5, -0.4, 0.1,-0.9);
	
glColor3f(1.0f, 0.0f, 4.0f); //Warna ungu
glRectf(0.10, -0.4, -0.3,-0.9);

glColor3f(1.0f, 3.0f, 0.0f); //Warna kuning
glRectf(-0.7, -0.4, -0.3,-0.9);

glColor3f(0.0f, 2.0f, 0.0f); //Warna Hijau
glRectf(-0.1, 0.09, -0.5, -0.4);

glColor3f(0.3f, 2.3f, 1.0f); //Warna Hijau
glRectf(-0.1, 0.09, 0.3, -0.4);
glFlush();
}



int main(int argc,char *argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(720,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat Kubus");
	glutDisplayFunc(Kubus);
	glClearColor(1.0, 1.0f ,1.0f, 1.0f);
	glutMainLoop();
return 0;
}

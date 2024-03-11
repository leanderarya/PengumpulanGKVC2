/* 
Nama		: Muhammad Luthfan Lazuardi
NIM			: 24060122120010
Tanggal		: 21-02-2024
Deskripsi	: Buat Gambar Kubus bertingkat dari objek primitif sekreatif mungkin. (minimal 5 kubus) 
*/

#include <gl/glut.h>

void SegiEmpat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Kubus 1 Pink
	glColor3f(1.0f, 0.43f, 0.78f);
	glRectf(-0.2, -0.8, 0.2, -0.4);
	
	//Kubus 2 Ungu
	glColor3f(0.53f,0.12f,0.47f);
	glRectf(-0.5, -0.4, -0.1, 0.0);
	
	//Kubus 3 Ungu
	glColor3f(0.53f,0.12f,0.47f);
	glRectf(0.5, -0.4, 0.1, 0.0);
	
	//Kubus 4 Tosca
	glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(-0.2, 0.0, 0.2, 0.4);
	
	//Kubus 5 Merah
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.7, 0.0, -0.3, 0.4);
	
	//Kubus 6 Merah
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(0.3, 0.0, 0.7, 0.4);
	
	//Kubus 7 Orange
	glColor3f(1.0f, 0.5f, 0.0f);
	glRectf(-0.5, 0.4, -0.1, 0.8);
	
	//Kubus 8 Orange
	glColor3f(1.0f, 0.5f, 0.0f);
	glRectf(0.1, 0.4, 0.5, 0.8);
	
	//Kubus 9 Ungu
	glColor3f(0.53f,0.12f,0.47f);
	glRectf(-0.1, -0.7, 0.1, -0.5);
	
	//Kubus 10 Pink
	glColor3f(1.0f, 0.43f, 0.78f);
	glRectf(-0.4, -0.3, -0.2, -0.1);
	
	//Kubus 11 Pink
	glColor3f(1.0f, 0.43f, 0.78f);
	glRectf(0.4, -0.3, 0.2, -0.1);
	
	//Kubus 12 Kuning
	glColor3f(1.0f, 1.0f, 0.0f);
	glRectf(-0.4, 0.5, -0.2, 0.7);
	
	//Kubus 13 Kuning
	glColor3f(1.0f, 1.0f, 0.0f);
	glRectf(0.2, 0.5, 0.4, 0.7);
	
	//Kubus 14 Orange
    glColor3f(1.0f, 0.5f, 0.0f);
    glRectf(-0.6, 0.1, -0.4, 0.3);
    
	//Kubus 15 Orange
	glColor3f(1.0f, 0.5f, 0.0f);
	glRectf(0.4, 0.1, 0.6, 0.3);
	
	//Kubus 4 Biru
	glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(-0.1, 0.1, 0.1, 0.3);
	
	glFlush();	
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Gambar Kubus");
	glutDisplayFunc(SegiEmpat);
	
	// Background 
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glutMainLoop();
	return 0;
}

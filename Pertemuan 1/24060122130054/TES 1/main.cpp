// Nama File : Tes 1
// Nama : Ayyub Al Anshor
// Tanggal : Rabu, 21 Februari 2024
// Lab : C2 / GKV
#include <gl/glut.h>

void SegiEmpat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	// Coklat
	glColor3f(0.647f, 0.165f, 0.165f);
	glRectf(0.50, -0.10, -0.5, 0.4);
	//Merah
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.5,-0.5,-0.10,-0.10);
	
	//Merah 1
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(0.5,-0.5,0.10,-0.10);
	
	//Kotak 2
	//Hijau
	glColor3f(0.0f, 1.0f, 0.0f);
	glRectf(-0.10, 0.10, 0.10, -0.10);
	
	//Kotak 3
    // Biru 1
	glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(0.50, 0.5, -0.5, 0.3);
    
    // Biru 2
	glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(-0.3, -0.5, 0.5, -0.3);
	
	//Kotak 4
	// Kuning
    glColor3f(1.0f, 1.0f, 0.0f);
    glRectf(-0.5, -0.3, -0.3, -0.5);
    
	// Kuning 2
    glColor3f(1.0f, 1.0f, 0.0f);
    glRectf(0.5, -0.3, 0.3, -0.5);
	
	//Kotak 5
	// Putih
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(0.3, 0.0, 0.5, -0.2);

	
	// Putih 2
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.3, -0.0, -0.5, -0.2);
	
	//Kotak 5
	// Coklat
	glColor3f(0.871f, 0.722f, 0.529f);
	glRectf(0.50, 0.10, -0.5, 0.4);

	glFlush();
	
	
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Segi Empat");
	glutDisplayFunc(SegiEmpat);
	// Hitam
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glutMainLoop();
	return 0;
}

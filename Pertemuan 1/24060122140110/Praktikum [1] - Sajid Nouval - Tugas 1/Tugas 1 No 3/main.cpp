//Sajid Nouval - 204060122140110

#include <gl/glut.h>

void SegiEmpat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	//Hijau
	glColor3f(0.0f, 1.0f, 0.0f);
	glRectf(0.5,0.1,0.05,0.5);
	
	//Kotak 2
	//Merah
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.5, 0.1, 0.0, 0.5);
	
	//Kotak 3
	// Kuning
	glColor3f(1.0f, 1.0f, 0.0f);
    glRectf(0.05, 0.05, 0.5, -0.4);
	
	//Kotak 4
	// Biru
    glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(-0.5, 0.05, 0.0, -0.4);
	
	//Kotak 5
	// Putih
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.7, -0.5, 0.6, -0.6);
	glFlush();
	
	//Kotak 6
	// Putih Kiri
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.7, 0.7, -0.6, -0.6);
	glFlush();
	
	//Kotak 7
	// Putih Kanan
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(0.6, 0.7, 0.7, -0.6);
	glFlush();
	
	//Kotak 8
	// Putih Atas
	glColor3f(1.0f, 1.0f, 1.0f);
	glRectf(-0.6, 0.6, 0.7, 0.7);
	glFlush();
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Segi Empat");
	glutDisplayFunc(SegiEmpat);
	// Biru langit
	glClearColor(0.5294f,0.8087f,0.9216f,0.0f);
	glutMainLoop();
	return 0;
}

/*

	Diketik oleh Ghirsan Ahdani, 24 Februari 2024
	
	Program ini membuat grafis komputasi visual primitif objek bentuk.

*/ 

#include <GL/glut.h>

void bentukPrimitif(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
		glBegin(GL_LINE_STRIP);	// Line Strip (warna merah)
			
			glColor3f(1.0f, 0.0f, 0.0f);
			glVertex2f(-0.75f, 0.33f);
			glVertex2f(-0.5f, 1.0f);
			glVertex2f(-0.25f, 0.33f);
		
		glEnd();
	
		glBegin(GL_LINE_LOOP);	// Line Loop (warna kuning)
			
			glColor3f(1.0f, 1.0f, 0.0f);
			glVertex2f(0.25f, 0.33f);
			glVertex2f(0.5f, 1.0f);
			glVertex2f(0.75f, 0.33f);
		
		glEnd();
		
		glBegin(GL_TRIANGLE_FAN);	// Triangle Fan (warna hijau)
			
			glColor3f(0.0f, 1.0f, 0.0f);
			glVertex2f(-0.5f, -0.33f);	// Titik pusat
			glVertex2f(-0.17f, 0.06f);	// Kanan
			glVertex2f(-0.28f, 0.22f);
			glVertex2f(-0.39f, 0.33f);
			glVertex2f(-0.61f, 0.33f);
			glVertex2f(-0.72f, 0.22f);
			glVertex2f(-0.83f, 0.06f);	// Kiri
		
		glEnd();
		
		glBegin(GL_TRIANGLE_STRIP);	// Triangle Strip (warna biru)
			
			glColor3f(0.0f, 0.0f, 1.0f);
			glVertex2f(0.17f, 0.33f); // Titik awal
			glVertex2f(0.28f, -0.33f);
			glVertex2f(0.39f, 0.33f);
			glVertex2f(0.50f, -0.33f);
			glVertex2f(0.61f, 0.33f);
			glVertex2f(0.72f, -0.33f); 
			glVertex2f(0.83f, 0.33f);
			glVertex2f(0.94f, -0.33f);	// Titik akhir
			
		glEnd();
		
		glBegin(GL_QUADS);	// Quads (warna ungu)
		
			glColor3f(1.0f, 0.0f, 1.0f);
			glVertex2f(-0.75f, -1.0f);
			glVertex2f(-0.75f, -0.33f);
			glVertex2f(-0.25f, -0.33f);
			glVertex2f(-0.25f, -1.0f);
		
		glEnd();
		
		glBegin(GL_QUAD_STRIP);	// Quads (warna toska)
		
			glColor3f(0.0f, 1.0f, 1.0f);
			glVertex2f(0.0f, -0.50f);
			glVertex2f(0.25f, -1.0f); 
			glVertex2f(0.25f, -0.33f);
			glVertex2f(0.36f, -0.50f);
			glVertex2f(0.75f, -0.33f);
			glVertex2f(0.64f, -0.50f);
			glVertex2f(1.0f, -0.50f);
			glVertex2f(0.75f, -1.0f);
		
		glEnd();
		
	glFlush();
	
}

int main(int argc, char* argv[]){	// Main program
	
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	
	glutCreateWindow("Bentuk Primitif");
	glutDisplayFunc(bentukPrimitif);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	
	glutMainLoop();
	
	return 0;

}

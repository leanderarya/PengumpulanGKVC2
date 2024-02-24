/*

	Diketik oleh Ghirsan Ahdani, 21 Februari 2024
	
	Program ini membuat grafik komputasi visual kincir angin yang berputar.

*/

#include <GL/glut.h>

float muter = 45.0f;	// Variabel rotasi

void Baling(void){	// Membuat baling-baling
	
	glPushMatrix();
	glRotatef(muter, 0.0f, 0.0f, 1.0f);	// Rotasi berdasar variabel muter
	
		// Baling y
		glColor3f(0.792f, 0.533f, 0.337f);
		glRectf(-0.05, 0.58, 0.05, -0.58);
		
		glColor3f(0.851f, 0.851f, 0.851f);
		glRectf(0.05, 0.58, 0.15, 0.22);
		
		glColor3f(0.851f, 0.851f, 0.851f);
		glRectf(-0.15, -0.58, -0.05, -0.22);
		
		// Baling x
		glColor3f(0.792f, 0.533f, 0.337f);
		glRectf(-0.58, 0.05, 0.58, -0.05);
		
		glColor3f(0.851f, 0.851f, 0.851f);
		glRectf(0.58, -0.05, 0.22, -0.15);
		
		glColor3f(0.851f, 0.851f, 0.851f);
		glRectf(-0.58, 0.05, -0.22, 0.15);
		
		// Tengah
		glColor3f(0.682f, 0.38f, 0.169f);
		glRectf(-0.05, 0.05, 0.05, -0.05);
	
	glPopMatrix();
	
}

void Badan(void){	// Membuat badan rumah kincir angin
	
	// Tembok
	glBegin(GL_QUADS);
	
		glColor3f(0.682f, 0.114f, 0.129f);
		glVertex2f(-0.1845, 0);
		glColor3f(0.682f, 0.114f, 0.129f);
		glVertex2f(0.1845, 0);
		glColor3f(0.682f, 0.114f, 0.129f);
		glVertex2f(0.27, -0.76);
		glColor3f(0.682f, 0.114f, 0.129f);
		glVertex2f(-0.27, -0.76);
	
	glEnd();
	
	// Atap
	glBegin(GL_TRIANGLES);
	
		glColor3f(0.29f, 0.09f, 0.086f);
		glVertex2f(-0.1845, 0);
		glColor3f(0.29f, 0.09f, 0.086f);
		glVertex2f(0.1845, 0);
		glColor3f(0.29f, 0.09f, 0.086f);
		glVertex2f(0.0, 0.25);
	
	glEnd();
	
	// Ring
	glColor3f(0.851f, 0.851f, 0.851f);
	glRectf(-0.27, -0.5, 0.27, -0.43);
	
	// Pintu
	glColor3f(0.867, 0.463, 0.467f);
	glRectf(-0.08, -0.76, 0.08, -0.55);
	
	
	// Tembok Jendela
	glBegin(GL_QUADS);
	
		glColor3f(0.867, 0.463, 0.467f);
		glVertex2f(-0.0945, 0);
		glColor3f(0.867, 0.463, 0.467f);
		glVertex2f(0.0945, 0);
		glColor3f(0.867, 0.463, 0.467f);
		glVertex2f(0.15, -0.43);
		glColor3f(0.867, 0.463, 0.467f);
		glVertex2f(-0.15, -0.43);
	
	glEnd();
	
}

void KincirAngin(void){	// Konstruksi kincir angin secara utuh
	
	glClear(GL_COLOR_BUFFER_BIT);

		Badan();
		
		muter += 0.1f;	// Increment rotasi muter
		
		glPushMatrix();
	    glTranslatef(0.0f, 0.08f, 0.0f);
	    
			Baling();
		
		glPopMatrix();
		
	glutPostRedisplay();	// Me-render perubahan objek ke KincirAngin
	
	glFlush();
	
}

int main(int argc, char* argv[]){	// Main program
	
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	
	glutCreateWindow("Kincir Angin");
	glutDisplayFunc(KincirAngin);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	
	glutMainLoop();
	
	return 0;
}

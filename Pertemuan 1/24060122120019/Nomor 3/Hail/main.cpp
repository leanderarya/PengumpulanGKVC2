/*

	Diketik oleh Ghirsan Ahdani, 22 Februari 2024
	
	Program ini membuat grafis komputasi visual bendera swastika yang berputar.

*/

#include <GL/glut.h>
#include <math.h>

void WhiteDisk(void){	// Membuat lingkaran putih
	
	glBegin(GL_POLYGON);
	
		// Titik pusat
		glColor3f(1.0f, 1.0f, 1.0f);
	    glVertex3f(0.0f, 0.0f, 0.0f);
	    
	    // Radius
	    float radius = 0.45f;
	    
	    // Verte lingkaran
	    for (int i = 0; i <= 1000; ++i) {
	        glVertex3f(radius * cos(2 * 3.14159 * i / 1000.0), radius * sin(2 * 3.14159 * i / 1000.0), 0);
	    }
		
	glEnd();
	
}

void RedFlag(void){	// Membuat base bendera warna merah
	
	glColor3f(0.871f, 0.0f, 0.0f);
	glRectf(-1.0, 0.6, 1.0, -0.6);
    
}

void OneHaken(void){	// Membuat kepingan pembentuk swastika
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glRectf(-0.06, 0.3, 0.06, -0.3);
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glRectf(0.06, 0.3, 0.24, 0.18);
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glRectf(-0.06, -0.3, -0.24, -0.18);
	
}

void Hakenkreuz(void){	// Membuat swastika utuh
	
	glPushMatrix();
	glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
	
		OneHaken();
		
		glPushMatrix();
	    glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
	    
			OneHaken();
			
		glPopMatrix();
	
	glPopMatrix();

}

float muter = 0.0f;	// Variabel rotasi

void Hail(void){	// Konstruksi bendera secara utuh
	
	glClear(GL_COLOR_BUFFER_BIT);
	
		RedFlag();	// Bendera merah
		
		glPushMatrix();
		glTranslatef(-0.10f, 0.0f, 1.0f);	// Transalasi WhiteDisk ke kiri
		
			WhiteDisk();
			
			muter += 0.5f;	// Increment rotasi 
			
			glPushMatrix();
			glRotatef(muter, 0.0f, 0.0f, 1.0f);	// Rotasi Hakenkreuz 
			
				Hakenkreuz();
			
			glPopMatrix();
			
			glutPostRedisplay();
			
		glPopMatrix();
		
	glFlush();
}

int main(int argc, char* argv[]){	// Main program
	
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	
	glutCreateWindow("Hail!");
	glutDisplayFunc(Hail);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	
	glutMainLoop();
	
	return 0;
}

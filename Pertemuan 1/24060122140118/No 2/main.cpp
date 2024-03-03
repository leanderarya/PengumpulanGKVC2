#include <GL/glut.h>
#include <stdlib.h>
#include <gl/glut.h>


void Panda(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 1.0f, 1.0f); //kepala
	glRectf(-0.18,0.18,0.18,-0.18);
	
	glColor3f(0.0f, 0.0f, 0.0f); //mata
    glPointSize(25.0f);
    glBegin(GL_POINTS);
        glVertex3f(-0.07f, 0.10f, 0.0f); //mata kiri
        glVertex3f(0.07f, 0.10f, 0.0f); //mata kanan
    glEnd();
    
    glColor3f(1.0f, 1.0f, 1.0f); // Mata Tengah
    glPointSize(10.0f);
    glBegin(GL_POINTS);
        glVertex3f(-0.07f, 0.10f, 0.0f); //mata kiri
        glVertex3f(0.07f, 0.10f, 0.0f); //mata kanan
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f); // Hidung
    glPointSize(10.0f);
    glBegin(GL_POINTS);
    	glVertex3f(0.0f,0.0f,0.0f);
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_STRIP); //mulut
        glVertex2f(0.06f, -0.08f);
        glVertex2f(0.0f, -0.1f);
        glVertex2f(-0.06f, -0.08f);
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f); //telinga
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.12f, 0.25f, 0.0f);
        glVertex3f(-0.18f, 0.18f, 0.0f);
        glVertex3f(-0.06f, 0.18f, 0.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3f(0.12f, 0.25f, 0.0f);
        glVertex3f(0.18f, 0.18f, 0.0f);
        glVertex3f(0.06f, 0.18f, 0.0f);
    glEnd();
    
		glColor3f(1.0f, 1.0f, 1.0f); //badan
		glRectf(-0.25,-0.18,0.25,-0.7);
	
		glColor3f(0.0f, 0.0f, 0.0f); //kaki kiri
		glRectf(-0.2,-0.7,-0.1,-0.85);
	
		glColor3f(0.0f, 0.0f, 0.0f); //kaki kanan
		glRectf(0.2,-0.7,0.1,-0.85);
	
		glColor3f(0.0f, 0.0f, 0.0f); //tangan kiri
		glRectf(-0.35,-0.18,-0.25,-0.5);
	
		glColor3f(0.0f, 0.0f, 0.0f); //tangan kanan
		glRectf(0.35,-0.18,0.25,-0.5);
	
	glColor3f(1.0f, 1.0f, 1.0f); // Tangan Lancip Kanan
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.3f, -0.65f);   //titik puncak
    	glVertex2f(0.25f, -0.5f); //sudut kiri
    	glVertex2f(0.35f, -0.5f);  //sudut kanan
	glEnd();
	
	glColor3f(1.0f, 1.0f, 1.0f); // Tangan Lancip Kiri
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(-0.3f, -0.65f);   //titik puncak
    	glVertex2f(-0.35f, -0.5f); //sudut kiri
    	glVertex2f(-0.25f, -0.5f);  //sudut kanan
	glEnd();

		
	
	glColor3f(1.0f, 1.0f, 1.0f); //Salju
    glPointSize(10.0f);
    glBegin(GL_POINTS);
        glVertex3f(0.7f, 0.5f, 0.0f);
        glVertex3f(0.5f, 0.1f, 0.0f);
        glVertex3f(-0.7f, 0.1f, 0.0f);
        glVertex3f(-0.5f, 0.7f, 0.0f);
        glVertex3f(0.3f, 0.5f, 0.0f);
        glVertex3f(-0.5f, -0.5f, 0.0f);
        glVertex3f(0.9f, -0.3f, 0.0f);
        glVertex3f(-0.4f, 0.3f, 0.0f);
        glVertex3f(-0.8f, 0.3f, 0.0f);
        glVertex3f(-0.9f, 0.2f, 0.0f);
        glVertex3f(-0.1f, 0.3f, 0.0f);
        glVertex3f(0.5f, -0.5f, 0.0f);
    glEnd();
    
    
    glColor3f(0.0f, 0.0f, 0.0f); 
    glBegin(GL_QUADS); 
        glVertex2f(-0.0f, -0.13f);
        glVertex2f(-0.0f, -0.2f);
        glVertex2f(-0.2f, -0.2f);
        glVertex2f(-0.2f, -0.13f);
    glEnd();

    glBegin(GL_QUAD_STRIP); 
        glVertex2f(0.0f, -0.13f);
        glVertex2f(0.0f, -0.2f);
        glVertex2f(0.2f, -0.13f);
        glVertex2f(0.2f, -0.2f);
    glEnd();
    
    

	// Awan 1
	glColor3f(1.0f, 1.0f, 1.0f); 
	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
		glVertex2f(-0.3f, 0.4f);
		glVertex2f(-0.2f, 0.4f);
		glVertex2f(-0.2f, 0.3f);
		glVertex2f(0.2f, 0.3f);
		glVertex2f(0.2f, 0.4f);
		glVertex2f(0.3f, 0.4f);
		glVertex2f(0.3f, 0.7f);
		glVertex2f(0.2f, 0.7f);
		glVertex2f(0.2f, 0.8f);
		glVertex2f(-0.2f, 0.8f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.3f, 0.7f);
		glVertex2f(-0.3f, 0.4f);
	glEnd();

	// Awan 2
	glColor3f(1.0f, 1.0f, 1.0f); // Putih
	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
		glVertex2f(-0.6f, 0.6f);
		glVertex2f(-0.5f, 0.6f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(-0.1f, 0.5f);
		glVertex2f(-0.1f, 0.6f);
		glVertex2f(0.0f, 0.6f);
		glVertex2f(0.0f, 0.9f);
		glVertex2f(-0.1f, 0.9f);
		glVertex2f(-0.1f, 1.0f);
		glVertex2f(-0.5f, 1.0f);
		glVertex2f(-0.5f, 0.9f);
		glVertex2f(-0.6f, 0.9f);
		glVertex2f(-0.6f, 0.6f);
	glEnd();

	
	//Bambu
	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_QUAD_STRIP); 
        glVertex2f(-0.5f, 1.0f);
        glVertex2f(-0.45f, 1.0f);
        glVertex2f(-0.5f, -0.8f);
        glVertex2f(-0.45f, -0.8f);
    glEnd();
    
    glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_QUAD_STRIP); 
        glVertex2f(-0.70f, 1.0f);
        glVertex2f(-0.65f, 1.0f);
        glVertex2f(-0.7f, -0.8f);
        glVertex2f(-0.65f, -0.8f);
    glEnd();
	glFlush();
}



int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(800,800);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Panda di Salju");
	glutDisplayFunc(Panda);
	glClearColor(0.529f, 0.808f, 0.922f, 1.0f);
	glutMainLoop();
	return 0;
}

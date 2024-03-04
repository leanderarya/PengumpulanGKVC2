/*
 * FreeGLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone 
 * and torus shapes in FreeGLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <GL/glut.h>

#include <stdlib.h>

#include <gl/glut.h>

//Nabila Betari Anjani - 24060122140169
//23 Februari 2024 - Praktikum 1-2

void Beruang(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.87f, 0.72f, 0.53f); //kepala
	glRectf(-0.18,0.18,0.18,-0.18);
	
	glColor3f(0.0f, 0.0f, 0.0f); //mata
    glPointSize(15.0f);
    glBegin(GL_POINTS);
        glVertex3f(-0.07f, 0.10f, 0.0f); //mata kiri
        glVertex3f(0.07f, 0.10f, 0.0f); //mata kanan
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_LOOP); //mahkota
        glVertex2f(0.06f, 0.01f);
        glVertex2f(0.0f, -0.1f);
        glVertex2f(-0.06f, 0.01f);
    glEnd();
    
    glColor3f(0.36f, 0.25f, 0.20f); //telinga
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
    
		glColor3f(0.36f, 0.25f, 0.20f); //badan
		glRectf(-0.3,-0.18,0.3,-0.7);
	
		glColor3f(0.87f, 0.72f, 0.53f); //kaki kiri
		glRectf(-0.2,-0.7,-0.1,-0.85);
	
		glColor3f(0.87f, 0.72f, 0.53f); //kaki kanan
		glRectf(0.2,-0.7,0.1,-0.85);
	
		glColor3f(0.87f, 0.72f, 0.53f); //tangan kiri
		glRectf(-0.4,-0.18,-0.3,-0.4);
	
		glColor3f(0.87f, 0.72f, 0.53f); //tangan kanan
		glRectf(0.4,-0.18,0.3,-0.4);
	
	glColor3f(1.0f, 1.0f, 1.0f); //bintang
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
    glEnd();
    
    
    glColor3f(1.0f, 1.0f, 0.0f); //kuning
    glBegin(GL_QUADS); //tas kiri
        glVertex2f(-0.1f, -0.1f);
        glVertex2f(-0.1f, -0.2f);
        glVertex2f(-0.2f, -0.2f);
        glVertex2f(-0.2f, -0.1f);
    glEnd();

    glBegin(GL_QUAD_STRIP); //tas kanan
        glVertex2f(0.1f, -0.1f);
        glVertex2f(0.1f, -0.2f);
        glVertex2f(0.2f, -0.1f);
        glVertex2f(0.2f, -0.2f);
    glEnd();
    
    // batang Pohon Kiri
	glColor3f(0.36f, 0.25f, 0.20f);
	glBegin(GL_QUADS);
    	glVertex2f(-0.7f, -0.9f); //kiri bawah
    	glVertex2f(-0.6f, -0.9f);  //kanan bawah
    	glVertex2f(-0.6f, -0.7f);   //kanan atas
    	glVertex2f(-0.7f, -0.7f);  //kiri atas
	glEnd();

	// daun Pohon Kiri
	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
    	glVertex2f(-0.65f, -0.4f);   //titik puncak
    	glVertex2f(-0.75f, -0.7f); //sudut kiri
    	glVertex2f(-0.55f, -0.7f);  //sudut kanan
	glEnd();
	
	    // batang Pohon Kanan
	glColor3f(0.36f, 0.25f, 0.20f);
	glBegin(GL_QUADS);
    	glVertex2f(0.7f, -0.9f);
    	glVertex2f(0.6f, -0.9f);
    	glVertex2f(0.6f, -0.7f);
    	glVertex2f(0.7f, -0.7f);
	glEnd();

	// daun Pohon Kanan
	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
    	glVertex2f(0.65f, -0.4f);
    	glVertex2f(0.75f, -0.7f);
    	glVertex2f(0.55f, -0.7f);
	glEnd();

	//awan
	glColor3f(1.0f, 1.0f, 1.0f); //putih
	glLineWidth(2.0);
	glBegin(GL_LINE_STRIP);
    
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
	
	//kaki bawah kiri
	glBegin(GL_TRIANGLE_STRIP);
    	glColor3f(0.36f, 0.25f, 0.20f);
    	glVertex2f(-0.15f, -0.9f); //atas
    	glVertex2f(-0.2f, -0.85f); //kiri bawah
    	glVertex2f(-0.1f, -0.85f); //kanan bawah
	glEnd();
	//kaki bawah kanan
	glBegin(GL_TRIANGLE_STRIP);
    	glColor3f(0.36f, 0.25f, 0.20f);
    	glVertex2f(0.15f, -0.9f); 
    	glVertex2f(0.2f, -0.85f); 
    	glVertex2f(0.1f, -0.85f);
	glEnd();
	glFlush();
}



int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Beruang");
	glutDisplayFunc(Beruang);
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glutMainLoop();
	return 0;
}


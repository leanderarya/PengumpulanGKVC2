#include <GL/glut.h>

void drawLove() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set warna background menjadi putih
    glClear(GL_COLOR_BUFFER_BIT);
    
    
	// menggambar bentuk hati
	
    //baris 1 kiri
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.5, 0.2);
    glVertex2f(-0.5, 0.3);
    
    
    //baris 1 kanan
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.1, 0.2);
    
    
    //baris 2 kiri
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, 0.1);
    glVertex2f(-0.6, 0.2);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.1);
    
    //baris 2 kanan
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0, 0.1);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.5, 0.2);
    glVertex2f(0.5, 0.1);
    
    //baris 3 kiri
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, 0.0);
    glVertex2f(-0.6, 0.1);
    glVertex2f(-0.4, 0.1);
    glVertex2f(-0.4, 0.0);
    
    //baris 3 kanan
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5, 0.1);
    glVertex2f(0.5, 0.0);
    glVertex2f(-0.2, 0.0);
    glVertex2f(-0.2, 0.1);
    
    
    //baris 4 kiri
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, 0.0);
    glVertex2f(-0.6, -0.1);
    glVertex2f(-0.4, -0.1);
    glVertex2f(-0.4, 0.0);
    
    //baris 4 kanan
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.5, -0.1);
	glVertex2f(-0.3, -0.1);
    glVertex2f(-0.3, 0.0);
    
    //baris 5 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, -0.1);
    glVertex2f(-0.6, -0.2);
    glVertex2f(0.5, -0.2);
	glVertex2f(0.5, -0.1);
    
    //baris 6 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, -0.2);
    glVertex2f(-0.5, -0.3);
    glVertex2f(0.4, -0.3);
	glVertex2f(0.4, -0.2);
	
    //baris 7 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.4, -0.3);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.3, -0.4);
	glVertex2f(0.3, 0.3);
	
	//baris 8 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.3, -0.4);
    glVertex2f(-0.3, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.2, -0.4);
    	
    //baris 9 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.2, -0.6);
    glVertex2f(0.1, -0.6);
	glVertex2f(0.1, -0.5);
	
    //baris 10 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.1, -0.6);
    glVertex2f(-0.1, -0.7);
    glVertex2f(0.0, -0.7);
	glVertex2f(0.0, -0.6);
	
	// membuat outline warna hitam
	
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f); 
    glVertex2f(-0.2, 0.4);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.5, 0.3);
    glVertex2f(-0.5, 0.4);
    

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.1, 0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.1, 0.3);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.1, 0.3);
    glVertex2f(-0.1, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.1, 0.2);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.0, 0.1);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.1, 0.2);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.0, 0.3);
    glVertex2f(0.0, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.1, 0.2);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.0, 0.3);
    glVertex2f(0.0, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, 0.2);
	glVertex2f(-0.6, 0.3);
    glVertex2f(-0.5, 0.3);
    glVertex2f(-0.5, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.5, 0.2);
	glVertex2f(0.5, 0.3);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.4, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7, 0.2);
	glVertex2f(-0.7, -0.2);
    glVertex2f(-0.6, -0.2);
    glVertex2f(-0.6, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.6, 0.2);
	glVertex2f(0.6, -0.2);
    glVertex2f(0.5, -0.2);
    glVertex2f(0.5, 0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, -0.2);
	glVertex2f(-0.6, -0.3);
	glVertex2f(-0.5, -0.3);
    glVertex2f(-0.5, -0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4, -0.2);
	glVertex2f(0.4, -0.3);
	glVertex2f(0.5, -0.3);
    glVertex2f(0.5, -0.2);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, -0.3);
	glVertex2f(-0.5, -0.4);
	glVertex2f(-0.4, -0.4);
    glVertex2f(-0.4, -0.3);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4, -0.3);
	glVertex2f(0.4, -0.4);
	glVertex2f(0.3, -0.4);
    glVertex2f(0.3, -0.3);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4, -0.4);
	glVertex2f(-0.4, -0.5);
	glVertex2f(-0.3, -0.5);
    glVertex2f(-0.3, -0.4);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3, -0.4);
	glVertex2f(0.3, -0.5);
	glVertex2f(0.2, -0.5);
    glVertex2f(0.2, -0.4);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3, -0.5);
	glVertex2f(-0.3, -0.6);
	glVertex2f(-0.2, -0.6);
    glVertex2f(-0.2, -0.5);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2, -0.5);
	glVertex2f(0.2, -0.6);
	glVertex2f(0.1, -0.6);
    glVertex2f(0.1, -0.5);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2, -0.6);
	glVertex2f(-0.2, -0.7);
	glVertex2f(-0.1, -0.7);
    glVertex2f(-0.1, -0.6);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.1, -0.6);
	glVertex2f(0.1, -0.7);
	glVertex2f(0.0, -0.7);
    glVertex2f(0.0, -0.6);
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1, -0.7);
	glVertex2f(-0.1, -0.8);
	glVertex2f(0.0, -0.8);
    glVertex2f(0.0, -0.7);
    
    
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Love Shape");
    glutDisplayFunc(drawLove);
    glutMainLoop();
    return 0;
}



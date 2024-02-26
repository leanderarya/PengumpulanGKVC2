//	Nama         : Rahman Hanif Aji Saputra
//  Nim		     : 24060122140128
//  Lab			 : C2
#include <gl/glut.h>

void Tugas1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
		
	// Penggunaan : GL_LINES (Bintang)
	glLineWidth(6.0f);
	
	glBegin(GL_LINES);
	 
	glColor3ub(154, 208, 194);
	glVertex2f(-0.75, 0.5);
	glVertex2f(-0.65, 0.95);
	
	glColor3ub(135, 206, 250);
	glVertex2f(-0.65, 0.95);
	glVertex2f(-0.575, 0.5);
	
	glVertex2f(-0.575, 0.5);
	glVertex2f(-0.8, 0.82);
	
	glVertex2f(-0.8, 0.82);
	glVertex2f(-0.51, 0.82);
	
	glColor3ub(154, 208, 194);
	glVertex2f(-0.51, 0.82);
	glVertex2f(-0.75, 0.5);
	
	glEnd();
	
	// Penggunaan : GL_LINE_LOOP (Layang layang)
	glLineWidth(8.0f);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 185, 203);
	glVertex2f(-0.9, 0.1);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.76, 0.1);
	
	glColor3ub(247, 202, 215);
	glVertex2f(-0.76, 0.3);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.76, 0.1);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.63, 0.1);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.76, 0.3);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.9, 0.1);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.76, -0.16);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.63, 0.1);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.76, -0.16);
	
	glColor3ub(255, 185, 203);
	glVertex2f(-0.76, 0.1);
	
	glEnd();

	// Penggunaan : GL_TRIANGLE_FAN (Berwarna ungu biru putih paling atas)
    glLineWidth(5.0f);
    glBegin(GL_TRIANGLE_FAN);
    
	glVertex2f(0.6, 0.5);

	glColor3ub(158,55,159);  
	glVertex2f(0.83, 0.25);
	glColor3ub(0,0, 255);  
	glVertex2f(0.83, 0.75);
	glVertex2f(0.3, 0.75);
	glColor3ub(158,55,159);
	glVertex2f(0.16, 0.5);



    glEnd();
   
	// Penggunaan : GL_TRIANGLE_STRIP (yang warna warni ada hijaunya)
	glBegin(GL_TRIANGLE_STRIP);

	glColor3ub(255, 0, 0);  
	glVertex2f(0.25, 0.0);
	glColor3ub(0, 255, 0);  
	glVertex2f(0.5, 0.25);
	glColor3ub(0, 0, 255);  
	glVertex2f(0.75, 0.0);
	glVertex2f(0.5, -0.25);

	glEnd();

	// Penggunaan : GL_QUADS (kotak dalam kotak)
	glLineWidth(4.0f);
	
	glBegin(GL_QUADS);

	glColor3ub(77,27,123);
	glVertex2f(-0.4, -0.2);  
	glColor3ub(103,56,136);
    glVertex2f(0.0, -0.2);   
    glColor3ub(199,157,215);
    glVertex2f(0.0, 0.2);    
    glColor3ub(239,79,145);
    glVertex2f(-0.4, 0.2);   
	
	glColor3ub(154, 208, 194);
	glVertex2f(-0.3, -0.1);
	glColor3ub(135, 206, 250);
	glVertex2f(-0.1, -0.1);
	glColor3ub(239,79,145);
	glVertex2f(-0.1, 0.1);
	glColor3ub(199,157,215);
	glVertex2f(-0.3, 0.1);
	
	
	glEnd();
	
	//Penggunaan : GL_QUAD_STRIP (Amplop)
	glBegin(GL_QUAD_STRIP);
	
	glColor3ub(255,89,143);
	glVertex3f(0.0, -0.70, 0.3);
	glVertex3f(0.0, -0.40, 0.3);
	
	glColor3ub(103,56,136);
	glVertex3f(0.3, -0.70, 0.0);
	glVertex3f(0.3, -0.40, 0.0);
	glColor3ub(0, 0, 255);
	glVertex3f(0.0, -0.40, 0.0);
	glVertex3f(0.0, -0.70, 0.0);
	
	
	glEnd();
	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Soal no 2");
    glutDisplayFunc(Tugas1);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 

/*Nama : Rania 
 *NIM : 24060122120013 
 *Lab : C2 
 *Nama File : Kubus Watermelon.cpp
 *Tanggal : 21 Februari 2024
 *Deskripsi : Menampilkan susunan kubus bertingkat yang membentuk sepotong buah semangka*/

#include <gl/glut.h>

void kubus(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	
	glColor3ub(255, 204, 255); 
    glRectf(-1.0, -1.0, 1.0, 1.0);
    
    glColor3ub(100, 180, 100); 
    glVertex2f(0.2, -0.6);    
    glVertex2f(0.2, -0.7);    
    glVertex2f(-0.3, -0.7);    
    glVertex2f(-0.3, -0.6);   
	 
    glColor3ub(100, 180, 100); 
    glVertex2f(0.4, -0.5);    
    glVertex2f(0.4, -0.6);    
    glVertex2f(-0.5, -0.6);    
    glVertex2f(-0.5, -0.5);  
	
	glColor3ub(100, 180, 100); 
    glVertex2f(-0.3, -0.4);   
    glVertex2f(-0.3, -0.5);    
    glVertex2f(-0.6, -0.5);    
    glVertex2f(-0.6, -0.4);   
    
    glColor3ub(100, 180, 100); 
    glVertex2f(0.5, -0.4);   
    glVertex2f(0.5, -0.5);    
    glVertex2f(0.2, -0.5);    
    glVertex2f(0.2, -0.4);   
    
    glColor3ub(140, 255, 140);
    glVertex2f(0.2, -0.4);    
    glVertex2f(0.2, -0.5);    
    glVertex2f(-0.3, -0.5);    
    glVertex2f(-0.3, -0.4);  
    
    glColor3ub(140, 255, 140); 
    glVertex2f(-0.3, -0.3);   
    glVertex2f(-0.3, -0.4);    
    glVertex2f(-0.6, -0.4);    
    glVertex2f(-0.6, -0.3);   
    
    glColor3ub(140, 255, 140);
    glVertex2f(0.5, -0.3);    
    glVertex2f(0.5, -0.4);    
    glVertex2f(0.2, -0.4);    
    glVertex2f(0.2, -0.3); 
	
	glColor3ub(255, 99, 71); 
    glVertex2f(0.2, -0.3);    
    glVertex2f(0.2, -0.4);    
    glVertex2f(-0.3, -0.4);    
    glVertex2f(-0.3, -0.3); 
	
	glColor3ub(255, 99, 71); 
    glVertex2f(-0.3, -0.2);    
    glVertex2f(-0.3, -0.3);    
    glVertex2f(-0.6, -0.3);    
    glVertex2f(-0.6, -0.2);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.2, -0.2);    
    glVertex2f(0.2, -0.3);    
    glVertex2f(-0.2, -0.3);    
    glVertex2f(-0.2, -0.2); 
    
    glColor3ub(255, 99, 71); 
    glVertex2f(-0.2, -0.2);    
    glVertex2f(-0.2, -0.3);    
    glVertex2f(-0.3, -0.3);    
    glVertex2f(-0.3, -0.2); 
    
    glColor3ub(0, 0, 0); 
    glVertex2f(-0.1, -0.2);    
    glVertex2f(-0.1, -0.3);    
    glVertex2f(-0.2, -0.3);    
    glVertex2f(-0.2, -0.2); 
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.2, -0.1);    
    glVertex2f(0.2, -0.2);    
    glVertex2f(-0.3, -0.2);    
    glVertex2f(-0.3, -0.1); 
    
    glColor3ub(0, 0, 0); 
    glVertex2f(-0.3, -0.1);    
    glVertex2f(-0.3, -0.2);    
    glVertex2f(-0.4, -0.2);    
    glVertex2f(-0.4, -0.1);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(-0.4, -0.1);   
    glVertex2f(-0.4, -0.2);    
    glVertex2f(-0.5, -0.2);    
    glVertex2f(-0.5, -0.1); 
    
   	glColor3ub(255, 99, 71); 
    glVertex2f(0.5, -0.2);   
    glVertex2f(0.5, -0.3);    
    glVertex2f(0.2, -0.3);    
    glVertex2f(0.2, -0.2);  
	
	glColor3ub(0, 0, 0); 
    glVertex2f(0.2, -0.1);    
    glVertex2f(0.2, -0.2);    
    glVertex2f(0.3, -0.2);    
    glVertex2f(0.3, -0.1);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.2, -0.1);   
    glVertex2f(0.2, -0.2);    
    glVertex2f(0.4, -0.2);    
    glVertex2f(0.4, -0.1);  
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.1, -0.0);   
    glVertex2f(0.1, -0.1);    
    glVertex2f(0.3, -0.1);    
    glVertex2f(0.3, -0.0);  
    
    glColor3ub(0, 0, 0); 
    glVertex2f(0.1, -0.0);    
    glVertex2f(0.1, -0.1);    
    glVertex2f(0.0, -0.1);    
    glVertex2f(0.0, -0.0); 
    
	glColor3ub(255, 99, 71); 
    glVertex2f(0.0, -0.0);   
    glVertex2f(0.0, -0.1);    
    glVertex2f(-0.4, -0.1);    
    glVertex2f(-0.4, -0.0);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(-0.2, 0.0);   
    glVertex2f(-0.2, 0.1);    
    glVertex2f(-0.3, 0.1);    
    glVertex2f(-0.3, 0.0);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(-0.2, 0.0);   
    glVertex2f(-0.2, 0.1);    
    glVertex2f(-0.3, 0.1);    
    glVertex2f(-0.3, 0.0);   
    
    glColor3ub(0, 0, 0); 
    glVertex2f(-0.1, 0.0);   
    glVertex2f(-0.1, 0.1);    
    glVertex2f(-0.2, 0.1);    
    glVertex2f(-0.2, 0.0);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.2, 0.0);   
    glVertex2f(0.2, 0.1);    
    glVertex2f(-0.1, 0.1);    
    glVertex2f(-0.1, 0.0);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.1, 0.1);   
    glVertex2f(0.1, 0.2);    
    glVertex2f(-0.2, 0.2);    
    glVertex2f(-0.2, 0.1);   
    
    glColor3ub(255, 99, 71); 
    glVertex2f(0.0, 0.2);   
    glVertex2f(0.0, 0.3);    
    glVertex2f(-0.1, 0.3);    
    glVertex2f(-0.1, 0.2);   
    
    
glEnd();
glFlush();

}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Watermelon!");
    glutDisplayFunc(kubus);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 

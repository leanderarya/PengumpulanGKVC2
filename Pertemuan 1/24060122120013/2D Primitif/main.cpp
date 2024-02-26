/*Nama : Rania 
 *NIM : 24060122120013 
 *Lab : C2 
 *Nama File : 2D Primitif.cpp
 *Tanggal : 21 Februari 2024
 *Deskripsi : Menampilkan berbagai bentuk geometris 2D yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
			  GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.*/

#include <gl/glut.h>

void geometris (void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //fungsi : GL_LINE_STRIP
    glLineWidth(7.0f); 
    glBegin(GL_LINE_STRIP);

	glColor3ub(170, 255, 170); 
    glVertex2f(-0.93, 0.7);
    
    glColor3ub(173, 216, 230); 
    glVertex2f(-0.9, 0.4);

    glColor3ub(255, 182, 193); 
    glVertex2f(-0.87, 0.7);

    glColor3ub(255, 255, 153); 
    glVertex2f(-0.84, 0.4);

    glColor3ub(221, 160, 221); 
    glVertex2f(-0.81, 0.7);

    glColor3ub(48, 175, 88); 
    glVertex2f(-0.78, 0.4);

    glColor3ub(255, 192, 203); 
    glVertex2f(-0.75, 0.7);

    glEnd();
    
    //fungsi : GL_LINE_LOOP
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);
	
	glColor3ub(230, 230, 250);
	glVertex2f(-0.96, 0.35);
	 
	glColor3ub(189, 252, 201);
	glVertex2f(-0.88, 0.07); 
	
	glColor3ub(135, 206, 250);
	glVertex2f(-0.86, 0.17); 
	
	glColor3ub(255, 215, 180);
	glVertex2f(-0.80, 0.20); 
	
	glEnd();

	
    //fungsi : GL_TRIANGLE_FAN
    glLineWidth(4.0f); 
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204); 
	glVertex2f(-0.5, 0.325); 
	glVertex2f(-0.4, 0.45);  
	glColor3ub(204, 153, 255);
	glVertex2f(-0.3475, 0.4165); 
	glColor3ub(153, 204, 255);
	glVertex2f(-0.325, 0.3875); 
	glColor3ub(153, 255, 204);
	glVertex2f(-0.303, 0.325);  
	glColor3ub(255, 255, 153);
	glVertex2f(-0.325, 0.2625); 
	glColor3ub(255, 204, 153);
	glVertex2f(-0.375, 0.2);  
	glColor3ub(255, 153, 153);
	glVertex2f(-0.5, 0.2);  
	glEnd();

 	//fungsi : GL_TRIANGLE_STRIP
	glLineWidth(3.0f);
	glBegin(GL_TRIANGLE_STRIP);

	glColor3ub(255, 182, 193); 
	glVertex2f(-0.95, -0.55);
	glVertex2f(-0.75, -0.55);
	glVertex2f(-0.75, -0.35);

	glColor3ub(152, 251, 152); 
	glVertex2f(-0.95, -0.35);
	glVertex2f(-0.75, -0.35);
	glVertex2f(-0.85, -0.25);

	glColor3ub(173, 216, 230); 
	glVertex2f(-0.95, -0.35);
	glVertex2f(-0.85, -0.25);
	glVertex2f(-0.95, -0.15);

	glColor3ub(255, 255, 224); 
	glVertex2f(-0.75, -0.35);
	glVertex2f(-0.85, -0.25);
	glVertex2f(-0.75, -0.15);

	glColor3ub(221, 160, 221); 
	glVertex2f(-0.75, -0.15);
	glVertex2f(-0.85, -0.25);
	glVertex2f(-0.95, -0.15);

	glColor3ub(224, 255, 255); 
	glVertex2f(-0.75, -0.15);
	glVertex2f(-0.95, -0.15);
	glVertex2f(-0.85, -0.05);

	glEnd();

	//fungsi : GL_QUADS
	glLineWidth(4.0f);
	glBegin(GL_QUADS);

	glColor3ub(255, 182, 193);
	glVertex2f(-0.6, -0.3);
	glColor3ub(152, 251, 152); 
	glVertex2f(-0.45, -0.05);
	glColor3ub(173, 216, 230); 
	glVertex2f(-0.2, -0.05);
	glColor3ub(255, 218, 185); 
	glVertex2f(-0.35, -0.3);

	glEnd();
	
	//fungsi : GL_QUAD_STRIP
	glBegin(GL_QUAD_STRIP);

	float y = -0.3; 
	glColor3ub(255, 182, 193); 
	glVertex2f(-0.2, y);

	glColor3ub(176, 224, 230); 
	glVertex2f(-0.05, y + 0.25);

	glColor3ub(255, 228, 181); 
	glVertex2f(0.2, y + 0.25);

	glColor3ub(255, 192, 203); 
	glVertex2f(0.05, y);

	glColor3ub(255, 105, 180); 
	glVertex2f(0.25, y);
	
	glColor3ub(127, 255, 212); 
	glVertex2f(0.4, y + 0.25);
	
	glColor3ub(255, 250, 205); 
	glVertex2f(0.65, y + 0.25);
	
	glColor3ub(244, 164, 96); 
	glVertex2f(0.5, y);

	glEnd();
	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("2D Primitif");
    glutDisplayFunc(geometris);
    glClearColor(3.0f,1.0f,4.0f,9.0f);
    glutMainLoop();
    return 0;
}


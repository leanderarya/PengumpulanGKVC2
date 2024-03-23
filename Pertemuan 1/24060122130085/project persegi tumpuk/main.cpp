#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < 6; ++i) {
    glPushMatrix(); 
	glTranslatef(0.0f, 0.2f * i, 0.0f); 

        
		if (i == 0)
            glColor3f(1.0f, 0.5f, 0.0f); 
        else if (i == 1)
            glColor3f(0.0f, 0.5f, 0.5f); 
        else if (i == 2)
            glColor3f(0.5f, 0.0f, 0.5f); 
        else if (i == 3)
            glColor3f(0.25f, 0.25f, 1.0f); 
        else if (i == 4)
        	glColor3f(0.7f, 0.1f, 0.0f);
        else 
            glColor3f(0.25f, 1.0f, 0.25f); 

        glBegin(GL_QUADS); 
        glVertex2f(-0.2f, -0.2f); 
        glVertex2f(0.2f, -0.2f);  
        glVertex2f(0.2f, 0.2f);   
        glVertex2f(-0.2f, 0.2f); 
        glEnd();

        glPopMatrix(); 
    }

    glFlush();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600); 
    glutCreateWindow("Persegi Tumpuk");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


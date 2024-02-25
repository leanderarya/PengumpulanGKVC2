#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    
    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0); // Hijau
    glVertex2f(-0.2, -0.7);
    glVertex2f(0.0, -0.7);
    glVertex2f(0.0, -0.5);
    glVertex2f(-0.2, -0.5);
    glEnd();
    
    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0); // Merah
    glVertex2f(-0.4, -0.9);
    glVertex2f(-0.2, -0.9);
    glVertex2f(-0.2, -0.7);
    glVertex2f(-0.4, -0.7);
    glEnd();
    
    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0); // Biru
    glVertex2f(0.1, -0.7);
    glVertex2f(0.3, -0.7);
    glVertex2f(0.3, -0.5);
    glVertex2f(0.1, -0.5);
    glEnd();
    
    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0); // Kuning
    glVertex2f(0.3, -0.9);
    glVertex2f(0.5, -0.9);
    glVertex2f(0.5, -0.7);
    glVertex2f(0.3, -0.7);
    glEnd();
    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Set color to red
    glVertex2f(0.05, -0.3);    // Vertex 1 (top)
    glColor3f(0.0, 1.0, 0.0); // Set color to green
    glVertex2f(-0.2, -0.5);  // Vertex 2 (bottom-left)
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glVertex2f(0.3, -0.5);   // Vertex 3 (bottom-right)
    glEnd();
    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Set color to red
    glVertex2f(0.05, -0.7);    // Vertex 1 (top)
    glColor3f(0.0, 1.0, 0.0); // Set color to green
    glVertex2f(-0.2, -0.9);  // Vertex 2 (bottom-left)
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glVertex2f(0.3, -0.9);   // Vertex 3 (bottom-right)
    glEnd();
    
    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 0.4, 0.7); // Pink
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.3, 0.3);
    glVertex2f(-0.4, 0.4);
 	glVertex2f(-0.4, 0.5);
 	glVertex2f(-0.3, 0.6);
    glVertex2f(-0.2, 0.6);
    glVertex2f(-0.1, 0.6);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.1, 0.6);
 	glVertex2f(0.2, 0.6);
 	glVertex2f(0.3, 0.6);
 	glVertex2f(0.4, 0.5);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.1, 0.1);
 	glVertex2f(0.0, 0.0);
    glEnd();
    
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Primitives");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

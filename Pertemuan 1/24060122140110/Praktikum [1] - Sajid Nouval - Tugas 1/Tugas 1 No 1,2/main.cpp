#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //points
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.8, 0.9);
    glEnd();
    
    //lines
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.5, 0.9);
    glVertex2f(-0.2, 0.9);
    glEnd();
    
    //line strip
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.0, 0.9);
    glVertex2f(0.0, 0.6);
    glVertex2f(0.3, 0.8);
    glEnd();
    
    //line loop
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.4, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.9, 0.3);
    glVertex2f(0.4, 0.3);
    glEnd();
    
    //triangle fan
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 1.0);
    glVertex2f(-0.9, 0.5);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.6, 0.3);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.7, 0.1);
    glVertex2f(-0.8, 0.0);
    glEnd();
    
    //triangle strip
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.2, 0.7);
    glVertex2f(-0.3, -0.9);
    glVertex2f(-0.7, -0.3);
    glEnd();
    
    //quads
    glBegin(GL_QUADS);
    glColor3f(0.5, 1.0, 0.0);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.3, 0.5);
    glVertex2f(0.3, 0.1);
    glVertex2f(-0.1, 0.2);
    glEnd();
    
    //quad strip
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.5, 0.0, 0.5);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.7, -0.5);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.7, 0.2);
    glEnd();
    
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

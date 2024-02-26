#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    
    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.8, -0.5);
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.7, -0.3);
    glEnd();

    // GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.3, -0.3);
    glEnd();

    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.3, -0.5);
    glVertex2f(0.2, -0.3);
    glVertex2f(0.1, -0.3);
    glEnd();

    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.7, -0.5);
    glVertex2f(0.6, -0.3);
    glVertex2f(0.5, -0.3);
    glEnd();

    // GL_QUADS
    glBegin(GL_QUADS);
    glVertex2f(-0.8, 0.3);
    glVertex2f(-0.6, 0.3);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.8, 0.5);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.4, 0.3);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.3, 0.5);
    glVertex2f(-0.1, 0.5);
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
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


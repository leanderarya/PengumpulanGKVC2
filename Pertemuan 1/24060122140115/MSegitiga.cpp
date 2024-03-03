#include <GL/glut.h>
#include <stdlib.h>
//Nama : Muhammad Fikri Firdaus
//NIM : 24060122140115
//Lab : GKV C2



void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_LINE_STRIP
    glColor3f(1.0, 0.0, 0.0); // Merah
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.4, 0.8);
    glVertex2f(-0.2, 0.6);
    glVertex2f(0.0, 0.8);
    glEnd();

    // GL_LINE_LOOP
    glColor3f(0.0, 1.0, 0.0); // Hijau
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.2, 0.8);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.6, 0.8);
    glVertex2f(0.8, 0.6);
    glVertex2f(1.0, 0.8);
    glEnd();

    // GL_TRIANGLE_FAN
    glColor3f(0.0, 0.0, 1.0); // Biru
    glBegin(GL_TRIANGLE_FAN);
//    glVertex2f(-0.8, -0.2);
    glVertex2f(-0.6, -0.4);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.2, -0.4);
    glVertex2f(0.0, -0.2);
    glEnd();

    // GL_TRIANGLE_STRIP
    glColor3f(1.0, 1.0, 0.0); // Kuning
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.8, -0.4);
    glEnd();

    // GL_QUADS
    glColor3f(1.0, 0.0, 1.0); // Magenta
    glBegin(GL_QUADS);
    glVertex2f(-0.8, -0.8);
    glVertex2f(-0.6, -1.0);
    glVertex2f(-0.4, -0.8);
    glVertex2f(-0.2, -1.0);
    glEnd();

    // GL_QUAD_STRIP
    glColor3f(0.5, 0.5, 0.5); // Abu-abu
    glBegin(GL_QUAD_STRIP);
    glVertex2f(0.2, -0.8);
    glVertex2f(0.4, -1.0);
    glVertex2f(0.6, -0.8);
    glVertex2f(0.8, -1.0);
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Warna background putih
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Koordinat dalam rentang -1 hingga 1
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

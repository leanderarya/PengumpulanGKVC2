// Nama File : Tes 2
// Nama : Ayyub Al Anshor
// Tanggal : Rabu, 21 Februari 2024
// Lab : C2 / GKV

#include <GL/glut.h>

void bentuk() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Menggambar titik
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.2, 0.2);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.2, 0.2);
    glEnd();
    
    // Menggambar garis
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.6, 0.4);
    glVertex2f(0.6, 0.4);
    glEnd();
    
        // Menggambar garis 2
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.6, -0.75);
    glEnd();
    
        // Menggambar garis 3
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.4, -0.75);
    glVertex2f(0.6, -0.75);
    glEnd();
    
            // Menggambar garis 4
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.6, -0.75);
    glEnd();

            // Menggambar garis 4
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.060, 0.1);
    glVertex2f(-0.075, 0.1);
    glEnd();
	    
    // Menggambar garis strip
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.3, -0.4);
    glVertex2f(-0.0, -0.6);
    glVertex2f(0.3, -0.4);
    glEnd();
    
    // Menggambar loop garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-0.4, 0.3); //atas pojok kiri
    glVertex2f(-0.4, -0.1); //bawah pojok kiri
    glVertex2f(-0.1, -0.1); //bawah pojok kanan
    glVertex2f(-0.1, 0.3); //atas pojok kanan
    glEnd();
    
     // Menggambar loop garis 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(0.085, 0.3); //atas pojok kiri
    glVertex2f(0.085, -0.1); //bawah pojok kiri
    glVertex2f(0.390, -0.1); //bawah pojok kanan
    glVertex2f(0.390, 0.3); //atas pojok kanan
    glEnd();
    
    // Menggambar triangle fan
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.98, 0.96, 0.90);
    glVertex2f(-0.1, -0.3);
    glVertex2f(0.1, -0.3);
    glVertex2f(0.080, -0.1);
    glVertex2f(-0.080, -0.1);
    glEnd();
    
    // Menggambar triangle strip
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex2f(-0.5, 0.9);
    glVertex2f(0.2, 0.9);
    glVertex2f(-0.3, 0.4);
    glVertex2f(-0.4, 0.4);
    glEnd();
    
    // Menggambar quads
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.475, -0.2);
    glVertex2f(-0.475, -0.3);
    glVertex2f(-0.25, -0.3);
    glVertex2f(-0.25, -0.2);
    glEnd();
    
    // Menggambar quad strip
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.475, -0.2);
    glVertex2f(0.475, -0.3);
    glVertex2f(0.25, -0.3);
    glVertex2f(0.25, -0.2);
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
    glutInitWindowSize(640, 480);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(bentuk);
    glutMainLoop();
    return 0;
}


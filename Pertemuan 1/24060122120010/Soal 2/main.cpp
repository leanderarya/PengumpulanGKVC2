/*
Nama : Muhammad Luthfan Lazuardi
NIM : 24060122120010
Tanggal : 21-04-2024
Deskripsi : Selain membuat titik menggunakan GL_POINT, garis menggunakan GL_LINES, buatlah program yang 
			memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, 
			dan GL_QUAD_STRIP. 
*/

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Titik GL_POINTS
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0); //titik merah
    glVertex2f(-0.9, 0.9);
    glColor3f(0.0, 1.0, 0.0); //titik hijau
    glVertex2f(-0.6, 0.9);
    glColor3f(0.0, 0.0, 1.0); //titik biru
    glVertex2f(-0.75, 0.6);
    glEnd();
    
    // Garis GL_LINES
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0); //garis merah
    glVertex2f(-0.3, 0.9);
    glVertex2f(-0.1, 0.9);
    glColor3f(0.0, 1.0, 0.0); //garis hijau
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.2, 0.6);
    glEnd();
    
    // Garis Strip GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.0); //Strip Kuning
    glVertex2f(0.3, 0.9);
    glVertex2f(0.1, 0.7);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.1, 0.5);
    glEnd();
    
    //loop garis GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.6, 0.9); //A
    glVertex2f(0.7, 0.9); //B
    glVertex2f(0.8, 0.8); //C
    glVertex2f(0.7, 0.6); //D
    glVertex2f(0.6, 0.6); //E
    glVertex2f(0.5, 0.8); //F
    glEnd();
    
    //Triangle Fan GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.8, 0.2);
    glVertex2f(-0.8, -0.1);
    glVertex2f(-0.7, -0.1);
    glVertex2f(-0.6, 0.1);
    glVertex2f(-0.6, 0.2);
    glVertex2f(-0.7, 0.3);    
    glEnd();
    
    //Triangle Strip GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.0, 1.0, 0.5);
    glVertex2f(-0.3, 0.1);
    glVertex2f(-0.2, 0.4);
    glVertex2f(-0.1, 0.1);
    glVertex2f(0.1, 0.4);
    glVertex2f(0.2, 0.1);
    glVertex2f(0.3, 0.4);
    glEnd();
    
    //Quads GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.3); //orange
    glVertex2f(0.5, 0.2);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.8, 0.4);
    glVertex2f(0.8, 0.2);
    glEnd();
    
    //Quad Strip GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0, 1.0, 1.5); //cyan
    glVertex2f(-0.6, -0.6);
    glVertex2f(-0.6, -0.4);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.4, -0.3);
    glVertex2f(-0.2, -0.7);
    glVertex2f(-0.2, -0.3);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.1, -0.4);
    glEnd(); 
    
    glFlush();
}

void initial() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("BENTUK-BENTUK");
    initial();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

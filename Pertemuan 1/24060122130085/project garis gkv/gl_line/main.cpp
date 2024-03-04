#include <GL/glut.h>

void GarisStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(8.0f);
    glBegin(GL_LINE_STRIP); 
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.25, -0.25);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.25, 0.25);
    glVertex2f(-0.25, 0.25);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Garis Strip");
    glutDisplayFunc(GarisStrip);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}



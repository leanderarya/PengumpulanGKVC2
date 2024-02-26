#include <GL/glut.h>

void GarisLoop(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(8.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.5f, 0.5f);
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
    glutCreateWindow("Membuat Garis Loop");
    glutDisplayFunc(GarisLoop);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}


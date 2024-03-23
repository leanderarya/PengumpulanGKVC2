#include <GL/glut.h>

void drawRectangle(float sizeX, float sizeY) {
    // Atas
    glBegin(GL_QUADS);
    glVertex3f(-sizeX, sizeY, 0.0);
    glVertex3f(sizeX, sizeY, 0.0);
    glVertex3f(sizeX, -sizeY, 0.0);
    glVertex3f(-sizeX, -sizeY, 0.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Draw 5 stair-like rectangles
    float sizeX = 0.5f;
    float sizeY = 0.1f;
    for (int i = 0; i < 5; ++i) {
        glColor3f(0.3f + i * 0.1f, 0.5f - i * 0.1f, 0.7f + i * 0.1f);
        drawRectangle(sizeX, sizeY);
        glTranslatef(0.0f, 0.15f, 0.0f); // Geser ke atas untuk segiempat berikutnya
        sizeX -= 0.1f; // Kurangi ukuran X untuk segiempat berikutnya
        sizeY += 0.03f; // Tambah ukuran Y untuk segiempat berikutnya
    }

    glFlush();
    glutSwapBuffers();
}

void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Menggunakan proyeksi ortografik 2D
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Stacked Rectangles");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


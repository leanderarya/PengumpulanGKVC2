#include <GL/glut.h>

GLfloat carPosX = 0.0;
GLfloat carAngle = 0.0;

void drawCar() {
    // Trapesium
    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_POLYGON);
    glVertex2f(-0.6, -0.2);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(-0.4, 0.2);
    glEnd();

    // Persegi Panjang
    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_POLYGON);
    glVertex2f(-0.6, -0.4);
    glVertex2f(0.6, -0.4);
    glVertex2f(0.6, -0.2);
    glVertex2f(-0.6, -0.2);
    glEnd();

    // Kaca Mobil
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.4, 0.0);
    glVertex2f(0.4, 0.0);
    glVertex2f(0.35, 0.2);
    glVertex2f(-0.35, 0.2);
    glEnd();

    // Spion
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_POLYGON);
    glVertex2f(-0.55, 0.0);
    glVertex2f(-0.5, 0.0);
    glVertex2f(-0.5, 0.1);
    glVertex2f(-0.55, 0.1);
    glEnd();

    // Lampu Depan
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.6, -0.2);
    glVertex2f(-0.55, -0.2);
    glVertex2f(-0.55, -0.1);
    glVertex2f(-0.6, -0.1);
    glEnd();

    // Lampu Belakang
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.55, -0.2);
    glVertex2f(0.55, -0.1);
    glVertex2f(0.6, -0.1);
    glEnd();

    // Ban
    glColor3f(0.1, 0.1, 0.1);
    glPushMatrix();
    glTranslatef(-0.4, -0.35, 0.0);
    glutSolidTorus(0.04, 0.1, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4, -0.35, 0.0);
    glutSolidTorus(0.04, 0.1, 20, 20);
    glPopMatrix();

    // Bagian Tengah Ban
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(-0.4, -0.35, 0.0);
    glutSolidTorus(0.02, 0.07, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4, -0.35, 0.0);
    glutSolidTorus(0.02, 0.07, 20, 20);
    glPopMatrix();

    // Garis di Tengah Mobil
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.2);
    glVertex2f(0.0, 0.2);
    glEnd();
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(carPosX, 0.0, 0.0);
    glRotatef(carAngle, 0.0, 0.0, 1.0);
    drawCar();
    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_LEFT:
            carPosX -= 0.1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_RIGHT:
            carPosX += 0.1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_UP:
            carAngle += 5.0;
            glutPostRedisplay();
            break;
        case GLUT_KEY_DOWN:
            carAngle -= 5.0;
            glutPostRedisplay();
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Car");

    init();
    glutDisplayFunc(drawScene);
    glutSpecialFunc(specialKeys);

    glutMainLoop();
    return 0;
}


#include <GL/glut.h>

static int shoulder = 0, elbow = 0, palm = 0, thumb = 0, index_finger = 0, middle_finger = 0, ring_finger = 0, pinky_finger = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    // Adding palm and fingers
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)palm, 0.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 1.0, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    // Thumb
    glPushMatrix();
    glTranslatef(0.6, 0.5, 0.0);
    glRotatef((GLfloat)thumb, 1.0, 0.0, 0.0);
    glScalef(0.5, 0.5, 2.0); // Scale down thumb size
    glutWireCube(1.0);
    glPopMatrix();
    // Index finger
    glPushMatrix();
    glTranslatef(0.8, 0.3, 0.0);
    glRotatef((GLfloat)index_finger, 1.0, 0.0, 0.0);
    glScalef(0.5, 0.5, 2.0); // Scale down index finger size
    glutWireCube(1.0);
    glPopMatrix();
    // Middle finger
    glPushMatrix();
    glTranslatef(0.8, 0.0, 0.0);
    glRotatef((GLfloat)middle_finger, 1.0, 0.0, 0.0);
    glScalef(0.5, 0.5, 2.0); // Scale down middle finger size
    glutWireCube(1.0);
    glPopMatrix();
    // Ring finger
    glPushMatrix();
    glTranslatef(0.8, -0.3, 0.0);
    glRotatef((GLfloat)ring_finger, 1.0, 0.0, 0.0);
    glScalef(0.5, 0.5, 2.0); // Scale down ring finger size
    glutWireCube(1.0);
    glPopMatrix();
    // Pinky finger
    glPushMatrix();
    glTranslatef(0.8, -0.6, 0.0);
    glRotatef((GLfloat)pinky_finger, 1.0, 0.0, 0.0);
    glScalef(0.5, 0.5, 2.0); // Scale down pinky finger size
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 's':
        shoulder = (shoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case 'S':
        shoulder = (shoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case 'e':
        elbow = (elbow + 5) % 360;
        glutPostRedisplay();
        break;
    case 'E':
        elbow = (elbow - 5) % 360;
        glutPostRedisplay();
        break;
    case 'p':
        palm = (palm + 5) % 360;
        glutPostRedisplay();
        break;
    case 'P':
        palm = (palm - 5) % 360;
        glutPostRedisplay();
        break;
    case 't':
        thumb = (thumb + 5) % 360;
        glutPostRedisplay();
        break;
    case 'T':
        thumb = (thumb - 5) % 360;
        glutPostRedisplay();
        break;
    case 'i':
        index_finger = (index_finger + 5) % 360;
        glutPostRedisplay();
        break;
    case 'I':
        index_finger = (index_finger - 5) % 360;
        glutPostRedisplay();
        break;
    case 'm':
        middle_finger = (middle_finger + 5) % 360;
        glutPostRedisplay();
        break;
    case 'M':
        middle_finger = (middle_finger - 5) % 360;
        glutPostRedisplay();
        break;
    case 'r':
        ring_finger = (ring_finger + 5) % 360;
        glutPostRedisplay();
        break;
    case 'R':
        ring_finger = (ring_finger - 5) % 360;
        glutPostRedisplay();
        break;
    case 'k':
        pinky_finger = (pinky_finger + 5) % 360;
        glutPostRedisplay();
        break;
    case 'K':
        pinky_finger = (pinky_finger - 5) % 360;
        glutPostRedisplay();
        break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}


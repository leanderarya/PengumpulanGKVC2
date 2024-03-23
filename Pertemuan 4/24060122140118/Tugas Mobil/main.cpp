#include <GL/glut.h>
#include <math.h>

#define DEG2RAD 3.14159 / 180.0

void initOpenGL() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawText(const char* text, float x, float y) {
    glRasterPos2f(x, y);
    for (const char* c = text; *c != '\0'; c++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *c);
    }
}

#define DEG2RAD 3.14159/180.0

void drawCircle3D(float radius, float x, float y, float z) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float degInRad = i * DEG2RAD;
        glVertex3f(cos(degInRad) * radius + x, sin(degInRad) * radius + y, z);
    }
    glEnd();
}

void drawWheel(float x, float y, float z) {
    glColor3f(0.0f, 0.0f, 0.0f); // Black wheels
    drawCircle3D(0.1f, x, y, z);
    drawCircle3D(0.1f, x, y, z - 0.05f); // Draw front and back faces
    
    // Connect front and back faces
    glColor3f(0.5f, 0.5f, 0.5f); // Grey rims
    glBegin(GL_QUAD_STRIP);
    for (int i = 0; i <= 360; i += 40) { // Not a full circle to keep it simple
        float degInRad = i * DEG2RAD;
        glVertex3f(cos(degInRad) * 0.1f + x, sin(degInRad) * 0.1f + y, z);
        glVertex3f(cos(degInRad) * 0.1f + x, sin(degInRad) * 0.1f + y, z - 0.05f);
    }
    glEnd();
}

void Mobil3D() {
    // Note: You will need to adjust the coordinates and possibly the transformations to fit your model size and view.

    // Main car body
    glColor3f(0.0, 0.0, 1.0); // Blue car body
    glBegin(GL_QUADS);
    // Bottom
    glVertex3f(-0.5f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.0f, -0.3f);
    glVertex3f(-0.5f, 0.0f, -0.3f);
    // Top
    glVertex3f(-0.4f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.2f, -0.3f);
    glVertex3f(-0.4f, 0.2f, -0.3f);
    // Front
    glVertex3f(-0.5f, 0.0f, 0.0f);
    glVertex3f(-0.4f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.2f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    // Back
    glVertex3f(-0.5f, 0.0f, -0.3f);
    glVertex3f(-0.4f, 0.2f, -0.3f);
    glVertex3f(0.4f, 0.2f, -0.3f);
    glVertex3f(0.5f, 0.0f, -0.3f);
    glEnd();

    // Car Roof
    glColor3f(0.0, 0.0, 0.8); // Darker blue roof
    glBegin(GL_QUADS);
    glVertex3f(-0.3f, 0.2f, 0.0f);
    glVertex3f(0.3f, 0.2f, 0.0f);
    glVertex3f(0.2f, 0.3f, -0.15f);
    glVertex3f(-0.2f, 0.3f, -0.15f);
    glEnd();

    // Wheels
    drawWheel(-0.35f, 0.0f, -0.05f);
    drawWheel(0.35f, 0.0f, -0.05f);
    drawWheel(-0.35f, 0.0f, -0.25f);
    drawWheel(0.35f, 0.0f, -0.25f);
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set the camera position and orientation
    gluLookAt(0.5, 0.5, 1.0,   // Eye position
              0.5, 0.5, 0.0,   // Look-at position
              0.0, 1.0, 0.0);  // Up direction


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Chick Dinoco Car");
    glEnable(GL_DEPTH_TEST);
    initOpenGL();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


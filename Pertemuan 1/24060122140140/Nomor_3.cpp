#include <windows.h>
#include <GL/glut.h>
#include <cmath>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

  
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D( 0.0, 500.0, 500.0,0.0 );
     glPointSize(5.0);
    glBegin(GL_POINTS);

    int X = 250;
    int Y = 250;
    int radius = 100;

     for (int y = Y - radius; y <= Y + radius; y += 5) {
        for (int x = X - radius; x <= X + radius; x += 5) {
         
            double distance = sqrt((x - X) * (x - X) + (y - Y) * (y - Y));
         
            if (distance <= radius) {
                glVertex2i(x, y);
            }
        }
    }



    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Nomor 3, niatnya bikin chest minecraft tapi gk jadi");

    glClearColor(0.8f,0.1f,0.2f,1.0f);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
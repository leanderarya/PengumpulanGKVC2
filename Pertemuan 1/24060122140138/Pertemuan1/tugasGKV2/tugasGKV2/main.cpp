// Nama : Adzkiya Qarina Salsabila
// NIM : 24060121140138
// Deskripsi : Membuat gambar bunga mawar dari tumpukan segi empat

#include <GlUT/glut.h>

void rose(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0.0f, 0.78f, 0.0f);
    glRectf(-0.1,0.1,0.0,0.0);
    glRectf(-0.1,0.2,0.1,0.1);
    glRectf(-0.2,0.2,-0.1,0.1);
    glRectf(-0.3,0.3,0.2,0.2);
    glRectf(-0.4,0.4,0.3,0.3);
    glRectf(-0.1,0.2,0.0,-0.5);
    
    glColor3f(0.8f, 0.0f, 0.0);
    glRectf(-0.2,0.4,0.1,0.3);
    glRectf(-0.2,0.1,0.1,0.1);
    glRectf(-0.4,0.5,0.3,0.4);
    glRectf(-0.4,0.6,0.3,0.5);
    glRectf(-0.4,0.7,0.3,0.6);
    glRectf(-0.4,0.8,0.3,0.7);
    glRectf(-0.2,0.9,0.1,0.75);
    glRectf(-0.1,0.95,0.0,0.8);

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mawar");
    glutDisplayFunc(rose);
    glClearColor(0.0f, 0.0f, 0.f, 0.0f);
    glutMainLoop();
    
    return 0;
}


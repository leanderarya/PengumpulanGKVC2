//// Nama : Adzkiya Qarina Salsabila
//// NIM : 24060121140138
//// Deskripsi : Membuat Fungsi-fungsi Glut

#include <GLUT/glut.h>

void shapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(0.5, 0.3, 0.0);
    glVertex3f(0.7, 0.3, 0.0);
    glEnd();
    
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.3, 0.5, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.1, 0.4, 0.0);
    glEnd();
    
    glLineWidth(2.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.3f, 0.5f, 0.9f);
    glVertex3f(0.4, 0.2, 0.0);
    glVertex3f(0.4, 0.0, 0.0);
    glColor3f(0.1f, 0.2f, 0.5f);
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.6, 0.2, 0.0);
    glEnd();
    
    glLineWidth(2.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.3f, 0.8f, 0.3f);
    glVertex3f(0.6, -0.1, 0.0);
    glVertex3f(0.6, -0.3, 0.0);
    glColor3f(0.0f, 0.3f, 0.0f);
    glVertex3f(0.8, -0.2, 0.0);
    glVertex3f(0.8, -0.3, 0.0);
    glEnd();
    
    glLineWidth(2.0f);
    glBegin(GL_QUADS);
    glColor3f(9.0f, 0.0f, 0.0f);
    glVertex3f(0.8, 0.9, 0.0);
    glVertex3f(0.8, 0.6, 0.0);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex3f(0.6, 0.6, 0.0);
    glVertex3f(0.6, 0.9, 0.0);
    glEnd();
    
    glLineWidth(2.0f);
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.3, -0.4, 0.0);
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.3, 0.1, 0.0);
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(0.3, -0.5, 0.0);
    glColor3f(0.4f, 0.4f, 0.0f);
    glVertex3f(-0.6, 0.7, 0.0);
    glColor3f(0.2f, 0.2f, 0.0f);
    glVertex3f(-0.0, -0.4, 0.0);
    glVertex3f(-0.2, -0.0, 0.0);
    glEnd();

    glFlush();
}

    int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1080,720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas2-shapes");
    glutDisplayFunc(shapes);
    glClearColor(0.1f, 0.1f, 0.1f, 0.1f);
    glutMainLoop();
        
    return 0;
}


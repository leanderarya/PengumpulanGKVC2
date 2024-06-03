/*
 * Nama : Muhammad Luthfan Lazuardi
 * NIM : 24060122120010
 * Tanggal : 19 Maret 2024
 */

#include <math.h>
#include <stdio.h>
#include <GL/glut.h>

double rx = 0.0;
double ry = 0.0;
float l[] = { 0.0, 80.0, 0.0 }; // koordinat sumber cahaya
float n[] = { 0.0, -40.0, 0.0 };
float e[] = { 0.0, -60.0, 0.0 };

void help();

void drawObject()
{
    // SILAHKAN PILIH 
    //glutWireTeapot(30);
    //glutSolidTeapot(30.0); 
    //glutWireTorus(15, 30, 20, 20);
    //glutSolidTorus(15, 30, 20, 20); 
    //glutWireSphere(30,20,20);
    //glutSolidSphere(30, 20, 20);
    //glutWireCube(30);
    //glutSolidCube (30); 
    //glutWireCone(30, 40, 20, 20);
    glutSolidCone(30, 40, 20, 20);
}

// membuat proyeksi bayangan
void glShadowProjection(float * l, float * e, float * n)
{
    float d, c;
    float mat[16];
    d = n[0]*l[0] + n[1]*l[1] + n[2]*l[2];
    c = e[0]*n[0] + e[1]*n[1] + e[2]*n[2] - d;
    mat[0] = l[0]*n[0]+c; // membuat matrik. OpenGL menggunakan kolom matrik
    mat[4] = n[1]*l[0];
    mat[8] = n[2]*l[0];
    mat[12] = -l[0]*c-l[0]*d;
    mat[1] = n[0]*l[1]; 
    mat[5] = l[1]*n[1]+c;
    mat[9] = n[2]*l[1];
    mat[13] = -l[1]*c-l[1]*d;
    mat[2] = n[0]*l[2]; 
    mat[6] = n[1]*l[2];
    mat[10] = l[2]*n[2]+c;
    mat[14] = -l[2]*c-l[2]*d;
    mat[3] = n[0]; 
    mat[7] = n[1];
    mat[11] = n[2];
    mat[15] = -d;
    glMultMatrixf(mat); // kalikan matrik
}

void render()
{
    glClearColor(0.0,0.6,0.9,0.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLightfv(GL_LIGHT0, GL_POSITION, l);
    glDisable(GL_CULL_FACE);
    
    // Gambar lantai
    glColor3f(0.824, 0.706, 0.549); // Warna lantai
    glBegin(GL_QUADS);
    glNormal3f(0.0,1.0,0.0);
    glVertex3f(-1300.0,e[1]-0.1, 1300.0);
    glVertex3f( 1300.0,e[1]-0.1, 1300.0);
    glVertex3f( 1300.0,e[1]-0.1,-1300.0);
    glVertex3f(-1300.0,e[1]-0.1,-1300.0);
    glEnd();
    
    // Gambar objek tanpa bayangan
    glEnable(GL_LIGHTING);
    glColor3f(1.0, 0.0, 0.0); // Warna objek
    glPushMatrix();
    glRotatef(ry,0,1,0);
    glRotatef(rx,1,0,0);
    drawObject();
    glPopMatrix();
    
    // Matikan pencahayaan saat menggambar bayangan
    glDisable(GL_LIGHTING);
    
    // Gambar bayangan
    glPushMatrix();
    glShadowProjection(l,e,n); 
    glRotatef(ry,0,1,0);
    glRotatef(rx,1,0,0);
    glColor3f(0.4,0.4,0.4); // Warna bayangan
    drawObject();
    glPopMatrix();
    
    glutSwapBuffers();
}

void keypress(unsigned char c, int a, int b)
{
    if ( c==27 ) exit(0);
    else if ( c=='s' ) l[1]-=5.0;
    else if ( c=='w' ) l[1]+=5.0;
    else if ( c=='a' ) l[0]-=5.0;
    else if ( c=='d' ) l[0]+=5.0;
    else if ( c=='q' ) l[2]-=5.0;
    else if ( c=='e' ) l[2]+=5.0;
    else if ( c=='h' ) help();
}

void help()
{
    printf("proyeksi contoh bayangan sebuah obyek teapot\n");
}

void idle()
{
    rx+=0.02;
    ry+=0.02;
    render();
}

void resize(int w, int h)
{
    glViewport(0, 0, w, h);
}

int main(int argc, char * argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(300,30);
    glutCreateWindow("Shadow Jutsu");
    glutReshapeFunc(resize);
    glutReshapeWindow(600,600);
    glutKeyboardFunc(keypress);
    glutDisplayFunc(render);
    glutIdleFunc(idle);
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_TEXTURE_2D);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0f, 1.0, 1.0, 400.0);
    // Reset koordinat sebelum dimodifikasi/diubah
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -150.0);
    glutMainLoop();
    return 0;
}


#include <GL/glut.h>

/*
Nama	: Muhammad Farhan Hafiz ALkirami
NIM		: 24060122140043
Tanggal	: 20 Februari 2024
*/

void GabunganFungsi(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Segitiga dengan GL_LINE_STRIP
    glColor3f(1.0, 1.0, 1.0);  // Putih
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.8, -0.2);
        glVertex2f(-0.6, 0.2);
        glVertex2f(-0.4, -0.2);
        glVertex2f(-0.8, -0.2);  // Kembali ke titik awal untuk menutup segitiga
    glEnd();

    // Persegi dengan GL_LINE_LOOP
    glColor3f(1.0, 0.0, 0.0);  // Merah
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.2, -0.2);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.2, 0.2);
        glVertex2f(-0.2, 0.2);
    glEnd();

    // Persegi panjang dengan GL_QUADS
    glColor3f(0.0, 0.0, 1.0);  // Biru
    glBegin(GL_QUADS);
        glVertex2f(0.4, -0.2);
        glVertex2f(0.8, -0.2);
        glVertex2f(0.8, 0.2);
        glVertex2f(0.4, 0.2);
    glEnd();

    // Persegi panjang dengan GL_QUAD_STRIP
    glColor3f(0.0, 1.0, 0.0);  // Hijau
    glBegin(GL_QUAD_STRIP);
        glVertex2f(-0.8, 0.6);
        glVertex2f(-0.6, 0.6);
        glVertex2f(-0.8, 0.8);
        glVertex2f(-0.6, 0.8);
        glVertex2f(-0.4, 0.8);
        glVertex2f(-0.6, 0.6);  // Titik terakhir untuk menutup persegi panjang
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Gabungan Fungsi");
    glutDisplayFunc(GabunganFungsi);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}


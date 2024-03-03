#include <GL/glut.h>

void displayDirt() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    
    //Layer 1
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.4f, -0.4f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.3f, -0.5f);
    
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
	glVertex2f(0.5f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, -0.4f); //
    glVertex2f(0.6f, -0.5f);
    
	//Warna Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(-0.5f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, -0.4f); //
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(-0.3f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, -0.4f); //
    glVertex2f(-0.2f, -0.5f);
    
    glVertex2f(-0.0f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.0f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, -0.4f); //
    glVertex2f(0.1f, -0.5f);
    glVertex2f(0.1f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, -0.4f); //
    glVertex2f(0.2f, -0.5f);
    
    glVertex2f(0.4f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, -0.4f); //
    glVertex2f(0.5f, -0.5f);
	
	//Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(-0.6f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
	glVertex2f(-0.6f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas)
	glVertex2f(-0.5f, -0.4f); // (Kotak Kanan Atas, Kotak Kanan Atas)
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.7f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
	glVertex2f(-0.7f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas)
	glVertex2f(-0.6f, -0.4f); // (Kotak Kanan Atas, Kotak Kanan Atas)
	glVertex2f(-0.6f, -0.5f);
	
	glVertex2f(-0.2f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, -0.4f); //
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, -0.4f); //
    glVertex2f(-0.0f, -0.5f);
    
    glVertex2f(0.2f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, -0.4f); //
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, -0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, -0.4f); //
    glVertex2f(0.4f, -0.5f);
    
    
	//Layer 2
	//Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(0.5f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, -0.3f); //
    glVertex2f(0.6f, -0.4f);
    glVertex2f(0.4f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, -0.3f); //
    glVertex2f(0.5f, -0.4f);
    glVertex2f(0.3f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, -0.3f); //
    glVertex2f(0.4f, -0.4f);
    glVertex2f(0.0f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, -0.3f); //
    glVertex2f(0.1f, -0.4f);
    glVertex2f(-0.2f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, -0.3f); //
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.3f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, -0.3f); //
    glVertex2f(-0.2f, -0.4f);
    
    //Warna Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(0.2f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, -0.3f); //
    glVertex2f(0.3f, -0.4f);
    glVertex2f(0.1f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, -0.3f); //
    glVertex2f(0.2f, -0.4f);
    glVertex2f(-0.1f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.0f, -0.3f); //
    glVertex2f(0.0f, -0.4f);
    glVertex2f(-0.7f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, -0.3f); //
    glVertex2f(-0.6f, -0.4f);
    
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.4f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, -0.3f); //
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.6f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, -0.3f); //
    glVertex2f(-0.5f, -0.4f);
    
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(-0.5f, -0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, -0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, -0.3f); //
    glVertex2f(-0.4f, -0.4f);
    
    //Layer 3
    
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(-0.7f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, -0.2f); //
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.6f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, -0.2f); //
    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.5f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, -0.2f); //
    glVertex2f(-0.4f, -0.3f);
    glVertex2f(0.4f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, -0.2f); //
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.5f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, -0.2f); //
    glVertex2f(0.6f, -0.3f);
    
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(-0.4f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, -0.2f); //
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.1f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, -0.2f); //
    glVertex2f(-0.0f, -0.3f);
    glVertex2f(0.1f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, -0.2f); //
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.3f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, -0.2f); //
    glVertex2f(0.4f, -0.3f);
    
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(-0.3f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, -0.2f); //
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.2f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, -0.2f); //
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(0.2f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, -0.2f); //
    glVertex2f(0.3f, -0.3f);
    
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.0f, -0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.0f, -0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, -0.2f); //
    glVertex2f(0.1f, -0.3f);
    
    //Layer 4
    
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(0.4f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, -0.1f); //
    glVertex2f(0.5f, -0.2f);
    glVertex2f(-0.6f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, -0.1f); //
    glVertex2f(-0.5f, -0.2f);
    
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(0.5f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, -0.1f); //
    glVertex2f(0.6f, -0.2f);
    glVertex2f(0.3f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, -0.1f); //
    glVertex2f(0.4f, -0.2f);
    glVertex2f(-0.2f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, -0.1f); //
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.4f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, -0.1f); //
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.5f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, -0.1f); //
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.7f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, -0.1f); //
    glVertex2f(-0.6f, -0.2f);
    
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(0.2f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, -0.1f); //
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.1f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, -0.1f); //
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.0f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, -0.1f); //
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.3f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, -0.1f); //
    glVertex2f(-0.2f, -0.2f);
    
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(-0.1f, -0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, -0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.0f, -0.1f); //
    glVertex2f(0.0f, -0.2f);
    
    //Layer 5
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(-0.5f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, -0.0f); //
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(0.3f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, -0.0f); //
    glVertex2f(0.4f, -0.1f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(-0.7f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, -0.0f); //
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.6f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, -0.0f); //
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(0.2f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, -0.0f); //
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.4f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, -0.0f); //
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.5f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, -0.0f); //
    glVertex2f(0.6f, -0.1f);
	//Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(-0.4f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, -0.0f); //
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.3f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, -0.0f); //
    glVertex2f(-0.2f, -0.1f);
    glVertex2f(-0.1f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, -0.0f); //
    glVertex2f(-0.0f, -0.1f);
    glVertex2f(-0.0f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.0f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, -0.0f); //
    glVertex2f(0.1f, -0.1f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.2f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, -0.0f); //
    glVertex2f(-0.1f, -0.1f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(0.1f, -0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, -0.0f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, -0.0f); //
    glVertex2f(0.2f, -0.1f);
    //Layer 6
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(0.4f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.1f); //
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.3f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.1f); //
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.2f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.1f); //
    glVertex2f(0.3f, 0.0f);
    glVertex2f(-0.7f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.1f); //
    glVertex2f(-0.6f, 0.0f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(0.5f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.1f); //
    glVertex2f(0.6f, 0.0f);
    glVertex2f(0.0f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.1f); //
    glVertex2f(0.1f, 0.0f);
    glVertex2f(-0.6f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.1f); //
    glVertex2f(-0.5f, 0.0f);
    
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(0.1f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.1f); //
    glVertex2f(0.2f, 0.0f);
    glVertex2f(-0.1f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.1f); //
    glVertex2f(-0.0f, 0.0f);
    glVertex2f(-0.2f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.1f); //
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.3f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.1f); //
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.5f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.1f); //
    glVertex2f(-0.4f, 0.0f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.4f, 0.0f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.1f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.1f); //
    glVertex2f(-0.3f, 0.0f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);

    //Layer 7
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(-0.6f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.2f); //
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.5f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.2f); //
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.2f); //
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.4f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.2f); //
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.5f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.2f); //
    glVertex2f(0.6f, 0.1f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(0.3f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.2f); //
    glVertex2f(0.4f, 0.1f);
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(-0.7f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.2f); //
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.3f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.2f); //
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.2f); //
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.1f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.2f); //
    glVertex2f(-0.0f, 0.1f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(0.0f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.2f); //
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.2f); //
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.2f, 0.1f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.2f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.2f); //
    glVertex2f(0.3f, 0.1f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);
    
    
    //Layer 8
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    glVertex2f(0.5f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.3f); //
    glVertex2f(0.6f, 0.2f);
    glVertex2f(-0.1f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.3f); //
    glVertex2f(-0.0f, 0.2f);
    glVertex2f(-0.2f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.3f); //
    glVertex2f(-0.1f, 0.2f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(0.1f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.3f); //
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.0f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.3f); //
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.0f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.0f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.3f); //
    glVertex2f(-0.0f, 0.2f);
    glVertex2f(-0.4f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.3f); //
    glVertex2f(-0.3f, 0.2f);
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(0.4f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.3f); //
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.3f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.3f); //
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.2f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.3f); //
    glVertex2f(0.3f, 0.2f);
    glVertex2f(-0.3f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.3f); //
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.7f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.3f); //
    glVertex2f(-0.6f, 0.2f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.6f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.3f); //
    glVertex2f(-0.5f, 0.2f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    glVertex2f(-0.5f, 0.2f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.3f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.3f); //
    glVertex2f(-0.4f, 0.2f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);
    
    //Layer 9
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);

    glVertex2f(0.5f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.4f); //
    glVertex2f(0.6f, 0.3f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
	glVertex2f(-0.3f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.4f); //
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.4f); //
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(0.3f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.4f); //
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.4f); //
    glVertex2f(0.4f, 0.3f);
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(-0.1f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.0f, 0.4f); //
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.4f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.4f); //
    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.2f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.4f); //
    glVertex2f(0.3f, 0.3f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.7f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.4f); //
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.6f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.4f); //
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.5f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.4f); //
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(0.1f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.4f); //
    glVertex2f(0.2f, 0.3f);
    glVertex2f(-0.0f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.0f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.4f); //
    glVertex2f(0.1f, 0.3f);
    glVertex2f(-0.4f, 0.3f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.4f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.4f); //
    glVertex2f(-0.3f, 0.3f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.2f);
    //Hijau Sedang Tua
    glColor3f(0.3f, 0.6f, 0.3f);
    
    //Layer 10
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    glVertex2f(-0.7f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.5f); //
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(0.4f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.5f); //
    glVertex2f(0.5f, 0.4f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(0.5f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.5f); //
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.2f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.5f); //
    glVertex2f(0.3f, 0.4f);
    glVertex2f(-0.3f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.5f); //
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.5f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.5f); //
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(0.3f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.5f); //
    glVertex2f(0.4f, 0.4f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);
    glVertex2f(-0.6f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.5f); //
    glVertex2f(-0.5f, 0.4f);
    
    //Hijau Sedang Tua
    glColor3f(0.3f, 0.7f, 0.3f);
    glVertex2f(-0.2f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.5f); //
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.4f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.5f); //
    glVertex2f(-0.3f, 0.4f);
    
    //Hijau Sangat Muda
    glColor3f(0.5f, 0.7f, 0.5f);
    glVertex2f(0.1f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.5f); //
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.0f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.5f); //
    glVertex2f(0.1f, 0.4f);
    glVertex2f(-0.1f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.5f); //
    glVertex2f(-0.0f, 0.4f);
    
    
    //Layer 11
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.6f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.6f); //
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.2f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.5f); //
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, 0.4f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.5f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.5f); //
    glVertex2f(-0.0f, 0.4f);
    glVertex2f(-0.1f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.6f); //
    glVertex2f(-0.0f, 0.5f);
    glVertex2f(-0.3f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.6f); //
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(0.4f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.6f); //
    glVertex2f(0.5f, 0.5f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);
    
    //Hijau Sedang Tua
    glColor3f(0.3f, 0.7f, 0.3f);
    glVertex2f(-0.4f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.6f); //
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.2f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.6f); //
    glVertex2f(-0.1f, 0.5f);
    glVertex2f(0.0f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.6f); //
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.1f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.6f); //
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.5f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.6f); //
    glVertex2f(0.6f, 0.5f);
    //Hijau Sangat Muda
    glColor3f(0.5f, 0.7f, 0.5f);
    glVertex2f(-0.7f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.6f); //
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.5f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.6f); //
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(0.2f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.6f); //
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.3f, 0.5f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.6f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.6f); //
    glVertex2f(0.4f, 0.5f);
    
    //Layer 12
    //Coklat Tua
    glColor3f(0.63f, 0.47f, 0.31f);
    //Coklat Muda
	glColor3f(0.71f, 0.55f, 0.39f);
    //Coklat Tua Lebih Muda
    glColor3f(0.6f, 0.4f, 0.2f);
    //Coklat Sangat Tua
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.3f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.7f); //
    glVertex2f(-0.2f, 0.6f);
    //Warna Abu Muda
    glColor3f(0.68f, 0.68f, 0.68f);
    //Abu Lebih Tua
    glColor3f(0.4f, 0.4f, 0.4f);
    
    //Hijau Sedang Tua
    glColor3f(0.4f, 0.7f, 0.3f);
    glVertex2f(0.5f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.7f); //
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.4f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.7f); //
    glVertex2f(0.5f, 0.6f);
    glVertex2f(0.3f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.7f); //
    glVertex2f(0.4f, 0.6f);
    glVertex2f(-0.6f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.7f); //
    glVertex2f(-0.5f, 0.6f);
    
    //Hijau Sedang Tua Terang
    glColor3f(0.4f, 0.7f, 0.2f);
    glVertex2f(-0.1f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.0f, 0.7f); //
    glVertex2f(0.0f, 0.6f);
    glVertex2f(-0.2f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.7f); //
    glVertex2f(-0.1f, 0.6f);
    glVertex2f(-0.4f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.7f); //
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.5f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.7f); //
    glVertex2f(-0.4f, 0.6f);
    //Hijau Sangat Muda
    glColor3f(0.5f, 0.7f, 0.5f);
    glVertex2f(0.2f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.7f); //
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.1f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.7f); //
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.0f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.7f); //
    glVertex2f(0.1f, 0.6f);
    glVertex2f(-0.7f, 0.6f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.7f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.7f); //
    glVertex2f(-0.6f, 0.6f);
    
    //Layer 13
    //Hijau Sangat Muda
    glColor3f(0.5f, 0.7f, 0.5f);
    glVertex2f(-0.2f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.2f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.1f, 0.8f); //
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.1f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.1f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.0f, 0.8f); //
    glVertex2f(-0.0f, 0.7f);
    glVertex2f(0.5f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.5f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.6f, 0.8f); //
    glVertex2f(0.6f, 0.7f);
    
    
    //Hijau Sedang Tua Terang
    glColor3f(0.4f, 0.7f, 0.2f);
    glVertex2f(-0.4f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.4f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.3f, 0.8f); //
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.3f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.3f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.2f, 0.8f); //
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(0.2f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.2f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.3f, 0.8f); //
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.3f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.3f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.4f, 0.8f); //
    glVertex2f(0.4f, 0.7f);
    glVertex2f(0.4f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.4f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.5f, 0.8f); //
    glVertex2f(0.5f, 0.7f);
    //Hijau Sedang Tua
    glColor3f(0.4f, 0.7f, 0.3f);
    glVertex2f(-0.7f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.7f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.6f, 0.8f); //
    glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.6f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.6f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.5f, 0.8f); //
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.5f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(-0.5f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(-0.4f, 0.8f); //
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(0.0f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.0f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.1f, 0.8f); //
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.1f, 0.7f); // (Kotak Kiri Bawah, Kotak Kanan Bawah)
    glVertex2f(0.1f, 0.8f); // (Kotak Kiri Atas, Kotak Kiri Atas
    glVertex2f(0.2f, 0.8f); //
    glVertex2f(0.2f, 0.7f);
    
    glEnd();
    glFlush();
}

void init() {
    glClearColor(0.8f, 0.8f, 0.8f, 1.0f);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Minecraft Dirt Blocks");
    glutDisplayFunc(displayDirt);
    init();
    glutMainLoop();
    return 0;
}


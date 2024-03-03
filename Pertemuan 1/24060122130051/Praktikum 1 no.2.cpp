//Nama : Miriam Stefani Abigail Hutapea
//NIM : 24060122130051


# include <gl/glut.h>

void garisStrip(){
	glColor3f(2.0f,1.0f, 1.0f);
	glLineWidth(1.0);
	glBegin (GL_LINE_STRIP);
	glVertex2f(-1,0);
	glVertex2f(-2,2);
	glVertex2f(-2,2);
	glVertex2f(-3,0);
    glEnd();
}

void garisBiasa(){
	glBegin(GL_LINE_STRIP);
	glVertex2f(-2,2);
	glVertex2f(-2,3.5);
}

void lineLoop(){
	glBegin(GL_LINE_LOOP);
	glVertex2f(-2, 2);
    glVertex2f(0, 2);
    glVertex2f(1.5,0);
    glVertex2f(-1, 0);
    glEnd();
}

void triangleFan() {
    glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f,1.0f, 0.0f);
    glVertex2f(-1.5, 3.5);
	glVertex2f(-1.2,3.1);
    glVertex2f(-1.5, 2.7);
	glVertex2f(-2,2.7);
	glVertex2f(-2,3.5);   
    glEnd();
}

void triangleStrip() {
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-1, 0);
    glVertex2f(0.2,-1.5);
    glVertex2f(-1,-3);
    glEnd();
}

void quads() {
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f, 1.0f);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(-1, -3);
    glVertex2f(1, -3);
    glEnd();
}

void quadStrip(){
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.0f, 1.0f,1.0f);
	glVertex2f(-2.8,-3);
	glVertex2f(-2.8,0.4);
    glVertex2f(-1,-3);
    glVertex2f(-2,2);
    glVertex2f(-1.0,0);
    glVertex2f(-1,0);
    glEnd();
}

void Jendela(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glFlush();
}

void render(){
	garisStrip();
	garisBiasa();
	lineLoop();
	triangleFan();
	triangleStrip();
	quads();
	quadStrip();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit (&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE |GLUT_RGBA);
	glutCreateWindow("soal praktikum no. 2");
	glutDisplayFunc(Jendela);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glOrtho(-4, 4, -5, 5, -4, 6);
	glutDisplayFunc(render);
	glutMainLoop();
	return 0;
}

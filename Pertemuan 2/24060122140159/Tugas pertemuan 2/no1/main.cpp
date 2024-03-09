#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	// Lingkaran utama
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glColor3f(0.2f, 0.5f, 0.9f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.0f);
	int numSegments = 100;
	float angle;
	for (int i = 0; i <= numSegments; i++) {
		angle = 2.0f * 3.1415926f * float(i) / float(numSegments);
		float x = 0.25f * cosf(angle);
		float y = 0.25f * sinf(angle);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	// Bayangan lingkaran
	glPushMatrix();
	glTranslatef(0.0f, -0.1f, 0.0f);
	glColor3f(0.2f, 0.2f, 0.2f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.0f); 
	for (int i = 0; i <= numSegments; i++) {
		angle = 2.0f * 3.1415926f * float(i) / float(numSegments);
		float x = 0.25f * cosf(angle); 
		float y = 0.25f * sinf(angle);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Menarik Lingkaran");
	glutDisplayFunc(RenderScene);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
	glutMainLoop();
	return 0;
}


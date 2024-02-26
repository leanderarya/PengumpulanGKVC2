//Nama : Baron Albana Achmad
//NIM : 24060122130073
//Lab : GKV C2
//Tanggal : 24 Februari 2024
//Deskripsi : Membuat Gambar dengan fungsi yang ada pada glut

#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	
	//Coloring Red
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-10,70,30,180);
	glRectf(-50,-50,60,170);
	glRectf(-40,-60,130,30);
	glRectf(130,-30,150,30);
	glRectf(-80,-50,60,160);
	glRectf(-200,30,140,60);
	glRectf(-180,70,140,-30);
	glRectf(-170,-30,-150,-60);
	glRectf(-120,-30,-100,-80);
	glRectf(-100,150,70,-40);
	glRectf(-150,110,120,60);
	glRectf(120,70,130,80);
	glRectf(70,120,110,80);
	glRectf(-120,140,100,80);
	glRectf(-130,110,-100,120);
	glRectf(110,-70,100,-60);
	glRectf(100,-90,90,-70);
	glRectf(70,-60,40,-80);
	glRectf(40,-80,50,-90);
	glRectf(80,-90,90,-100);
	
	
	//Coloring mata
	glColor3f(1.0f,1.0f,1.0f);
	glRectf(-130,70,-190,10);
	glRectf(-130,50,-120,40);
	glRectf(-40,90,30,30);
	glRectf(-50,70,-40,40);	
	
	
	//Coloring bibir
	glColor3f(1.0f,0.9f,0.4f);
	glRectf(-110,-40,20,30);
	glRectf(70,-20,20,30);
	glRectf(-110,-20,-130,30);
	glRectf(-150,-10,-130,20);
	glRectf(-110,20,-50,60);
	glRectf(-130,30,-30,40);
	//Outline Kepala
	glColor3f(0.0f,0.0f,0.0f);
	glRectf(-10,180,30,190);
	glRectf(-40,170,-10,180);
	glRectf(-40,160,-80,170);
	glRectf(-80,150,-100,160);
	glRectf(-100,140,-110,150);
	glRectf(-110,130,-120,140);
	glRectf(-120,120,-130,130);
	glRectf(-130,110,-140,120);
	glRectf(-140,110,-150,90);
	glRectf(-150,90,-160,80);

	glRectf(30,170,50,180);
	glRectf(50,170,60,160);
	glRectf(60,160,70,150);
	glRectf(70,150,90,140);
	glRectf(90,140,100,130);
	glRectf(100,130,110,120);
	glRectf(110,120,120,100);
	glRectf(120,100,130,80);
	glRectf(130,80,140,60);
	glRectf(140,60,150,30);
	glRectf(150,30,160,0);
	glRectf(140,0,150,-30);
	glRectf(130,-30,140,-40);
	glRectf(120,-40,130,-60);
	glRectf(100,-40,110,-60);
	glRectf(80,-40,90,-60);
	glRectf(110,-60,120,-70);
	glRectf(90,-60,100,-70);
	glRectf(70,-60,80,-70);
	glRectf(60,-70,70,-80);
	glRectf(50,-80,60,-90);
	glRectf(40,-90,50,-100);
	glRectf(30,-90,40,-70);
	glRectf(40,-70,50,-40);
	glRectf(40,-50,20,-60);
	glRectf(20,-60,-40,-70);
	glRectf(-40,-60,-70,-50);
	glRectf(-70,-50,-90,-40);
	glRectf(-90,-30,-100,-100);
	glRectf(-80,-90,-90,-100);
	glRectf(-100,-80,-110,-90);
	glRectf(-110,-80,-120,-60);
	glRectf(-120,-60,-130,-30);
	glRectf(-130,-30,-140,0);
	glRectf(-140,-10,-150,-60);
	glRectf(-150,-60,-160,-70);
	glRectf(-160,-40,-170,-60);
	glRectf(-170,-40,-180,40);
	glRectf(100,-70,110,-90);
	glRectf(80,-70,90,-90);
	glRectf(90,-90,100,-100);
	glRectf(80,-100,90,-110);
	glRectf(80,-90,70,-100);
	glRectf(20,-20,30,-30);
	glRectf(0,-30,20,-40);
	glRectf(-40,-40,0,-50);
	
	//Outline Mata & Hidung
	glRectf(-180,80,-140,70);
	glRectf(-140,70,-130,60);
	glRectf(-130,60,-110,50);
	glRectf(-110,60,-70,70);
	glRectf(-70,50,-50,60);
	glRectf(-60,60,-50,70);
	glRectf(-50,70,-40,80);
	glRectf(-40,80,-30,90);
	glRectf(-30,90,30,100);
	glRectf(30,80,40,90);
	glRectf(40,80,50,50);
	glRectf(30,40,40,50);
	glRectf(-20,30,50,40);
	glRectf(50,20,70,30);
	glRectf(70,20,80,-10);
	glRectf(30,-10,70,-20);
	
	glRectf(50,-20,60,-30);
	glRectf(40,-30,50,-40);
	
	//Garis Bibir
	glRectf(30,-10,20,0);
	glRectf(-20,0,20,10);
	glRectf(-10,20,0,10);
	glRectf(-20,0,-50,-10);
	glRectf(-50,-10,-60,-20);
	glRectf(-60,-20,-80,-30);
	glRectf(-80,-20,-100,-10);
	glRectf(-100,-10,-110,-0);
	glRectf(-110,0,-120,10);
	glRectf(-120,10,-140,20);
	
	glRectf(-30,20,-20,30);
	glRectf(-40,30,-30,40);
	glRectf(-50,40,-40,50);
	
	//Pupil kanan
	glRectf(-30,40,30,50);
	glRectf(-20,50,40,60);
	glRectf(-10,60,40,80);
	
	//Pupil kiri
	glRectf(-190,50,-150,20);
	
	
	
	glRectf(-190,60,-180,70);
	glRectf(-200,60,-190,30);
	glRectf(-190,20,-180,30);
	glRectf(-170,30,-160,10);
	glRectf(-160,20,-140,10);
	glRectf(-140,30,-130,20);
	glRectf(-130,40,-120,30);
	glRectf(-120,50,-110,40);
	glRectf(-110,40,-90,30);
	glRectf(-130,-20,-110,-30);
	glRectf(-100,-40,-110,-30);
	glRectf(-160,10,-150,0);
	glRectf(-140,-10,-150,0);
	
	glRectf(0,0,0,0);
	
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("DO YOU NO DE WEY?");
	glutDisplayFunc(display);
	gluOrtho2D(-200,200,-200,200);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}

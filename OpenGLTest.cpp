// OpenGLTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"glut32.lib")
#include<Windows.h>
#include<gl/gl.h>
#include<gl/glu.h>
#include<gl/glut.h>
#include<math.h>
#include <iostream>

using namespace std;

/**
Creates the main window, registers event handlers, and
initializes OpenGL stuff.
*/
void InitGraphics(int argc, char* argv[]);

/**
Sets the logical coordinate system we will use to specify
our drawings.
*/
void SetTransformations();

/**
Handles the paint event. This event is triggered whenever
our displayed graphics are lost or out-of-date.
ALL rendering code should be written here.
*/
void OnDisplay();

void DrawCircle(float x, float y, float radius);

int main(int argc, char* argv[]) {
	InitGraphics(argc, argv);
	return 0;
}


/**
Creates the main window, registers event handlers, and
initializes OpenGL stuff.
Initialization is done once at the start of the program.
Rendering is done each time the window needs redrawing
*/

void InitGraphics(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	//Create an 800x600 window with its top-left corner at pixel (100, 100)
	glutInitWindowPosition(100, 100); //pass (-1, -1) for Window-Manager defaults  glutInitWindowPosition(X, Y);
	glutInitWindowSize(800, 600);  //glutInitWindowSize(width, hight);
	glutCreateWindow("Test");
	//OnDisplay will handle the paint event
	glutDisplayFunc(OnDisplay);
	glutMainLoop(); //Well glutMainLoop is the main function the keeps calling and calling the displaying functions and which also keeps your window actually opened
}
/**
Sets the logical coordinate system we will use to specify
our drawings.
*/
void SetTransformations() {
	//set up the logical coordinate system of the window: [-100, 100] x [-100, 100]
	glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();

//define a 2-D orthographic projection matrix
//parameters: left, right, bottom, top
	gluOrtho2D(-150, 150, -150, 150); //gluOrtho2f(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top)
}
/**
Handles the paint event. This event is triggered whenever
our displayed graphics are lost or out-of-date.
ALL rendering code should be written here.
*/
void OnDisplay() {
	//set the background color to white
	glClearColor(0.309803921568627, 0.309803921568627, 1,0);
	//fill the whole color buffer with the clear color
	glClear(GL_COLOR_BUFFER_BIT);
	SetTransformations();

	//ALL drawing code goes here
	
	// bottom


	// 1

	glColor3f(0.949019607843137, 0.474509803921569, 0);
	glBegin(GL_QUADS);
	glVertex2f(-50, -90);
	glVertex2f(-60, -120);
	glVertex2f(-30, -130);
	glVertex2f(-20, -90);
	glEnd();

	// 2
	
	glColor3f(0.909803921568627, 0.454901960784314, 0);
	glBegin(GL_QUADS);
	glVertex2f(-20, -90);
	glVertex2f(-30, -130);
	glVertex2f(30, -130);
	glVertex2f(20, -90);
	glEnd();

	// 2.1 

	glColor3f(1,1,1);
	glBegin(GL_QUADS);
	glVertex2f(0, -95);
	glVertex2f(15, -110);
	glVertex2f(0, -125);
	glVertex2f(-15, -110);
	glEnd();

	// 2.2
	glBegin(GL_QUADS);
	glVertex2f(-10, -100);
	glVertex2f(10, -100);
	glVertex2f(10, -120);
	glVertex2f(-10, -120);
	glEnd();




	// 3
	glColor3f(0.949019607843137, 0.474509803921569, 0);
	glBegin(GL_QUADS);
	glVertex2f(20, -90);
	glVertex2f(30, -130);
	glVertex2f(60, -120);
	glVertex2f(50, -90);
	glEnd();
	

	// rectangle 

	//1
	glColor3f(1,1,1);
	glBegin(GL_QUADS);
	glVertex2f(20, -90);
	glVertex2f(50, -90);
	glVertex2f(50, -80);
	glVertex2f(20, -80);
	glEnd();

	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(25, -85, 4);
	DrawCircle(35, -85, 4);
	DrawCircle(45, -85, 4);

	//2
	glColor3f(1,1,1);
	glBegin(GL_QUADS);
	glVertex2f(-20, -90);
	glVertex2f(20, -90);
	glVertex2f(20, -80);
	glVertex2f(-20, -80);
	glEnd();

	//3
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(-20, -90);
	glVertex2f(-20, -80);
	glVertex2f(-50, -80);
	glVertex2f(-50, -90);
	glEnd();

	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(-25, -85, 4);
	DrawCircle(-35, -85, 4);
	DrawCircle(-45, -85, 4);

	// body
	// 1
	glColor3f(0.949019607843137, 0.474509803921569, 0);
	glBegin(GL_QUADS);
	glVertex2f(50, -80);
	glVertex2f(70, 60);
	glVertex2f(30,70);
	glVertex2f(20,-80);
	glEnd();

	//1.1.1
	glColor3f(1, 1, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(55, 55);
	glVertex2f(35, 55);
	glVertex2f(35, 25);
	glVertex2f(55, 25);
	glEnd();

	//1.2.1
	glColor3f(1, 1, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(45, 60);
	glVertex2f(60, 40);
	glVertex2f(45, 20);
	glVertex2f(30, 40);
	glEnd();

	//1.3.1
	glColor3f(1, 1, 1);
	DrawCircle(44, 40, 7);
	glColor3f(0.949019607843137, 0.474509803921569, 0);
	DrawCircle(42, 40, 6);


	// --------------

	glColor3f(1, 1, 1);
	glPointSize(10);
	glBegin(GL_POINTS);
	

	glVertex2f(40, 10);
	glVertex2f(40, -20);
	glVertex2f(40, 0);
	glVertex2f(40, -30);
	glVertex2f(40, -60);

	glVertex2f(50, 10);
	glVertex2f(50, -10);
	glVertex2f(50, -20);
	glVertex2f(50, -40);
	glVertex2f(50, -60);
	glVertex2f(50, -50);

	glVertex2f(30, 10);
	glVertex2f(30, -40);
	glVertex2f(30, -50);
	glVertex2f(30, -20);
	glVertex2f(30, -10);
	glVertex2f(30, -60);

	glEnd();

	// --------------
	
	//2
	glColor3f(0.850980392156863, 0.423529411764706, 0);
	glBegin(GL_QUADS);
	glVertex2f(20, -80);
	glVertex2f(30, 70);
	glVertex2f(-30, 70);
	glVertex2f(-20, -80);
	glEnd();

	glColor3f(1, 1, 1);
	DrawCircle(0, 0, 10);
	glColor3f(0.850980392156863, 0.423529411764706, 0);
	DrawCircle(-2, 0, 9);

	//3
	glColor3f(0.949019607843137, 0.474509803921569, 0);
	glBegin(GL_QUADS);
	glVertex2f(-20, -80);
	glVertex2f(-30, 70);
	glVertex2f(-70, 60);
	glVertex2f(-50, -80);
	glEnd();

	//3.2.1
	glColor3f(1, 1, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-55, 55);
	glVertex2f(-35, 55);
	glVertex2f(-35, 25);
	glVertex2f(-55, 25);
	glEnd();

	//3.2.2
	glColor3f(1, 1, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-45, 60);
	glVertex2f(-60, 40);
	glVertex2f(-45, 20);
	glVertex2f(-30, 40);
	glEnd();

	//3.2.3
	glColor3f(1, 1, 1);
	DrawCircle(-44, 40, 7);
	glColor3f(0.949019607843137, 0.474509803921569, 0);
	DrawCircle(-42, 40, 6);

	// --------------

	glColor3f(1, 1, 1);
	glPointSize(10);
	glBegin(GL_POINTS);

	glVertex2f(-40, 10);
	glVertex2f(-40, -20);
	glVertex2f(-40, 0);
	glVertex2f(-40, -30);
	glVertex2f(-40, -60);

	glVertex2f(-50, 10);
	glVertex2f(-50, -10);
	glVertex2f(-50, -20);
	glVertex2f(-50, -40);
	glVertex2f(-50, -60);
	glVertex2f(-50, -50);

	glVertex2f(-30, 10);
	glVertex2f(-30, -40);
	glVertex2f(-30, -50);
	glVertex2f(-30, -20);
	glVertex2f(-30, -10);
	glVertex2f(-30, -60);
	
	glEnd();

	// --------------



	// up body

	//1
	glColor3f(0.909803921568627, 0.454901960784314, 0);
	glBegin(GL_QUADS);
	glVertex2f(70, 60);
	glVertex2f(65, 75);
	glVertex2f(35, 90);
	glVertex2f(30, 70);
	glEnd();

	//2
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	glBegin(GL_QUADS);
	glVertex2f(30, 70);
	glVertex2f(35, 90);
	glVertex2f(-35, 90);
	glVertex2f(-30, 70);
	glEnd();

	// ===========================
	
	//كريم      

	glLineWidth(3);
	glColor3f(1, 1, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(30, 85);
	glVertex2f(15, 85);
	glVertex2f(15, 77);
	glVertex2f(5, 77);
	glEnd();

	DrawCircle(5, 77, 4);
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(5, 78, 4);

	glColor3f(1, 1, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-2, 83);
	glVertex2f(-2, 77);
	glVertex2f(-8, 77);
	glEnd();

	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2f(-2, 73);
	glVertex2f(-5, 73);
	glEnd();

	glColor3f(1, 1, 1);
	DrawCircle(-11, 77, 3);
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(-11, 77, 2);

	glColor3f(1, 1, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-13, 77);
	glVertex2f(-18, 77);
	glVertex2f(-18, 72);
	glEnd();

	// =============================

	//3
	glColor3f(0.909803921568627, 0.454901960784314, 0);
	glBegin(GL_QUADS);
	glVertex2f(-30, 70);
	glVertex2f(-35, 90);
	glVertex2f(-65, 75);
	glVertex2f(-70, 60);
	glEnd();


	// top

	//1
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	glBegin(GL_QUADS);
	glVertex2f(35, 90);
	glVertex2f(25, 110);
	glVertex2f(-25, 110);
	glVertex2f(-35, 90);
	glEnd();


	// رمضان  

	glColor3f(1, 1, 1);
	DrawCircle(22, 98, 5);
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(21, 98.5, 5);

	glColor3f(1, 1, 1);
	DrawCircle(17, 98, 4);
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(17, 98, 3);
	
	glColor3f(1, 1, 1);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(13, 98);
	glVertex2f(6, 98);
	glEnd();
	
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2f(3, 106);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(6, 98);
	glVertex2f(6, 103);
	glVertex2f(0, 103);
	glVertex2f(-4, 98);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-4, 98);
	glVertex2f(-9, 98);
	glVertex2f(-9, 107);
	glEnd();

	glColor3f(1, 1, 1);
	DrawCircle(-18, 100, 5);
	glColor3f(1, 0.341176470588235, 0.0235294117647059);
	DrawCircle(-18, 102, 5);
	
	glColor3f(1, 1, 1);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2f(-18, 103);
	glEnd();

	// top-top
	glBegin(GL_LINE_LOOP);
	glVertex2f(-2, 130);
	glVertex2f(-2, 110);
	glVertex2f(2, 110);
	glVertex2f(2, 130);
	glEnd();
	glColor3f(1, 1, 1);
	DrawCircle(-3, 135, 10);
	glColor3f(0.309803921568627, 0.309803921568627, 1);
	DrawCircle(-5, 136, 9);

	//glBegin(GL_)
	//force previously issued OpenGL commands to begin execution
	glFlush();
}
void DrawCircle(float x, float y, float radius)
{
	int i;
	int lineNum = 100;
	float twoPI = 2 * 3.1452;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y);
	for (i = 0; i <= lineNum; i++) {
		glVertex2f(x + (radius * cos(i * twoPI / lineNum)),y + (radius * sin(i * twoPI / lineNum)));
	}
	glEnd();

	
	
}
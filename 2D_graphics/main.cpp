#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int windowWidth=800;
int windowHeight=500;


//double windowWidth=700;
//double windowHeight=700;
double Txval=0;
double Tyval=0;
double sval=1.5;
double txval=0,txval1=0,txvalC=0,txval1C=0, txvalS=0,txval1S=0,txvalCC=0,txvallCC=0;
bool flagScale=false;

void Quadr1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-78,63);
    glVertex2f(-78,69);
    glVertex2f(-16,69);
    glVertex2f(-16,63);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadr2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-78,62);
    glVertex2f(-78,63);
    glVertex2f(-16,63);
    glVertex2f(-16,62);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadr3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-78,54);
    glVertex2f(-78,62);
    glVertex2f(-16,62);
    glVertex2f(-16,54);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//zebra

void Quadl1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-78,58);
    glVertex2f(-78,58.4);
    glVertex2f(-69,58.4);
    glVertex2f(-69,58);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}
void Quadl2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-63,58);
    glVertex2f(-63,58.4);
    glVertex2f(-55,58.4);
    glVertex2f(-55,58);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadl3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1.00, 1.000, 1.00);
    glVertex2f(-51,58);
    glVertex2f(-51,58.4);
    glVertex2f(-41,58.4);
    glVertex2f(-41,58);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadl4()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-38,58);
    glVertex2f(-38,58.4);
    glVertex2f(-29,58.4);
    glVertex2f(-29,58);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadl5()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-26,58);
    glVertex2f(-26,58.4);
    glVertex2f(-16,58.4);
    glVertex2f(-16,58);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//car

void Quadc1()
{
    // Quad 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-52,56);
    glVertex2f(-52,59);
    glVertex2f(-42,59);
    glVertex2f(-42,56);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.541, 0.169, 0.886);
    glVertex2f(-50,54);
    glVertex2f(-52,56);
    glVertex2f(-42,56);
    glVertex2f(-44,54);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();


     // Quad 1
     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.000, 1.000, 1.000);
    glVertex2f(-50,54);
    glVertex2f(-50,56);
    glVertex2f(-44,56);
    glVertex2f(-44,54);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

    // Quad 1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-50.50,58);
    glVertex2f(-51,59);
    glVertex2f(-50.50,59.50);
    glVertex2f(-49.50,59.50);
    glVertex2f(-49,59);
    glVertex2f(-49.50,58.25);
    glVertex2f(-50,58);
    //glVertex2f(-57,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();



    // Quad 1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-45.50,58);
    glVertex2f(-46,59);
    glVertex2f(-45.50,59.50);
    glVertex2f(-44.50,59.50);

    glVertex2f(-44.0,59.0);
    //glVertex2f(-49,59);
    glVertex2f(-44.50,58.25);
    glVertex2f(-44,59);
    glVertex2f(-44.50,59.50);
    glVertex2f(-45,59);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();

}


void Quadc2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.541, 0.169, 0.886);
    glVertex2f(-50,54);
    glVertex2f(-52,56);
    glVertex2f(-42,56);
    glVertex2f(-44,54);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadc20()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 1.000, 1.000);
    glVertex2f(-50,54);
    glVertex2f(-50,56);
    glVertex2f(-44,56);
    glVertex2f(-44,54);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

// car's wheel

void carw1()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-50.50,58);
    glVertex2f(-51,59);
    glVertex2f(-50.50,59.50);
    glVertex2f(-49.50,59.50);
    glVertex2f(-49,59);
    glVertex2f(-49.50,58.25);
    glVertex2f(-50,58);
    //glVertex2f(-57,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void carw2()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-45.50,58);
    glVertex2f(-46,59);
    glVertex2f(-45.50,59.50);
    glVertex2f(-44.50,59.50);

    glVertex2f(-44.0,59.0);
    //glVertex2f(-49,59);
    glVertex2f(-44.50,58.25);
    glVertex2f(-44,59);
    glVertex2f(-44.50,59.50);
    glVertex2f(-45,59);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}




//end car

void Quadf1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-78,53);
    glVertex2f(-78,54);
    glVertex2f(-16,54);
    glVertex2f(-16,53);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadf2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-78,43);
    glVertex2f(-78,53);
    glVertex2f(-16,53);
    glVertex2f(-16,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Quadf3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.749, 1.000);
    glVertex2f(-78,22);
    glVertex2f(-78,43);
    glVertex2f(-16,43);
    glVertex2f(-16,22);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void poly1()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-78,43);
    glVertex2f(-78,38);
    glVertex2f(-76,35);
    glVertex2f(-74,34);
    glVertex2f(-70,33);
    glVertex2f(-66,33);
    glVertex2f(-62,35);
    glVertex2f(-57,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void poly2()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-58,43);
        glVertex2f(-57,39);
            glVertex2f(-56,37);
    glVertex2f(-54,35);
        glVertex2f(-52,34);
    //glVertex2f(-52,35);
    glVertex2f(-47,33);
    glVertex2f(-44,33);
    glVertex2f(-39,34);
    glVertex2f(-33,37);
    glVertex2f(-30,43);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void poly3()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-31,43);
    glVertex2f(-30,39);
    glVertex2f(-29,37);
    glVertex2f(-26,35);
    glVertex2f(-23,34);
    glVertex2f(-19,33);
    glVertex2f(-18,33);
    glVertex2f(-16,34);
    glVertex2f(-16,43);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//tree

void tree1()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.420, 0.557, 0.137);
    glVertex2f(-74,53);
    glVertex2f(-73,52);
    glVertex2f(-71,51);
    glVertex2f(-71,46);
    glVertex2f(-69,46);
    glVertex2f(-69,51);
    glVertex2f(-68,52);
    glVertex2f(-66,52);
    glVertex2f(-65,53);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void tree2()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-71,48);
    glVertex2f(-73,48);
    glVertex2f(-74,47);
    glVertex2f(-75,45);
    glVertex2f(-75,42);
    glVertex2f(-74,40);
    glVertex2f(-72,39);
    glVertex2f(-69,38);
    glVertex2f(-66,39);
    glVertex2f(-64,41);
    glVertex2f(-63,44);
    glVertex2f(-63,46);
    glVertex2f(-66,48);
    glVertex2f(-69,48);


    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


//house

void house0()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-29,40);
    glVertex2f(-29,53);
    glVertex2f(-16,53);
    glVertex2f(-16,40);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void house0b()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-30,39);
    glVertex2f(-30,40);
    glVertex2f(-21,40);
    glVertex2f(-21,39);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-29,34);
    glVertex2f(-29,40);
    glVertex2f(-22,40);
    glVertex2f(-22,34);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void Htriangle()
{
    glBegin(GL_TRIANGLES);//Denotes the beginning of a group of
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-25,30);
    glVertex2f(-30.0,34.0);
    glVertex2f(-21.0,34.0);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.941, 1.000, 1.000);
    glVertex2f(-27,36);
    glVertex2f(-27,38);
    glVertex2f(-24,38);
    glVertex2f(-24,36);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house3()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.941, 0.973, 1.000);
    glVertex2f(-24,42);
    glVertex2f(-24,45);
    glVertex2f(-17,45);
    glVertex2f(-17,42);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house4()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.941, 1.000, 1.000);
    glVertex2f(-27,47);
    glVertex2f(-27,53);
    glVertex2f(-25,53);
    glVertex2f(-25,47);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//house 2

void house21()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1.000, 0.000, 1.000);
    glVertex2f(-51,40);
    glVertex2f(-51,53);
    glVertex2f(-34,53);
    glVertex2f(-34,40);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void house22()
{
    // Quad 1
    glBegin(GL_POLYGON);
    glColor3f(0.690, 0.769, 0.871);
    glVertex2f(-49,37);
    glVertex2f(-51,40);
    glVertex2f(-34,40);
    glVertex2f(-32,37);


    //glVertex2f(-16,42);
    //glVertex2f(-16,40);
    //glVertex2f(-65,53);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house220(){
    glBegin(GL_POLYGON);
    glColor3f(0.439, 0.502, 0.565);
    glVertex2f(-34,40);
    glVertex2f(-34,53);
    glVertex2f(-32,51);
    glVertex2f(-32,37);

    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void house23()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-45,50);
    glVertex2f(-45,53);
    glVertex2f(-40,53);
    glVertex2f(-40,50);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

//dOOR

void door1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(1,1,0.589);
    glVertex2f(-49,42);
    glVertex2f(-49,44);
    glVertex2f(-45,44);
    glVertex2f(-45,42);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


//flag



void flag1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(-54,42);
    glVertex2f(-54,53);
    glVertex2f(-53,53);
    glVertex2f(-53,42);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void flag2()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-59,42);
    glVertex2f(-59,45);
    glVertex2f(-54,45);
    glVertex2f(-54,42);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}

void flagr(){
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    //glVertex2f(-60,5);
    glVertex2f(-56,42.5);
    glVertex2f(-57,43);
    glVertex2f(-56.5,43.5);
        glVertex2f(-56,44);

            glVertex2f(-55.5,43.5);

                glVertex2f(-55,43);


    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}



//cloud

void cloud1(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    //glVertex2f(-60,5);
    glVertex2f(-62,24);
    glVertex2f(-64,24);
    glVertex2f(-65,25);
        glVertex2f(-65,26);

            glVertex2f(-64,27);

                glVertex2f(-65,28);
                    glVertex2f(-65,29);
                        glVertex2f(-64,30);
                            glVertex2f(-62,30);
                                glVertex2f(-61,29);
                                    glVertex2f(-60,30);
                                        glVertex2f(-59,29);
                                            glVertex2f(-58,27);
                                                glVertex2f(-59,25);
                                                    glVertex2f(-60,24);
                                                        glVertex2f(-63,24);












    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


//small tree

void stree1()
{
    // Quad 1
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-77,40);
    glVertex2f(-77,43);
    glVertex2f(-76.5,43);
    glVertex2f(-76.5,40);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}


void streetri()
{
    glBegin(GL_TRIANGLES);//Denotes the beginning of a group of
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-77.0,38);
    glVertex2f(-77.5,40.0);
    glVertex2f(-76,40.0);
    glEnd(); //Terminates a list of vertices that
    glPopMatrix();
}



//Circle
#define PI 3.1416
#include <math.h>


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0,1.3,1.1);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void drawFilledCircleS(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0,0.3,0.1);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}









void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-90, -5, 80, 10);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glViewport(0, 0 ,windowWidth ,windowHeight);


    glPushMatrix();


    Quadr1();
    Quadr2();
    Quadr3();

    //zebra crossing
    Quadl1();
    Quadl2();
    Quadl3();
    Quadl4();
    Quadl5();

    // car

     glPushMatrix();
    glTranslatef(txval,0,0);
    Quadc1();
    glPopMatrix();





   // Quadc2();
    //Quadc20();

    //carw1();
    //carw2();

    //
    Quadf1();
    Quadf2();
    Quadf3();

    poly1();
    poly2();
    poly3();

    //tree
    tree1();
    tree2();

    //house
    house0();
    house0b();
    house1();
    Htriangle();
    house2();
    house3();
    house4();

    house21();
    house22();
    house220();
    house23();

    // door 1

    door1();

    //flag

    flag1();
    flag2();

    flagr();


   // glPopMatrix();



    //small tree

    stree1();
    streetri();



    //Circle

    //sun
     glPushMatrix();
     glTranslatef(txvalS,0,0);

    drawFilledCircleS(-20,26,4.0);
   glPopMatrix();
   //cloudCircle
    glPushMatrix();
     glTranslatef(txvalCC,0,0);
     drawFilledCircle(-43,28,1.0);
    drawFilledCircle(-44,30,1.5);
     drawFilledCircle(-42,30,1.5);
   glPopMatrix();



    //glPushMatrix();
    glTranslatef(txvalC,0,0);
    cloud1();
    glPopMatrix();


//glTranslatef(Txval,Tyval,0);
    //glScalef(sval, sval,1);
    //Quadc1();

    glFlush();
    glutSwapBuffers();
}



void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

//double sval=1;
//double txval=0,txval1=0;
// bool flagScale=false;





void animate()
{
	if (flagScale == true)
	{
		//txval-= 0.005;
		txval+= 0.2;
		if(txval > 27){
           txval = -20;
			//txval1 = 1;
		}

		txvalC-= 0.01;
		if(txvalC < -14){
           txvalC = 5;
			//txval1 = 1;
		}

		txvalS-= 0.05;
		if(txvalS < -55){
           txvalS = 5;
			//txval1 = 1;
		}

		//cloud circle txvalCC
		 txvalCC-= 0.01;
		if(txvalCC < -35){
           txvalCC = 5;
			//txval1 = 1;
		}

		txvalCC-= 0.01;
		if(txvalCC < -35){
           txvalCC = 5;
			//txval1 = 1;
		}
		txvalCC-= 0.01;
		if(txvalCC < -35){
           txvalCC = 5;
			//txval1 = 1;
		}

	}
	if (flagScale == false)
	{
		txval = 0;
		txval1 = 0;

		txvalC = 0;
		txval1C = 0;

		txvalS = 0;
		txval1S = 0;

		//circle cloud

		txvalCC=0;
		txvallCC=0;

	}

	glutPostRedisplay();
}








int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode

glutInitWindowPosition(100,100);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("Homw-Task");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

//car animation
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);



glutDisplayFunc(display);



glDepthFunc(GL_LEQUAL);    // Set the type of depth-test

glutMainLoop();
return 0;
}


// thanks : https://www3.ntu.edu.sg/home/ehchua/programming/opengl/CG_Examples.html
// https://virtual-graph-paper.com/
//random*102@bhul



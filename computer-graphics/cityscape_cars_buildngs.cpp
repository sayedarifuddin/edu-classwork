//start

#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float car_1_x_axis=-200.0; //x-axis
float car_2_x_axis=200.0;
float car_3_x_axis=800.0;
float building_1_window=0;
float building_2_window=355;
float building_3_window=610;

void init()
{
    glClearColor(0.2f,0.4f,1.0f,0.0f); //background color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1000,0,1000);   //resolution
    glMatrixMode(GL_MODELVIEW);
}

// spinning car wheels
void wheel(int x,int y)

{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+20.5*cos(th),y+20.5*sin(th));
    }
    glEnd();
}

//1st car design

void car1() // going from left to right
{
    glLoadIdentity();
    car_1_x_axis=car_1_x_axis+0.10; //speed
    glTranslated(car_1_x_axis,125,0.0); //(placement of the car)
    glScaled(1.1,1.1,1.1);

    //Hood
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glColor3f(0.95,0.95,0.95);
    glVertex2f(100,160);
    glColor3f(0.85,0.85,0.85);
    glVertex2f(500,160);
    glColor3f(0.75,0.75,0.75);
    glVertex2f(500,100);

    //Parts
    glBegin(GL_POLYGON);
    glColor3f(0.65,0.65,0.65);
    glVertex2f(150,160);
    glColor3f(0.55,0.55,0.55);
    glVertex2f(200,200);
    glColor3f(0.45,0.45,0.45);
    glVertex2f(400,200);
    glColor3f(0.35,0.35,0.35);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);
}

//2nd car design

void car2() // going from right to left
{
    glLoadIdentity();
    car_2_x_axis=car_2_x_axis-0.10; //speed
    glTranslated(car_2_x_axis,-50,0.0); //(placement of the car)
    glScaled(1.2,1.2,1.2);

    //Hood
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glColor3f(0.95,0.95,0.0);
    glVertex2f(100,160);
    glColor3f(0.85,0.85,0.0);
    glVertex2f(450,160);
    glColor3f(0.75,0.75,0.0);
    glVertex2f(450,100);

    //Part
    glBegin(GL_POLYGON);
    glColor3f(0.65,0.65,0.0);
    glVertex2f(150,160);
    glColor3f(0.55,0.55,0.0);
    glVertex2f(200,200);
    glColor3f(0.45,0.45,0.0);
    glVertex2f(400,200);
    glColor3f(0.35,0.35,0.0);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);
}

//3rd car design

void car3() // going from right to left
{
    glLoadIdentity();
    car_3_x_axis=car_3_x_axis-0.10; //speed
    glTranslated(car_3_x_axis,-5,0.0); //(placement of the car)
    glScaled(1.3,1.3,1.3);

    //Hood
    glColor3f(0.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glColor3f(0.0,0.95,0.95);
    glVertex2f(100,160);
    glColor3f(0.0,0.85,0.85);
    glVertex2f(450,160);
    glColor3f(0.0,0.75,0.75);
    glVertex2f(450,100);

    //Part
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.65,0.65);
    glVertex2f(150,160);
    glColor3f(0.0,0.55,0.55);
    glVertex2f(200,200);
    glColor3f(0.0,0.45,0.45);
    glVertex2f(400,200);
    glColor3f(0.0,0.0,0.25);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);

}


//building_design
void building()
{
    glLoadIdentity();

//building_1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.8,0.0);
    glVertex2d(0,350);
    glVertex2d(350,350);
    glVertex2d(350,800);
    glVertex2d(0,800);
    glEnd();
//gate
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(25, 350);
    glVertex2d(320, 350);
    glVertex2d(320,500);
    glVertex2d(25,500);
    glEnd();

//building_2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.5,0.5);
    glVertex2d(350,350);
    glVertex2d(600,350);
    glVertex2d(600,600);
    glVertex2d(350,600);
    glEnd();

//gate
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(375,350);
    glVertex2d(575,350);
    glVertex2d(575,450);
    glVertex2d(375,450);
    glEnd();

//building_3
    glBegin(GL_QUADS);
    glColor3f(0.6,1.0,0.5);
    glVertex2d(600,350);
    glVertex2d(1000,350);
    glVertex2d(1000,900);
    glVertex2d(600,900);
    glEnd();
//gate
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(630, 350);
    glVertex2d(975, 350);
    glVertex2d(975,500);
    glVertex2d(630,500);
    glEnd();
}

//window design

void window()

{
    glLoadIdentity();

//building_1_window_set_1
    glPushMatrix();
    glTranslated(building_1_window,0,0.0);

//window1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.3);
    glVertex2d(25,525);
    glVertex2d(160,525);
    glVertex2d(160,625);
    glVertex2d(25,625);
    glEnd();
//window2
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.0);
    glVertex2d(180,525);
    glVertex2d(320,525);
    glVertex2d(320,625);
    glVertex2d(180,625);
    glEnd();
    glPopMatrix();

//building_1_window_set_2
    glPushMatrix();
    glTranslated(building_1_window,125,0.0);

//window3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.0);
    glVertex2d(25,525);
    glVertex2d(160,525);
    glVertex2d(160,625);
    glVertex2d(25,625);
    glEnd();
//window4
    glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.3);
    glVertex2d(180,525);
    glVertex2d(320,525);
    glVertex2d(320,625);
    glVertex2d(180,625);
    glEnd();
    glPopMatrix();

//building_2_window_set_1
    glPushMatrix();
    glTranslated(building_2_window,115,0.0);
    glScaled(0.7,0.7,0.7);

//window1
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.0);
    glVertex2d(25,525);
    glVertex2d(160,525);
    glVertex2d(160,625);
    glVertex2d(25,625);
    glEnd();
//window2
    glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.3);
    glVertex2d(180,525);
    glVertex2d(320,525);
    glVertex2d(320,625);
    glVertex2d(180,625);
    glEnd();
    glPopMatrix();

//building_3_window_set_1
    glPushMatrix();
    glTranslated(building_3_window,-65,0.0);
    glScaled(1.10,1.10,1.10);

//window1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.3);
    glVertex2d(25,525);
    glVertex2d(160,525);
    glVertex2d(160,625);
    glVertex2d(25,625);
    glEnd();
//window2
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.0);
    glVertex2d(180,525);
    glVertex2d(320,525);
    glVertex2d(320,625);
    glVertex2d(180,625);
    glEnd();
    glPopMatrix();

//building_3_window_set_1
    glPushMatrix();
    glTranslated(building_3_window,65,0.0);
    glScaled(1.10,1.10,1.10);

//window3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.0);
    glVertex2d(25,525);
    glVertex2d(160,525);
    glVertex2d(160,625);
    glVertex2d(25,625);
    glEnd();
//window4
    glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.3);
    glVertex2d(180,525);
    glVertex2d(320,525);
    glVertex2d(320,625);
    glVertex2d(180,625);
    glEnd();
    glPopMatrix();

////building_3_window_set_1
    glPushMatrix();
    glTranslated(building_3_window,195,0.0);
    glScaled(1.10,1.10,1.10);
//window5
    glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.3);
    glVertex2d(25,525);
    glVertex2d(160,525);
    glVertex2d(160,625);
    glVertex2d(25,625);
    glEnd();
//window6
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.0);
    glVertex2d(180,525);
    glVertex2d(320,525);
    glVertex2d(320,625);
    glVertex2d(180,625);
    glEnd();
    glPopMatrix();
}

// road design


void road()
{
    //road
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(0,0);
    glVertex2d(1000,0);
    glVertex2d(1000,350);
    glVertex2d(0,350);
    glEnd();
}

// displaying all of them

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    building();
    window();
    road();
    car1();
    car2();
    car3();

    glutSwapBuffers();
    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("CITYSCAPE");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}

//end

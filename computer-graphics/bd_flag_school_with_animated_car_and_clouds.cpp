#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float car_1_x_axis=160.0; //x-axis
float circlex=-250.0; //x-axis of the flag_circle

//x-axis of clouds
float cloud1x=-300.0;
float cloud2x=-100.0;
float cloud3x=100.0;
float cloud4x=300.0;
float cloud5x=500.0;
float cloud6x=700.0;
float cloud7x=900.0;

void initOpenGl()
{
    glClearColor(0.2f,0.4f,1.0f,0.0f); //Background Color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1000,0,1000); //resolution_setup
    glMatrixMode(GL_MODELVIEW);
}


void circle(int x,int y) //cloud and circle program

{
    float th;
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+22.5*cos(th),y+22.5*sin(th));
    }
    glEnd();
}

//circle

void flag_circle()
{
    glColor3f(1.0,0.0,0.0);
    glLoadIdentity();
    circlex=circlex+0.0; //speed
    glTranslated(circlex,-165,0.0); //glTranslate used for object moving
    glScaled(3,3,3); //glScaled used to resize the object small/big
    circle(225,180); //used the same circle drawing code
}

void car1() // going from left to right
{
    glLoadIdentity();
    car_1_x_axis=car_1_x_axis+0.15; //speed
    glTranslated(car_1_x_axis,-50,0.0); //(placement of the car)
    glScaled(0.9,0.9,0.9);

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

    //Part
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

    circle(200,100);
    circle(380,100);
}

//cloud_1
void circle1()
{
    glColor3f(1.0,1.0,1.0);
    glLoadIdentity();
    cloud1x=cloud1x+0.10; //speed
    glTranslated(cloud1x,480,0.0);
    //glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}


//cloud_2
void circle2()
{
    glLoadIdentity();
    cloud2x=cloud2x+0.10; //speed
    glTranslated(cloud2x,620,0.0);
    //glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}

//cloud_3
void circle3()
{
    glLoadIdentity();
    cloud3x=cloud3x+0.10; //speed
    glTranslated(cloud3x,460,0.0);
    glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}



//cloud_4

void circle4()
{
    glLoadIdentity();
    cloud4x=cloud4x+0.10; //speed
    glTranslated(cloud4x,620,0.0);
    glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}


//cloud_5

void circle5()
{
    glLoadIdentity();
    cloud5x=cloud5x+0.10; //speed
    glTranslated(cloud5x,460,0.0);
    glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}


//cloud_6
void circle6()
{
    glLoadIdentity();
    cloud6x=cloud6x+0.10; //speed
    glTranslated(cloud6x,620,0.0);
    //glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}

//cloud_7
void circle7()
{
    glLoadIdentity();
    cloud7x=cloud7x+0.10; //speed
    glTranslated(cloud7x,480,0.0);
    //glScaled(1.1,1.1,1.1);

    circle(225,180);
    circle(250,180);
    circle(275,180);

    circle(200,200);
    circle(250,200);
    circle(300,200);

    circle(225,220);
    circle(250,220);
    circle(275,220);
}

void flag()
{
    //stand
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(220,0);
    glVertex2f(250,0);
    glVertex2f(250,520);
    glVertex2f(220,520);
    glEnd();
    //rectangle
    glColor3f(0.0,0.4,0.3);
    glBegin(GL_QUADS);
    glVertex2f(250,250);
    glVertex2f(620,250);
    glVertex2f(620,500);
    glVertex2f(250,500);
    glEnd();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //building_3
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2d(700,200);
    glVertex2d(1000,200);
    glVertex2d(1000,700);
    glVertex2d(700,700);
    glEnd();

    //gate
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(725, 200);
    glVertex2d(975, 200);
    glVertex2d(975,350);
    glVertex2d(725,350);
    glEnd();

    //window1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(725, 360);
    glVertex2d(840, 360);
    glVertex2d(840,510);
    glVertex2d(725,510);
    glEnd();

    //window2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(725, 520);
    glVertex2d(840, 520);
    glVertex2d(840,670);
    glVertex2d(725,670);
    glEnd();

    //window3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(860, 360);
    glVertex2d(975, 360);
    glVertex2d(975,510);
    glVertex2d(860,510);
    glEnd();

    //window4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.4);
    glVertex2d(860, 520);
    glVertex2d(975, 520);
    glVertex2d(975,670);
    glVertex2d(860,670);
    glEnd();

    //road
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(0, 0);
    glVertex2d(1000, 0);
    glVertex2d(1000,200);
    glVertex2d(0,200);
    glEnd();

    flag();
    flag_circle();
    car1();

    circle1();
    circle2();
    circle3();
    circle4();
    circle5();
    circle6();
    circle7();

    glutSwapBuffers();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("FLAG_SCHOOL");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}

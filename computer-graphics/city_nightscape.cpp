//start

#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

//x-axis of cars
float car_1_x_axis=100.0; //x-axis
float car_2_x_axis=200.0;
float car_3_x_axis=750.0;
float car_4_x_axis=-400.0;
float car_5_x_axis=1200.0;

//x-axis of clouds
float cloud1x=-600.0;
float cloud2x=-300.0;
float cloud3x=0.0;
float cloud4x=300.0;
float cloud5x=600.0;

//x-axis of moon
float moon1x=275.0;
float moon2x=285.0;

void init()
{
    glClearColor(0.0f,0.0f,0.5f,0.0f); //background color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1000,0,1000);   //resolution
    glMatrixMode(GL_MODELVIEW);
}

//car wheels
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

//cloud circles
void circle(int x,int y)

{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+20.5*cos(th),y+20.5*sin(th));
    }
    glEnd();
}

//moon circles
void moon_circle(int x,int y)

{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+20.5*cos(th),y+20.5*sin(th));
    }
    glEnd();
}

//moon shadow circles
void moon_shadow(int x,int y)

{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.5);
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
    car_1_x_axis=car_1_x_axis+0.20; //speed
    glTranslated(car_1_x_axis,350,0.0); //(placement of the car)
    glScaled(0.8,0.8,0.8);

    //Hood
    glColor3f(0.8,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(500,160);
    glVertex2f(500,100);

    //Parts
    glBegin(GL_POLYGON);
    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);
}

//2nd car design
void car2() // going from right to left
{
    glLoadIdentity();
    car_2_x_axis=car_2_x_axis-0.15; //speed
    glTranslated(car_2_x_axis,200,0.0); //(placement of the car)
    glScaled(0.85,0.85,0.85);

    //Hood
    glColor3f(0.0,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(500,160);
    glVertex2f(500,100);

    //Parts
    glBegin(GL_POLYGON);
    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);
}

//3rd car design
void car3() // going from right to left
{
    glLoadIdentity();
    car_3_x_axis=car_3_x_axis-0.175; //speed
    glTranslated(car_3_x_axis,200,0.0); //(placement of the car)
    glScaled(0.85,0.85,0.85);

    //Hood
    glColor3f(0.5,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(450,160);
    glVertex2f(450,100);

    //Part
    glBegin(GL_POLYGON);
    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);
}

//4th car design
void car4() // going from left to right
{
    glLoadIdentity();
    car_4_x_axis=car_4_x_axis+0.15; //speed
    glTranslated(car_4_x_axis,350,0.0); //(placement of the car)
    glScaled(0.8,0.8,0.8);

    //Hood
    glColor3f(1.0,0.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(500,160);
    glVertex2f(500,100);

    //Parts
    glBegin(GL_POLYGON);
    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);
}

//5th car design
void car5() // going from right to left
{
    glLoadIdentity();
    car_5_x_axis=car_5_x_axis-0.175; //speed
    glTranslated(car_5_x_axis,200,0.0); //(placement of the car)
    glScaled(0.85,0.85,0.85);

    //Hood
    glColor3f(1.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(450,160);
    glVertex2f(450,100);

    //Part
    glBegin(GL_POLYGON);
    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

    wheel(200,100);
    wheel(380,100);

}

//tree_bottom
void tree_bottom()
{
    glLoadIdentity();

//tree_1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2d(0,60);
    glVertex2d(180,60);
    glVertex2d(90,300);
    glEnd();

//root_1
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.0);
    glVertex2d(82.5,0);
    glVertex2d(97.5,0);
    glVertex2d(97.5,60);
    glVertex2d(82.5,60);
    glEnd();

//tree_2
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2d(200,100);
    glVertex2d(380,100);
    glVertex2d(290,300);
    glEnd();

//root_2
    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0.0);
    glVertex2d(282.5,60);
    glVertex2d(297.5,60);
    glVertex2d(297.5,100);
    glVertex2d(282.5,100);
    glEnd();

//tree_3
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2d(400,60);
    glVertex2d(680,60);
    glVertex2d(540,300);
    glEnd();

//root_3
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.0);
    glVertex2d(532.5,0);
    glVertex2d(547.5,0);
    glVertex2d(547.5,60);
    glVertex2d(532.5,60);
    glEnd();

//tree_4
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2d(700,100);
    glVertex2d(880,100);
    glVertex2d(790,300);
    glEnd();

//root_4
    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0.0);
    glVertex2d(782.5,60);
    glVertex2d(797.5,60);
    glVertex2d(797.5,100);
    glVertex2d(782.5,100);
    glEnd();

//tree_5
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2d(900,60);
    glVertex2d(1100,60);
    glVertex2d(990,300);
    glEnd();

//root_5
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.0);
    glVertex2d(982.5,0);
    glVertex2d(997.5,0);
    glVertex2d(997.5,60);
    glVertex2d(982.5,60);
    glEnd();
}

//tree_top
void tree_top()
{
    glLoadIdentity();

//tree_1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2d(700,525);
    glVertex2d(880,525);
    glVertex2d(790,700);
    glEnd();

//root_1
    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0.0);
    glVertex2d(782.5,500);
    glVertex2d(797.5,500);
    glVertex2d(797.5,525);
    glVertex2d(782.5,525);
    glEnd();
}

//grass
void grass()
{
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,0.0);
    glVertex2d(0,0);
    glVertex2d(1000,0);
    glVertex2d(1000,250);
    glVertex2d(0,250);
    glEnd();
}

//building_design
void building()
{
    glLoadIdentity();

//building_1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2d(100,350);
    glVertex2d(400,350);
    glVertex2d(400,800);
    glVertex2d(100,800);
    glEnd();

//building_1_top
    glBegin(GL_QUADS);
    glColor3f(0.5,0.0,0.0);
    glVertex2d(100,800);
    glVertex2d(400,800);
    glVertex2d(400,830);
    glVertex2d(100,830);
    glEnd();

//building_1_window_1
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(150,725);
    glVertex2d(225,725);
    glVertex2d(225,775);
    glVertex2d(150,775);
    glEnd();

//building_1_window_2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(150,625);
    glVertex2d(225,625);
    glVertex2d(225,675);
    glVertex2d(150,675);
    glEnd();

//building_1_window_3
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(150,525);
    glVertex2d(225,525);
    glVertex2d(225,575);
    glVertex2d(150,575);
    glEnd();

//building_1_window_4
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(350,725);
    glVertex2d(275,725);
    glVertex2d(275,775);
    glVertex2d(350,775);
    glEnd();

//building_1_window_5
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(350,625);
    glVertex2d(275,625);
    glVertex2d(275,675);
    glVertex2d(350,675);
    glEnd();

//building_1_window_6
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(350,525);
    glVertex2d(275,525);
    glVertex2d(275,575);
    glVertex2d(350,575);
    glEnd();

//building_2
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.5);
    glVertex2d(400,350);
    glVertex2d(675,350);
    glVertex2d(675,700);
    glVertex2d(400,700);
    glEnd();

//building_2_top
    glBegin(GL_QUADS);
    glColor3f(0.5,0.0,0.0);
    glVertex2d(400,700);
    glVertex2d(675,700);
    glVertex2d(675,730);
    glVertex2d(400,730);
    glEnd();

//building_2_window_1
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(450,530);
    glVertex2d(525,530);
    glVertex2d(525,580);
    glVertex2d(450,580);
    glEnd();

//building_2_window_2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(450,630);
    glVertex2d(525,630);
    glVertex2d(525,680);
    glVertex2d(450,680);
    glEnd();

//building_2_window_3
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(625,530);
    glVertex2d(550,530);
    glVertex2d(550,580);
    glVertex2d(625,580);
    glEnd();

//building_2_window_4
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(625,630);
    glVertex2d(550,630);
    glVertex2d(550,680);
    glVertex2d(625,680);
    glEnd();
}

//moon shadow
void shadow()
{
    glLoadIdentity();
    moon1x=moon1x+0.0; //speed
    glTranslated(moon1x,420,0.0);
    glScaled(1.9,1.9,1.9);

    moon_shadow(250,200);
}

//moon
void moon()
{
    glColor3f(1.0,1.0,1.0);
    glLoadIdentity();
    moon2x=moon2x+0.0; //speed
    glTranslated(moon2x,410,0.0);
    glScaled(1.9,1.9,1.9);

    moon_circle(250,200);
}

//cloud_1
void circle1()
{
    glColor3f(1.0,1.0,1.0);
    glLoadIdentity();
    cloud1x=cloud1x+0.10; //speed
    glTranslated(cloud1x,680,0.0);
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
    glTranslated(cloud2x,720,0.0);
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
    glTranslated(cloud3x,660,0.0);
    glScaled(1.0,1.0,1.0);

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
    glTranslated(cloud4x,720,0.0);
    glScaled(1.0,1.0,1.0);

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
    glTranslated(cloud5x,660,0.0);
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

// road design


void road()
{
    //road
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.3);
    glVertex2d(0,250);
    glVertex2d(1000,250);
    glVertex2d(1000,500);
    glVertex2d(0,500);
    glEnd();
}

void road_line()
{
    //road_line_2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2d(0,365);
    glVertex2d(200,365);
    glVertex2d(200,385);
    glVertex2d(0,385);
    glEnd();

    //road_line_2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2d(400,365);
    glVertex2d(600,365);
    glVertex2d(600,385);
    glVertex2d(400,385);
    glEnd();

    //road_line_2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2d(800,365);
    glVertex2d(1000,365);
    glVertex2d(1000,385);
    glVertex2d(800,385);
    glEnd();
}

// displaying all of them

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    building();
    road();
    road_line();
    grass();
    tree_top();
    car1();
    car2();
    car3();
    car4();
    car5();
    tree_bottom();

    moon();
    shadow();


    circle1();
    circle2();
    circle3();
    circle4();
    circle5();

    glutSwapBuffers();
    glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("City Night Scape");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}

//end

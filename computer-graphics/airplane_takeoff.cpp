#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>

// A project by 181006912 & 181008412

GLfloat a=0,b=0,c=0,d=0,e=0;
void mountain();
void building();
void road();
void display2();
void display3();

void update(int value)
{
    a+=20.0;
    b-=10.0;
    c+=15;
    if(b<=-78.0)
        b=0.0;
    glutPostRedisplay();
    glutTimerFunc(50,update,0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//rectangular body
    glVertex2f(0.0,30.0);
    glVertex2f(0.0,55.0);
    glVertex2f(135.0,55.0);
    glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);//triangle construction plane
    glVertex2f(135.0,30.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(170,42.5);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(135.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//back wing
    glVertex2f(0.0,55.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(0.0,80.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(10.0,80.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(40.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//left side wing
    glVertex2f(65.0,55.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(50.0,70.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(75.0,70.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(90.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//right-side wing
    glVertex2f(70.0,40.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(100.0,40.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(80.0,15.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(50.0,15.0);
    glEnd();

    glPopMatrix();
    if(c>380)       //jump to next display
    {
        display2();
        d+=20;      //airplane takeoff on x in 2nd display
    }

    if(c>800)       //jump to 3rd display
    {
        display3();
        e+=20;      //airplane takeoff on x in 3rd display

    }
    glFlush();
    glutSwapBuffers();
}

void road()
{
    glColor3f(0.25,0.25,0.25);
    glBegin(GL_POLYGON);//road color
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,100.0);
    glVertex2f(500.0,100.0);
    glVertex2f(500.0,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//white strips on road
    glVertex2f(0.0,40.0);
    glVertex2f(8.0,60.0);
    glVertex2f(58.0,60.0);
    glVertex2f(50.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(100.0,40.0);
    glVertex2f(108.0,60.0);
    glVertex2f(158.0,60.0);
    glVertex2f(150.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(200.0,40.0);
    glVertex2f(208.0,60.0);
    glVertex2f(258.0,60.0);
    glVertex2f(250.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0,40.0);
    glVertex2f(308.0,60.0);
    glVertex2f(358.0,60.0);
    glVertex2f(350.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(400.0,40.0);
    glVertex2f(408.0,60.0);
    glVertex2f(458.0,60.0);
    glVertex2f(450.0,40.0);
    glEnd();
    glPopMatrix();
}

void display2()
{
    glClear(GL_COLOR_BUFFER_BIT);
    building();
    glPushMatrix();
    glTranslated(d,350,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//rectangular body
    glVertex2f(0.0,30.0);
    glVertex2f(0.0,55.0);
    glVertex2f(135.0,55.0);
    glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(d,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);//triangle construction plane
    glVertex2f(135.0,30.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(170,42.5);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(135.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(d,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//back wing
    glVertex2f(0.0,55.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(0.0,80.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(10.0,80.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(40.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(d,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//left side wing
    glVertex2f(65.0,55.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(50.0,70.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(75.0,70.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(90.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(d,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//right-side wing
    glVertex2f(70.0,40.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(100.0,40.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(80.0,15.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(50.0,15.0);
    glEnd();
    glPopMatrix();
}

void building()
{
    glBegin(GL_QUADS);

//b1
    glColor3f(0.9,0.7,0.6);
    glVertex2f(0,0);
    glVertex2f(150,0);
    glVertex2d(150,150);
    glVertex2f(0,150);

//b1_w1
    glColor3f(0.2,0.2,0.2);
    glVertex2f(20,20);
    glVertex2f(70,20);
    glVertex2d(70,70);
    glVertex2f(20,70);

//b1_w2
    glColor3f(0.2,0.2,0.2);
    glVertex2f(80,20);
    glVertex2f(130,20);
    glVertex2d(130,70);
    glVertex2f(80,70);

//b1_w3
    glColor3f(0.2,0.2,0.2);
    glVertex2f(20,80);
    glVertex2f(70,80);
    glVertex2d(70,130);
    glVertex2f(20,130);

//b1_w4
    glColor3f(0.2,0.2,0.2);
    glVertex2f(80,80);
    glVertex2f(130,80);
    glVertex2d(130,130);
    glVertex2f(80,130);

//b2
    glColor3f(0.9,0.9,0.9);
    glVertex2f(150,0);
    glVertex2f(350,0);
    glVertex2f(350,350);
    glVertex2f(150,350);

//b2_w1
    glColor3f(0.4,0.4,0.4);
    glVertex2f(170,20);
    glVertex2f(245,20);
    glVertex2f(245,125);
    glVertex2f(170,125);
//b2_w2
    glColor3f(0.4,0.4,0.4);
    glVertex2f(255,20);
    glVertex2f(330,20);
    glVertex2f(330,125);
    glVertex2f(255,125);

//b2_w3
    glColor3f(0.35,0.35,0.35);
    glVertex2f(170,135);
    glVertex2f(245,135);
    glVertex2f(245,240);
    glVertex2f(170,240);

//b2_w4
    glColor3f(0.35,0.35,0.35);
    glVertex2f(255,135);
    glVertex2f(330,135);
    glVertex2f(330,240);
    glVertex2f(255,240);

//b2_w5
    glColor3f(0.3,0.3,0.3);
    glVertex2f(170,250);
    glVertex2f(330,250);
    glVertex2f(330,330);
    glVertex2f(170,330);

//b3
    glColor3f(0.5,0.5,0.5);
    glVertex2f(350,0);
    glVertex2f(500,0);
    glVertex2f(500,270);
    glVertex2f(350,270);

//b3_w1
    glColor3f(0.2,0.2,0.2);
    glVertex2f(370,20);
    glVertex2f(420,20);
    glVertex2d(420,70);
    glVertex2f(370,70);

//b3_w2
    glColor3f(0.2,0.2,0.2);
    glVertex2f(430,20);
    glVertex2f(480,20);
    glVertex2d(480,70);
    glVertex2f(430,70);

//b3_w3
    glColor3f(0.2,0.2,0.2);
    glVertex2f(370,80);
    glVertex2f(420,80);
    glVertex2d(420,130);
    glVertex2f(370,130);

//b3_w4
    glColor3f(0.2,0.2,0.2);
    glVertex2f(430,80);
    glVertex2f(480,80);
    glVertex2d(480,130);
    glVertex2f(430,130);

//b3_w5
    glColor3f(0.2,0.2,0.2);
    glVertex2f(370,140);
    glVertex2f(420,140);
    glVertex2d(420,190);
    glVertex2f(370,190);

//b3_w6
    glColor3f(0.2,0.2,0.2);
    glVertex2f(430,140);
    glVertex2f(480,140);
    glVertex2d(480,190);
    glVertex2f(430,190);

//b3_w7
    glColor3f(0.2,0.2,0.2);
    glVertex2f(370,200);
    glVertex2f(420,200);
    glVertex2d(420,250);
    glVertex2f(370,250);

//b3_w8
    glColor3f(0.2,0.2,0.2);
    glVertex2f(430,200);
    glVertex2f(480,200);
    glVertex2d(480,250);
    glVertex2f(430,250);

    glEnd();
}

void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    mountain();
    glPushMatrix();
    glTranslated(e,350,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//rectangular body
    glVertex2f(0.0,30.0);
    glVertex2f(0.0,55.0);
    glVertex2f(135.0,55.0);
    glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(e,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);//triangle construction plane
    glVertex2f(135.0,30.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(170,42.5);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(135.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(e,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//back wing
    glVertex2f(0.0,55.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(0.0,80.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(10.0,80.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(40.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(e,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//left side wing
    glVertex2f(65.0,55.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(50.0,70.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(75.0,70.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(90.0,55.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(e,350,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);//right-side wing
    glVertex2f(70.0,40.0);
    glColor3f(0.90,0.0,0.0);
    glVertex2f(100.0,40.0);
    glColor3f(0.80,0.0,0.0);
    glVertex2f(80.0,15.0);
    glColor3f(0.70,0.0,0.0);
    glVertex2f(50.0,15.0);
    glEnd();
    glPopMatrix();
}

void mountain()
{
glColor3f(0.0,0.4,0.0);
glBegin(GL_POLYGON);
glVertex2f(500.0,0.0);
glColor3f(1.0,0.75,0.65);
glVertex2f(500, 280.3091087025878);
glVertex2f(456.2703670756155, 301.4097965506062);
glVertex2f(406.1368853097806, 307.9241543625945);
glColor3f(1.0,0.78,0.68);
glVertex2f(359.1651746460302, 282.3923220664923);
glVertex2f(278.5106027583363, 190.8246016603342);
glColor3f(1.0,0.73,0.63);
glVertex2f(400,0);
glColor3f(1.0,0.75,0.65);
glVertex2f(300, 200);
glColor3f(0.50,0.50,0.50);
glVertex2f(200, 300);
glColor3f(1.0,0.80,0.70);
glVertex2f(150.7260649732181, 311.0010182997055);
glVertex2f(100,300);
glColor3f(1.0,0.83,0.73);
glVertex2f(51.0826689994645, 280.3091087025878);
glVertex2f(0, 218.9252895083525);
glColor3f(1.0,0.85,0.75);
glVertex2f(0,0);
glEnd();
}

void myinit()
{
    glClearColor(0.2f,0.5f,0.9f,0.0f); //Background Color
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500); //resolution_setup
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500.0,500.0);
    glutInitWindowPosition(0,0);
    glutCreateWindow("1810069_8412");
    glutDisplayFunc(display);
    myinit();
    glutTimerFunc(100,update,0);
    glutMainLoop();
    return 0;
}

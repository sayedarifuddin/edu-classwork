#include<windows.h>
#include<GL/glut.h>
float angle=-25.5;
void myinit(void)

/*
Lab_5_Circle_with_Translation
Developed by 181006912
*/

{
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D (0.0,1000.0,0.0,1000.0);
}

 void polySegment(void)
 {
glClear(GL_COLOR_BUFFER_BIT);

// 1

glColor3f(1.0,0.0,0.0);
glTranslatef(70,140,0);
//glScalef(1.0,1.0,0);
//glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p1[]={50,100};
                       int p2[]={200,100};
                       int p3[]={200,300};
                       int p4[]={50,300};

                  glVertex2iv(p1);
                  glColor3f(0.75,0.0,0.0);
                  glVertex2iv(p2);
                  glColor3f(0.5,0.0,0.0);
                  glVertex2iv(p3);
                  glColor3f(0.25,0.0,0.0);
                  glVertex2iv(p4);
glEnd();

// 2

glColor3f(0.0,1.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p5[]={50,100};
                       int p6[]={200,100};
                       int p7[]={200,300};
                       int p8[]={50,300};

                  glVertex2iv(p5);
                  glColor3f(0.0,0.75,0.0);
                  glVertex2iv(p6);
                  glColor3f(0.0,0.5,0.0);
                  glVertex2iv(p7);
                  glColor3f(0.0,0.25,0.0);
                  glVertex2iv(p8);
glEnd();

// 3

glColor3f(0.0,0.0,1.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p9[]={50,100};
                       int p10[]={200,100};
                       int p11[]={200,300};
                       int p12[]={50,300};

                  glVertex2iv(p9);
                  glColor3f(0.0,0.0,0.75);
                  glVertex2iv(p10);
                  glColor3f(0.0,0.0,0.5);
                  glVertex2iv(p11);
                  glColor3f(0.0,0.0,0.25);
                  glVertex2iv(p12);
glEnd();

// 4

glColor3f(1.0,0.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p13[]={50,100};
                       int p14[]={200,100};
                       int p15[]={200,300};
                       int p16[]={50,300};

                  glVertex2iv(p13);
                  glColor3f(0.75,0.0,0.0);
                  glVertex2iv(p14);
                  glColor3f(0.5,0.0,0.0);
                  glVertex2iv(p15);
                  glColor3f(0.25,0.0,0.0);
                  glVertex2iv(p16);
glEnd();

// 4

glColor3f(0.0,1.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p17[]={50,100};
                       int p18[]={200,100};
                       int p19[]={200,300};
                       int p20[]={50,300};

                  glVertex2iv(p17);
                  glColor3f(0.0,0.75,0.0);
                  glVertex2iv(p18);
                  glColor3f(0.0,0.5,0.0);
                  glVertex2iv(p19);
                  glColor3f(0.0,0.25,0.0);
                  glVertex2iv(p20);
glEnd();

// 5

glColor3f(0.0,0.0,1.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p21[]={50,100};
                       int p22[]={200,100};
                       int p23[]={200,300};
                       int p24[]={50,300};

                  glVertex2iv(p21);
                  glColor3f(0.0,0.0,0.75);
                  glVertex2iv(p22);
                  glColor3f(0.0,0.0,0.5);
                  glVertex2iv(p23);
                  glColor3f(0.0,0.0,0.25);
                  glVertex2iv(p24);
glEnd();

// 6

glColor3f(1.0,0.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p25[]={50,100};
                       int p26[]={200,100};
                       int p27[]={200,300};
                       int p28[]={50,300};

                  glVertex2iv(p25);
                  glColor3f(0.75,0.0,0.0);
                  glVertex2iv(p26);
                  glColor3f(0.5,0.0,0.0);
                  glVertex2iv(p27);
                  glColor3f(0.25,0.0,0.0);
                  glVertex2iv(p28);
glEnd();

// 7

glColor3f(0.0,1.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p29[]={50,100};
                       int p30[]={200,100};
                       int p31[]={200,300};
                       int p32[]={50,300};

                  glVertex2iv(p29);
                  glColor3f(0.0,0.75,0.0);
                  glVertex2iv(p30);
                  glColor3f(0.0,0.5,0.0);
                  glVertex2iv(p31);
                  glColor3f(0.0,0.25,0.0);
                  glVertex2iv(p32);
glEnd();

// 8

glColor3f(0.0,0.0,1.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p33[]={50,100};
                       int p34[]={200,100};
                       int p35[]={200,300};
                       int p36[]={50,300};

                  glVertex2iv(p33);
                  glColor3f(0.0,0.0,0.75);
                  glVertex2iv(p34);
                  glColor3f(0.0,0.0,0.5);
                  glVertex2iv(p35);
                  glColor3f(0.0,0.0,0.25);
                  glVertex2iv(p36);
glEnd();

// 9

glColor3f(1.0,0.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p37[]={50,100};
                       int p38[]={200,100};
                       int p39[]={200,300};
                       int p40[]={50,300};

                  glVertex2iv(p37);
                  glColor3f(0.75,0.0,0.0);
                  glVertex2iv(p38);
                  glColor3f(0.5,0.0,0.0);
                  glVertex2iv(p39);
                  glColor3f(0.25,0.0,0.0);
                  glVertex2iv(p40);
glEnd();

// 10

glColor3f(0.0,1.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p41[]={50,100};
                       int p42[]={200,100};
                       int p43[]={200,300};
                       int p44[]={50,300};

                  glVertex2iv(p41);
                  glColor3f(0.0,0.75,0.0);
                  glVertex2iv(p42);
                  glColor3f(0.0,0.5,0.0);
                  glVertex2iv(p43);
                  glColor3f(0.0,0.25,0.0);
                  glVertex2iv(p44);
glEnd();


// 11

glColor3f(0.0,0.0,1.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p45[]={50,100};
                       int p46[]={200,100};
                       int p47[]={200,300};
                       int p48[]={50,300};

                  glVertex2iv(p45);
                  glColor3f(0.0,0.0,0.75);
                  glVertex2iv(p46);
                  glColor3f(0.0,0.0,0.5);
                  glVertex2iv(p47);
                  glColor3f(0.0,0.0,0.25);
                  glVertex2iv(p48);
glEnd();

// 12

glColor3f(1.0,0.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p49[]={50,100};
                       int p50[]={200,100};
                       int p51[]={200,300};
                       int p52[]={50,300};

                  glVertex2iv(p49);
                  glColor3f(0.75,0.0,0.0);
                  glVertex2iv(p50);
                  glColor3f(0.5,0.0,0.0);
                  glVertex2iv(p51);
                  glColor3f(0.25,0.0,0.0);
                  glVertex2iv(p52);
glEnd();

// 13

glColor3f(0.0,1.0,0.0);
glTranslatef(-50,200,0);
//glScalef(0.5,1.5,0);
glRotatef(angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
                       int p53[]={50,100};
                       int p54[]={200,100};
                       int p55[]={200,300};
                       int p56[]={50,300};

                  glVertex2iv(p53);
                  glColor3f(0.0,0.75,0.0);
                  glVertex2iv(p54);
                  glColor3f(0.0,0.5,0.0);
                  glVertex2iv(p55);
                  glColor3f(0.0,0.25,0.0);
                  glVertex2iv(p56);
glEnd();


glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100,100);
glutInitWindowSize(650,650);
glutCreateWindow("181006912_Circle");
myinit();
glutDisplayFunc(polySegment);
glutMainLoop();
}

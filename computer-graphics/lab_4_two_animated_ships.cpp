#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

/* LAB-3
Developed by 181006912 */

void display();
void reshape(int,int);
void timer(int);
void init()

{
    glClearColor(0.1,0.2,1.0,1.0);
}

int main(int argc, char **argv)

{
    glutInit(&argc,argv);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(550,600);
    glutCreateWindow("Ship_181006912");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);
    init();
    glutMainLoop();
}

float x_position = -32.0;
float y_position = -18.0;

int state=1;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

//SHIP_1

//layer1

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.1);
    glVertex3f(x_position-6.0, -1.0, 0.0);
    glVertex3f(x_position+6.0, -1.0, 0.0); //curve
    glVertex3f(x_position+4.0, -3.0, 0.0);
    glVertex3f(x_position-5.0, -3.0, 0.0); //curve

glEnd();

// layer2

    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(x_position-5.0, 0.5, 0.0);
    glVertex3f(x_position+2.0, 0.5, 0.0); //curve
    glVertex3f(x_position+4.0, -1.0, 0.0);
    glVertex3f(x_position-5.0, -1.0, 0.0); //curve

glEnd();

 // layer3

    glBegin(GL_POLYGON);
    glColor3f(0.9,0.9,0.1);
    glVertex3f(x_position-4.0, 1.5, 0.0);
    glVertex3f(x_position+0.0, 1.5, 0.0); //curve
    glVertex3f(x_position+1.0, 0.5, 0.0);
    glVertex3f(x_position-4.0, 0.5, 0.0); //curve

 glEnd();

 //SHIP_2

 //layer1

    glBegin(GL_POLYGON);
    glColor3f(0.75,0.85,0.85);
    glVertex3f(y_position-6.0, -5.0, 0.0);
    glVertex3f(y_position+6.0, -5.0, 0.0); //curve
    glVertex3f(y_position+4.0, -7.0, 0.0);
    glVertex3f(y_position-5.0, -7.0, 0.0); //curve

glEnd();

// layer2

    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(y_position-4.5, -3.5, 0.0);
    glVertex3f(y_position+3.0, -3.5, 0.0); //curve
    glVertex3f(y_position+4.0, -5.0, 0.0);
    glVertex3f(y_position-5.0, -5.0, 0.0); //curve

glEnd();

 // layer3

    glBegin(GL_POLYGON);
    glColor3f(0.75,0.85,0.85);
    glVertex3f(y_position-3.5, -2.75, 0.0);
    glVertex3f(y_position+1.0, -2.75, 0.0); //curve
    glVertex3f(y_position+2.0, -3.5, 0.0);
    glVertex3f(y_position-4.0, -3.5, 0.0); //curve

 glEnd();

// layer4_1

    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(y_position-1.0, -1.5, 0.0);
    glVertex3f(y_position+0.0, -1.5, 0.0); //curve
    glVertex3f(y_position+0.0, -2.75, 0.0);
    glVertex3f(y_position-1.0, -2.75, 0.0); //curve

 glEnd();

 // layer4_2

    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(y_position-1.5, -1.5, 0.0);
    glVertex3f(y_position-2.5, -1.5, 0.0); //curve
    glVertex3f(y_position-2.5, -2.75, 0.0);
    glVertex3f(y_position-1.5, -2.75, 0.0); //curve

 glEnd();

 // mountain

    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.7,0.0);
    glVertex2f(12.0, 12.0);
    glColor3f(0.4,0.6,0.0);
    glVertex2f(12.0, 3.0);
    glColor3f(0.4,0.7,0.1);
    glVertex2f(-12.0, 3.0);

glEnd();

// sky

    glBegin(GL_TRIANGLES);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(-12.0, 12.0);
    glColor3f(0.3,0.8,1.0);
    glVertex2f(-12.0, 3.0);
    glColor3f(0.2,0.8,1.0);
    glVertex2f(12.0, 12.0);

 glEnd();

    glFlush();
    glutSwapBuffers();

}
void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-12,12,-12,12,-12,12);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int)

{
    glutPostRedisplay();
    glutTimerFunc(1000/75,timer,0);
    switch(state)

    {
    case 1:

        if(y_position<32)
        {
            x_position+=0.15;
            y_position+=0.15;
        }
        else
            state=-1;
        break;

    case -1:

        if(y_position<12)
        {
            x_position-=0.05;
            y_position-=0.05;
        }
        else
            state=1;
        break;
    }
}

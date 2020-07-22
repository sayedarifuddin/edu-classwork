#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display();
void reshape(int,int);
void timer(int);
void init()

{
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc, char **argv)

{
    glutInit(&argc,argv);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("window 1");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);
    init();
    glutMainLoop();
}

float x_position = -15.0;
float y_position = -25.0;

int state=1;

void display()

{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

// b1

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(x_position, 10.0 , 0.0);
    glVertex3f(x_position, 8.0, 0.0);
    glVertex3f(x_position+2.0, 8.0, 0.0);
    glVertex3f(x_position+2.0, 10.0, 0.0);

    glEnd();

// b2

    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(x_position, 7.0 , 0.0);
    glVertex3f(x_position, 5.0, 0.0);
    glVertex3f(x_position+2.0, 5.0, 0.0);
    glVertex3f(x_position+2.0, 7.0, 0.0);

    glEnd();

// b3

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(x_position, 4.0 , 0.0);
    glVertex3f(x_position, 2.0, 0.0);
    glVertex3f(x_position+2.0, 2.0, 0.0);
    glVertex3f(x_position+2.0, 4.0, 0.0);

    glEnd();

// b4

    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(x_position, -2.0 , 0.0);
    glVertex3f(x_position, -4.0, 0.0);
    glVertex3f(x_position+2.0, -4.0, 0.0);
    glVertex3f(x_position+2.0, -2.0, 0.0);

    glEnd();

// b5

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(x_position, -5.0 , 0.0);
    glVertex3f(x_position, -7.0, 0.0);
    glVertex3f(x_position+2.0, -7.0, 0.0);
    glVertex3f(x_position+2.0, -5.0, 0.0);

    glEnd();

// b6

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(x_position, -8.0 , 0.0);
    glVertex3f(x_position, -10.0, 0.0);
    glVertex3f(x_position+2.0, -10.0, 0.0);
    glVertex3f(x_position+2.0, -8.0, 0.0);

    glEnd();

    glFlush();
    glutSwapBuffers();
}

void reshape(int w,int h)

{
    glViewport(0,0,(GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10,10,-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int)

{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    switch(state)

    {
    case 1:

        if(y_position<-2)
        {
            x_position+=0.20;
            y_position+=0.20;
        }
        else
            state=-1;
        break;

    case -1:
        if(x_position>-10)
        {
            x_position-=0.25;
            y_position-=0.25;
        }
        else
            state=1;
        break;
    }
}

#include <windows.h>
#include <GL/glut.h>

// 5 stars in diagonal position from large to small
// Developed by 181006912

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    /* lines-1
    glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f( -0.75f,-1.0f);
      glVertex2f( -1.0f,-0.75f);
   glEnd(); */

    //star-1 (MIN)
    glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f( -0.97f,-0.90f);
      glColor3f(0.5f, 0.5f, 0.0f);
      glVertex2f( -0.87f,-0.73f); //center
      glColor3f(0.25f, 0.25f, 0.0f);
      glVertex2f( -0.77f,-0.90f);
   glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f( -0.97f,-0.80f);
      glColor3f(0.5f, 0.5f, 0.0f);
      glVertex2f( -0.87f,-0.96f); //center
      glColor3f(0.25f, 0.25f, 0.0f);
      glVertex2f( -0.77f,-0.80f);
   glEnd();

    /* lines-2
    glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f( -0.35f,-1.0f);
      glVertex2f( -1.0f,-0.35f);
   glEnd(); */

    //star-2
    glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( -0.75f,-0.56f);
      glColor3f(0.5f, 0.5f, 0.5f);
      glVertex2f( -0.625f,-0.76f); //center
      glColor3f(0.25f, 0.25f, 0.25f);
      glVertex2f( -0.50f,-0.56f);
   glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( -0.75f,-0.68f);
      glColor3f(0.5f, 0.5f, 0.5f);
      glVertex2f( -0.625f,-0.48f); //center
      glColor3f(0.25f, 0.25f, 0.25f);
      glVertex2f( -0.50f,-0.68f);
   glEnd();

    /* lines-3
    glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f( 0.10f,-1.0f);
      glVertex2f( -1.0f,0.10f);
   glEnd(); */

    //star-3
    glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f( -0.50f,-0.28f);
      glColor3f(0.5f, 0.5f, 0.0f);
      glVertex2f( -0.35f,-0.51f); //center
      glColor3f(0.25f, 0.25f, 0.0f);
      glVertex2f( -0.20f,-0.28f);
   glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f( -0.50f,-0.42f);
      glColor3f(0.5f, 0.5f, 0.0f);
      glVertex2f( -0.35f,-0.18f); //center
      glColor3f(0.25f, 0.25f, 0.0f);
      glVertex2f( -0.20f,-0.42f);
   glEnd();

   /* lines-4
    glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f( 0.80f,-1.0f);
      glVertex2f( -1.0f,0.80f);
   glEnd(); */

    //star-4
    glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( -0.19f,-0.10f);
      glColor3f(0.5f, 0.5f, 0.5f);
      glVertex2f( 0.00f, 0.21f); //center
      glColor3f(0.25f, 0.25f, 0.25f);
      glVertex2f( 0.19f,-0.10f);
   glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( -0.19f,0.10f);
      glColor3f(0.5f, 0.5f, 0.5f);
      glVertex2f( 0.00f,-0.20f); //center
      glColor3f(0.25f, 0.25f, 0.25f);
      glVertex2f( 0.19f,0.10f);
   glEnd();


   /* lines-5
    glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f( 0.0f,0.6f);
      glVertex2f( 0.6f,0.0f);
   glEnd(); */

    //star-5(MAX)
    glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f( 0.18f, 0.28f);
      glColor3f(0.5f, 0.5f, 0.0f);
      glVertex2f( 0.41f, 0.65f); //center
      glColor3f(0.25f, 0.25f, 0.0f);
      glVertex2f( 0.64f, 0.28f);
   glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f( 0.18f, 0.50f);
      glColor3f(0.5f, 0.5f, 0.0f);
      glVertex2f( 0.41f, 0.15f); //center
      glColor3f(0.25f, 0.25f, 0.0f);
      glVertex2f( 0.64f, 0.50f);
   glEnd();

   glFlush();
}

void init(void){
    glClearColor(0.0f, 0.0f, 0.25f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-400.0, 400.0, -400.0, 400.0, 0.0, 0.0);
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(480, 480);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("181006912_Lab_3");

   init();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}

#include <windows.h>
#include <GL/glut.h>

void display() {

   glClear(GL_COLOR_BUFFER_BIT);

/////////////////////////////////////////////bottom-hexagon///////////////////////////////////////////
    glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(770.0f, 100.0f);
      glVertex2f(770.0f, 200.0f);
      glVertex2f(875.0f, 275.0f);
      glVertex2f(875.0f, 25.0f);
   glEnd();

    glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(875.0f, 25.0f);
      glVertex2f(875.0f, 275.0f);
      glVertex2f(980.0f, 200.0f);
      glVertex2f(980.0f, 100.0f);
   glEnd();


/////////////////////////////////////////////triangle///////////////////////////////////////////
    glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex2f(225.0f, 575.0f);
      glVertex2f(475.0f, 575.0f);
      glVertex2f(350.0f, 775.0f);
   glEnd();


/////////////////////////////////////////////square///////////////////////////////////////////
    glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(525.0f, 300.0f);
      glVertex2f(525.0f, 500.0f);
      glVertex2f(725.0f, 500.0f);
      glVertex2f(725.0f, 300.0f);
   glEnd();

/////////////////////////////////////////////top-hexagon///////////////////////////////////////////
    glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(20.0f, 800.0f);
      glVertex2f(20.0f, 900.0f);
      glVertex2f(125.0f, 975.0f);
      glVertex2f(125.0f, 725.0f);
   glEnd();

    glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(125.0f, 725.0f);
      glVertex2f(125.0f, 975.0f);
      glVertex2f(230.0f, 900.0f);
      glVertex2f(230.0f, 800.0f);
   glEnd();

   glFlush();
}
void init(void){
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1000,0,1000);

}
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(450, 450);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("shapes");
   init();
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}

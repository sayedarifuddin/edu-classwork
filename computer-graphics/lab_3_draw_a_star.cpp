#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
   glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

   glBegin(GL_TRIANGLES);                // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.0f, 1.0f);    // x, y
      glVertex2f( 0.5f, 0.0f);
      glVertex2f( -0.5f,  0.0f);
   glEnd();

      glBegin(GL_TRIANGLES);              // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.0f, -1.0f);    // x, y
      glVertex2f(0.5f, 0.0f);
      glVertex2f( -0.5f,  0.0f);
   glEnd();

   glBegin(GL_TRIANGLES);                 // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(1.0f, 0.0f);    // x, y
      glVertex2f(0.0f, 0.5f);
      glVertex2f(0.0f,  -0.5f);
   glEnd();

      glBegin(GL_TRIANGLES);              // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(-1.0f, 0.0f);    // x, y
      glVertex2f( 0.0f, 0.5f);
      glVertex2f( 0.0f,  -0.5f);
   glEnd();

   glBegin(GL_TRIANGLES);                 // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.5f, 0.0f);    // x, y
      glVertex2f(0.0f, 0.5f);
      glVertex2f(0.7f,  0.7f);
   glEnd();

     glBegin(GL_TRIANGLES);               // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(-0.5f, 0.0f);    // x, y
      glVertex2f(0.0f, -0.5f);
      glVertex2f(-0.7f,  -0.7f);
   glEnd();

   glBegin(GL_TRIANGLES);                 // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(-0.5f, 0.0f);    // x, y
      glVertex2f( 0.0f, 0.5f);
      glVertex2f( -0.7f,  0.7f);
   glEnd();

   glBegin(GL_TRIANGLES);                 // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.5f, 0.0f);    // x, y
      glVertex2f( 0.0f, -0.5f);
      glVertex2f( 0.7f,  -0.7f);
   glEnd();

   glFlush();  // Render now
}

void init (void){
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-400.0,400.0,-400.0,400.0,0.0,0.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);

   glutInitWindowSize(500, 500);   // Set the window's initial width & height
   glutInitWindowPosition(100, 100);   // Position the window's initial top-left corner             // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test");   // Create a window with the given title

   glutDisplayFunc(display);  // Register display callback handler for window re-paint
   glutMainLoop();           // Enter the event-processing loop
   return 0;
}

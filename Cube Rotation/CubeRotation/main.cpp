#include <GL\glut.h>

GLfloat xRotated, yRotated, zRotated;
GLint radius=1;


void redisplayFunc(void)
{

    glMatrixMode(GL_MODELVIEW);
    
    glClear(GL_COLOR_BUFFER_BIT);
    
    glLoadIdentity();
    
    glTranslatef(0.0,0.0,-4.5);

    glColor3f(0.8, 0.2, 0.1); 
   
    glRotatef(xRotated,5.0,0.0,0.0);
  
    glRotatef(yRotated,0.0,5.0,0.0);
  
    glRotatef(zRotated,0.0,0.0,5.0);
     
    glScalef(1.0,1.0,1.0);
    

   glutSolidCube(1);
  
     
    glFlush();        
    
}

void reshapeFunc(int x, int y)
{
    if (y == 0 || x == 0) return;  
    
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();
    
   
    gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,20.0);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);  
}

void idleFunc(void)
{
 
     yRotated += 0.01;
     
    redisplayFunc();
}


int main (int argc, char **argv)
{
    
    glutInit(&argc, argv);
   
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
  
    glutInitWindowSize(1000,800);

    glutCreateWindow("Cube Rotation (Hitesh Sathawane 14UG02013)");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    xRotated = yRotated = zRotated = 30.0;
     xRotated=33;
     yRotated=40;
    glClearColor(0.1,0.1,0.1,0.0);
   
    glutDisplayFunc(redisplayFunc);
    glutReshapeFunc(reshapeFunc);
    glutIdleFunc(idleFunc);
    
    glutMainLoop();
    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<GL/glut.h>

float vertices[][3] = {
        {100,200,140},
        {200,200,240},
        {1,1,1}
        };

float finalvertices[][3] = {{0,0,0},{0,0,0},{0,0,0}};
float multiplier[][3] = {{0,0,0},{0,0,0},{0,0,0}};

void multiply()
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                finalvertices[i][j] += multiplier[i][k]*vertices[k][j];
            }
        }

    }

}
float theta = 3.14;
void initializer()
{
    multiplier[0][0] = cos(theta);
    multiplier[0][1] = -sin(theta);
    multiplier[0][2] = 0;
    multiplier[1][0] = sin(theta);
    multiplier[1][1] = cos(theta);
    multiplier[1][2] = 0;
    multiplier[2][0] = 0;
    multiplier[2][1] = 0;
    multiplier[2][2] = 1;
    

}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    initializer();
    multiply();
    glColor3f(1.0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(vertices[0][0], vertices[1][0]);
        glVertex2f(vertices[0][1], vertices[1][1]);
        glVertex2f(vertices[0][2], vertices[1][2]);
    glEnd();



    glColor3f(1.0,0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(finalvertices[0][0], finalvertices[1][0]);
        glVertex2f(finalvertices[0][1], finalvertices[1][1]);
        glVertex2f(finalvertices[0][2], finalvertices[1][2]);
    glEnd();
/*
    glColor3f(1.0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(10,10);
        glVertex2f(60,20);
        glVertex2f(55, 55);
    glEnd();
*/

    glFlush();

}

void main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutCreateWindow("hdfd");
    glutDisplayFunc(display);
    //
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-500,500,-500,500);

    glutMainLoop();

}








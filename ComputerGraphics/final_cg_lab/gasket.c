#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>

typedef float point[3];
int n;

point v[] = {{0,0.3,1},{-1,0,0},{0,1.6,0},{1,0,0}};

void triangle(point a,point b,point c)
{
    glBegin(GL_POLYGON);
        
        glNormal3fv(a);
        glVertex3fv(a);
        glVertex3fv(b);
        glVertex3fv(c);
    glEnd();
}

void divide_triangle(point a,point b,point c,int m)
{
    int j;
    point v1,v2,v3;

    if(m>0)
    {

        for(j=0;j<3;j++) v1[j] = (a[j]+b[j])/2;
        for(j=0;j<3;j++) v2[j] = (a[j]+c[j])/2;
        for(j=0;j<3;j++) v3[j] = (b[j]+c[j])/2;
        divide_triangle(a,v1,v2,m-1);
        divide_triangle(b,v1,v3,m-1);
        divide_triangle(c,v2,v3,m-1);

    }
    else
    {

        triangle(a,b,c);
    }



}

void tetrahedron(int m)
{
    
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,0,0);

    divide_triangle(v[1],v[2],v[3],m);
    glColor3f(0,1.0,0);

    divide_triangle(v[0],v[1],v[2],m);
    glColor3f(0,0,1);


    divide_triangle(v[0],v[3],v[1],m);
    glColor3f(0,0.5,0.5);
    divide_triangle(v[0],v[2],v[3],m);



}

void display()
{
//cmlotfp

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(-2.0,2.0,-2.0,2.0,-2.0,2.0);
tetrahedron(n);
glFlush();
glutPostRedisplay();

}

int main(int argc, char** argv)
{

    //scanf("%d",&n);
    n=3;
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);



    glutCreateWindow(" ");
    glutDisplayFunc(display);


    glEnable(GL_DEPTH);

    glutMainLoop();
    



}

















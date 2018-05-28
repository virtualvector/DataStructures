#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
float vertices[][3]={{-1,-1,-1},
                    {-1,1,-1},
                    {1,1,-1},
                    {1,-1,-1},
                    {-1.0,-1.0,1.0,},
                    {-1.0,1.0,1.0},
                    {1.0,1.0,1.0},
                    {1.0,-1.0,1.0}};

float colors[][3]={{0.0,0.0,0.0},
                    {1.0,0.0,0.0},
                    {1.0,1.0,0.0},
                    {0.0,1.0,0.0},
                    {0.0,0.0,1.0},
                    {1.0,0.0,1.0},
                    {1.0,1.0,0.0},
                    {0.0,1.0,1.0}};

void polygon(int a,int b,int c,int d){
    glBegin(GL_POLYGON);
    glColor3fv(colors[a]);
    glVertex3fv(vertices[a]);
    glColor3fv(colors[b]);
    glVertex3fv(vertices[b]);
    glColor3fv(colors[c]);
    glVertex3fv(vertices[c]);
    glColor3fv(colors[d]);
    glVertex3fv(vertices[d]);
    glEnd();
}

void colorcube(){
    polygon(0,1,2,3);
    polygon(4,5,6,7);
    polygon(2,3,7,6);
    polygon(0,1,5,4);
    polygon(0,3,7,4);
    polygon(1,2,6,5);
}

static float theta[]={0.0,0.0,0.0};
static GLint axis=2;
static GLdouble viewer[]={0.0,0.0,5.0};

void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotatef(theta[0],1.0,0.0,0.0);
    glRotatef(theta[1],0.0,1.0,0.0);
    glRotatef(theta[2],0.0,0.0,1.0);
    colorcube();
    glFlush();
    glutSwapBuffers();
}

void spincube(){
    theta[axis]+=1.0;
    if(theta[axis]>360.0)theta[axis]-=360.0;
    glutPostRedisplay();
}

void mouse(int btn,int state,int x,int y){
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        axis=0;
    if(btn==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN)
        axis=1;
    if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
        axis=2;
}


void myReshape(int w,int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
        glOrtho(-2.0,2.0,-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
    else
        glOrtho(-2.0*(GLfloat)w/(GLfloat)h,2.0*(GLfloat)w/(GLfloat)h,-2.0,2.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
}

void main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
    glutCreateWindow("rotate cube");
    glClearColor(1.0,1.0,1.0,1.0);
    glutReshapeFunc(myReshape);
    glutDisplayFunc(display);
    glutIdleFunc(spincube);
    glutMouseFunc(mouse);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
}

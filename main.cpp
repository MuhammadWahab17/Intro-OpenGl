//
//  main.cpp
//  openGL_1
//
//  Created by Ch Muhammad Wahab on 23/04/2022.
//  Copyright © 2022 Ch Muhammad Wahab. All rights reserved.
//

#include <iostream>
#include <OpenGL/OpenGL.h>
#include<GLUT/GLUT.h>

//#include<GL/glut.h> //in windows

void myinit(){
    glClearColor(0, 0, 0, 0.0);
    glColor3f(1, 1, 1);
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, (GLint)640, 0, (GLint)480);
}

void draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glVertex2d(150, 363);
    glVertex2d(240, 370);
    glVertex2d(315, 320);
    glVertex2d(390, 260);
    glVertex2d(400, 180);
    glVertex2d(560, 150);
    glVertex2d(600, 285);
    glEnd();
    glFlush();
}

int main(int argc,char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("OPENGL_1");
    glutDisplayFunc(draw);
    myinit();
    glutMainLoop();
    return 0;
}

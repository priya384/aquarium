#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include<GL/glut.h>
#include<math.h>
void reshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
}

	
void tank()
{
	glColor3f(0,0,1);
/*top*/
	glBegin(GL_POLYGON);

	glVertex2f(200,450);
	glVertex2f(150,400);

	glVertex2f(450,400);
	glVertex2f(400,450);
	glEnd();
	
	//base
		glColor3f(0,1,1);
		glBegin(GL_POLYGON);
	glVertex2f(200,370);
	glVertex2f(200,200);
	glVertex2f(400,200);
	glVertex2f(400,370);
		glEnd();
    
	glColor3f(0,0,1);
		/*tank*/
	glBegin(GL_LINE_LOOP);
	glVertex2f(200,400);
	glVertex2f(200,200);
	glVertex2f(400,200);
	glVertex2f(400,400);
		glEnd();

		glColor3f(0,0,0.8);
		glBegin(GL_POLYGON);
	glVertex2f(350,480);
	glVertex2f(350,450);
	glVertex2f(400,450);
	glVertex2f(400,480);
		glEnd();
    

}
float h=40,k=5;
void eli()
{
	glColor3f(0.4,0.8,.80);
//	glBegin(GL_POLYGON);
	//
	glBegin(GL_POLYGON);
	for(float i=0;i<180;i++)
	glVertex2f(320+12*cos(i),200+5+6*sin(i));
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(float j=0;j<180;j++)
	glVertex2f(300+12*cos(j),200+5+6*sin(j));
	glEnd();
glColor3f(0.4,0.8,.80);
	glBegin(GL_POLYGON);
	for(float l=0;l<180;l++)
	glVertex2f(280+12*cos(l),200+5+6*sin(l));
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(float p=0;p<180;p++)
	glVertex2f(260+12*cos(p),200+5+6*sin(p));
	glEnd();

	glColor3f(0.4,0.8,.80);
	glBegin(GL_POLYGON);
	for(float r=0;r<180;r++)
	glVertex2f(385+12*cos(r),200+5+6*sin(r));
	glEnd();

}
float i;
void fish1()
{
	glColor3f(1,0.8,0);
	glBegin(GL_POLYGON);
	glVertex2f(300,300);
	glVertex2f(310,280);
	glVertex2f(320,270);
	glVertex2f(330,280);
	glVertex2f(335,290);
	glVertex2f(340,300);
	glVertex2f(330,320);
	glVertex2f(320,330);
	glVertex2f(310,320);
	glEnd();

	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2f(340,300);
	glVertex2f(350,270);
	glVertex2f(345,300);
	glVertex2f(350,330);
	glEnd();

	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2f(300,300);
	glVertex2f(310,300);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(308+2*cos(i),308+2*sin(i));
	glEnd();

}
void fish4()
{

	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2f(150+95,310-10);
	glVertex2f(120+95,340-20);
	glVertex2f(130+100,312-10);
	glVertex2f(120+95,300-30);
	glEnd();


	glColor3f(1,0.8,0);
	glBegin(GL_POLYGON);
	glVertex2f(300-60,300);
	glVertex2f(310-60,280);
	glVertex2f(320-60,270);
	glVertex2f(330-60,280);
	glVertex2f(335-60,290);
	glVertex2f(340-60,300);
	glVertex2f(330-60,320);
	glVertex2f(320-60,330);
	glVertex2f(310-60,320);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2f(280,280+20);
	glVertex2f(270,280+20);
	glEnd();

	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(270+2*cos(i),308+2*sin(i));
	glColor3f(0.8,0.8,0.8);
	for(float i=0;i<5000;i+=0.050)
		glVertex2f(250+40+h*cos(i),230+5+k*sin(i));
	glEnd();
/*	glBegin(GL_TRIANGLES);
	glVertex2f(240+h,230);
	glVertex2f(270+h,210);
	glVertex2f(270+h,240);
	glEnd();
*/	glColor3f(0.8,0.8,0.8);
	glBegin(GL_LINE_LOOP);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,240+5);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,235+5);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,230+5);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,225+5);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,220+5);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,215+5);
	glVertex2f(270+61-2,230+5);
	glVertex2f(300+61-2,210+5);
	glVertex2f(300+61-2,240+5);
	glEnd();
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_LINE_LOOP);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,240+5);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,235+5);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,230+5);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,225+5);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,220+5);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,215+5);
	glVertex2f(270+61-10,230+5);
	glVertex2f(300+61-10,210+5);
	glVertex2f(300+61-10,240+5);
	glEnd();

	
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_LINE_LOOP);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,240+5);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,235+5);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,230+5);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,225+5);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,220+5);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,215+5);
	glVertex2f(270+61-50,230+5);
	glVertex2f(300+61-50,210+5);
	glVertex2f(300+61-50,240+5);
	glEnd();


}


void bubble()
{
		glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+3*cos(i),310+3*sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+2.5*cos(i),320+2.5*sin(i));
	glEnd();
		glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+2*cos(i),330+2*sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+1.5*cos(i),340+1.5*sin(i));
	glEnd();
		glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+1*cos(i),350+1*sin(i));
	glEnd();

	//

			glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+20+3*cos(i),310+3*sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+20+2.5*cos(i),320+2.5*sin(i));
	glEnd();
		glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+20+2*cos(i),330+2*sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+20+1.5*cos(i),340+1.5*sin(i));
	glEnd();
		glBegin(GL_POLYGON);
	for(i=0;i<2*3.14;i+=0.5)
	glVertex2f(280+20+1*cos(i),350+1*sin(i));
	glEnd();

}	

void plant()
{
	
	glColor3f(0,0.8,0);
	glBegin(GL_POLYGON);
	glVertex2f(340+10,200);	
	glVertex2f(330+10,220);
	glVertex2f(350+10,210);
	glVertex2f(350+10,250);
	glVertex2f(360+10,210);
	glVertex2f(370+10,220);
	glVertex2f(380,240);
	glVertex2f(380,200);
	//glVertex2f(340,200);
	glEnd();

	glColor3f(0,0.8,0);
	glBegin(GL_POLYGON);
	glVertex2f(340-130,200);	
	glVertex2f(330-130,220);
	glVertex2f(350-130,210);
	glVertex2f(350-130,250);
	glVertex2f(360-130,210);
	glVertex2f(370-130,220);
	glVertex2f(380-130,240);
	glVertex2f(380-130,200);
	//glVertex2f(340,200);
	glEnd();
}
void display()
{
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	tank();
	//eli();
	plant();
	eli();
	fish1();
	fish4();
//	fish2();
	bubble();

	glFlush();
}


int main(int argc,char *argv[])
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("aquarium");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

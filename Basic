#include<glut.h>
#include<cmath>
void init ()
{
	glClearColor(1,1,1,0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,300,0,300);
}
void disp()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glBegin(GL_LINES);
			glVertex2f(50,150);
			glVertex2f(250,150);
			glVertex2f(50,50);
			//glVertex2f(50,150);
			glVertex2f(50,250);
			glColor3f(0,1,0);
			double ctr = 0.0;
		for(double i=0;i<200;i+=1)
		{
			double val =50*sinf(ctr);
			/*if(val>25)
				val=25;
			if(val<-25)
				val=-25;
			*/	
			glVertex2f(50+i,150+val);
			ctr+=0.03141592654;
		}
		glColor3f(0,0,1);
			 ctr = 0.0;
		for(double i=0;i<200;i+=1)
		{
			double val =50*sinf(ctr);
			if(val>25)
				val=25;
			if(val<-25)
				val=-25;				
			glVertex2f(50+i,150+val);
			ctr+=0.03141592654;
		}
		/*for(int i=0;i<150;i+=50)
		{
			glVertex2i(50+i,50);
			glVertex2i(50+i,150);
		}*/
	glEnd();
	glFlush();
}
void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(400,400);
	glutCreateWindow("OpenGL lines");
	init();
	glutDisplayFunc(disp);
	glutMainLoop();
}

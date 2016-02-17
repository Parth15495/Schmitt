#include<GL/glut.h>
#include<cmath>
#include<iostream>

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
			 std::cout<<"Enter ltp (0 to-50) and upt (0 to +50) values bw 50 to -50 \n";
			 double ltp,utp;
			 std::cin>>ltp>>utp;
		for(double i=0;i<200;i+=1)
		{
			double val =50*sinf(ctr);
			if(val>utp)
				val=utp;
			if(val<ltp)
				val=ltp;
			glVertex2f(50+i,150+val);
			ctr+=0.03141592654;
		}
		/*for(int i=0;i<150;i+=50)
		{
			glVertex2i(50+i,50);
			glVertex2i(50+i,150);
		}*/
	glEnd();
	glColor3f(0.5,0.5,0);
	char c[]="Schmitt Trigger Stimulation";
	int i=0;
	glRasterPos2i(40,30);
	while(c[i]!='\0')
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,c[i++]);
	glFlush();

}
int main(int argc,char **argv)
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

#include<stdio.h>
#include<string.h>
#include<GL/glut.h>
int flag=2,w,t1=1,t2=35,t3=61,t4=70,t5=96,tw1=1,tw2=11, tbr1=1,tbr2=51,tbr3=101,tl1=1,tl2=51,tl3=101;
float x1,x2,x3,x=0,y,ii,cl,xp,yp,cwl,cw1, a,b,c,d,e;
int i;
float x1;
float wi=0;
float rt=0;

void timera(int v)//text
{
	
	a=a+0.2;

		a+=0.2;
	
	glutPostRedisplay();
	glutTimerFunc(1000000000,timera,0);
}

//TIMER FOR BOAT HOUSE
void timer(int v)
{
	
	x=x+0.05;
	if(x>=10)
	{
		x=0;
	}
	else
	{
		x+=0.2;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timer,0);
}
void timerc(int v)
{
	
	cl=cl+0.05;
	if(cl>=100)
	{
		cl=0;
	}
	else
	{
		cl+=0.1;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timerc,0);
}
void timer3(int v)
{
	
	y=y+0.05;
	if(y>=2)
	{
		y=0;
	}
	else
	{
		y+=0.05;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timer3,0);
}

//VAGAMON TIMER
void timerp(int v)
{
	
	xp=xp+0;
	if(yp>=65)
	{
		
	}
	else
	{
		xp+=1;
		yp+=1;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timerp,0);
}
void timercw(int v)
{
	
	cw1=cw1+0.1;  
	if(cw1>=80)
	{
		cw1=0;
	}
	else
	{
		cw1+=0.2;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timercw,0);
}
//BOAT RACE TIMER
void timer1(int v)
{
	x1=x1+.01;
	if(x1>=100)
	{
		x1=0.6;	
	}
	else
	{
		x1=x1+0.6;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timer1,0);
}

void timer2(int v)
{
	x2=x2+.4;
	if(x2>=200)
	{
		x2=0;	
	}
	else
	{
		x2=x2+0.4;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timer2,0);
}
void timer4(int v)
{
	x3=x3+0.01;
	if(x3>=2)
	{
		x3=0;	
	}
	else
	{
		x3=x3+0.5;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,timer4,0);
}
//FUNCTION_FOR_BIRDS_WING_TIMER
void birdwings_timer(int v)
{
	if(wi<=3)
	{
		wi+=0.5;	
	}
	else
	{
		wi=0;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,birdwings_timer,0);
}


//FUNCTION_FOR_BOATS_ROWING_TIMER
void boatrowing_timer(int v)
{
	if(rt<=10)
	{
		rt+=0.8;	
	}
	else
	{
		rt=0;
	}
	glutPostRedisplay();
	glutTimerFunc(1000000000,boatrowing_timer,0);
}


void printbh(int x,int y,char *string,int font)//text for display boat house text
 {
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}
//FUNCTION_FOR_GRASS
void grass_background(){
	
	//LEFT_PART_OF_BUILDING
	//GRASS_ORDER_STARTS_FROM_RIGHT_TO_LEFT
	//GRASS_LIGHT_1
	glPushMatrix();
	glTranslatef(30,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(199,171,61);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//GRASS_LIGHT_2
	glPushMatrix();	
	glTranslatef(22,80,0.0);
	glRotatef(15, 0, 0, 1);
	glScalef(0.4,1.0,0);
	glColor3ub(199,171,61);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_LIGHT_3
	glPushMatrix();	
	glTranslatef(17,72,0.0);
	glRotatef(20, 0, 0, 1);
	glScalef(0.35,0.9,0);
	glColor3ub(199,171,61);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_LIGHT_4
	glPushMatrix();
	glTranslatef(9,66,0.0);
	glScalef(0.6,0.7,0);
	glColor3ub(199,171,61);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_LIGHT_5
	glPushMatrix();
	glTranslatef(3,59,0.0);
	glScalef(0.6,0.7,0);
	glColor3ub(199,171,61);
	glutSolidSphere(6,100,100);
	glPopMatrix();
	
	//LEFT_GRASS_DARK_BASE_TRIANGLE
	glBegin(GL_POLYGON);
	glColor3ub(177,154,50);
	glVertex2i(28,70);
	glVertex2i(28,60);
	glVertex2i(8,60);
	glEnd();	
	//GRASS_ORDER_STARTS_FROM_RIGHT_TO_LEFT
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(30,80,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(177,154,50);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//GRASS_DARK_2
	glPushMatrix();	
	glTranslatef(23,69,0.0);
	glRotatef(20, 0, 0, 1);
	glScalef(0.5,1.0,0);
	glColor3ub(177,154,50);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_DARK_3
	glPushMatrix();	
	glTranslatef(18,60,0.0);
	glRotatef(30, 0, 0, 1);
	glScalef(0.5,0.9,0);
	glColor3ub(177,154,50);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_DARK_3
	glPushMatrix();
	glTranslatef(9,60,0.0);
	glScalef(0.6,0.7,0);
	glColor3ub(177,154,50);
	glutSolidSphere(5,100,100);
	glPopMatrix();
	
	
	//RIGHT_PART_OF_BUILDING
	//GRASS_ORDER_STARTS_FROM_RIGHT_TO_LEFT
	//GRASS_LIGHT_1
	glPushMatrix();
	glTranslatef(170,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(199,171,61);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//GRASS_LIGHT_2
	glPushMatrix();	
	glTranslatef(178,80,0.0);
	glRotatef(-15, 0, 0, 1);
	glScalef(0.4,1.0,0);
	glColor3ub(199,171,61);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_LIGHT_3
	glPushMatrix();	
	glTranslatef(183,72,0.0);
	glRotatef(-20, 0, 0, 1);
	glScalef(0.35,0.9,0);
	glColor3ub(199,171,61);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_LIGHT_4
	glPushMatrix();
	glTranslatef(191,66,0.0);
	glScalef(0.6,0.7,0);
	glColor3ub(199,171,61);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_LIGHT_5
	glPushMatrix();
	glTranslatef(197,59,0.0);
	glScalef(0.6,0.7,0);
	glColor3ub(199,171,61);
	glutSolidSphere(6,100,100);
	glPopMatrix();	
	//RIGHT_GRASS_DARK_BASE_TRIANGLE
	glBegin(GL_POLYGON);
	glColor3ub(177,154,50);
	glVertex2i(172,70);
	glVertex2i(172,60);
	glVertex2i(192,60);
	glEnd();	
	//GRASS_ORDER_STARTS_FROM_LEFT_TO_RIGHT
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(170,80,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(177,154,50);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//GRASS_DARK_2
	glPushMatrix();	
	glTranslatef(177,69,0.0);
	glRotatef(-20, 0, 0, 1);
	glScalef(0.5,1.0,0);
	glColor3ub(177,154,50);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_DARK_3
	glPushMatrix();	
	glTranslatef(182,60,0.0);
	glRotatef(-30, 0, 0, 1);
	glScalef(0.5,0.9,0);
	glColor3ub(177,154,50);	
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_DARK_3
	glPushMatrix();
	glTranslatef(191,60,0.0);
	glScalef(0.6,0.7,0);
	glColor3ub(177,154,50);
	glutSolidSphere(5,100,100);
	glPopMatrix();

}

//FUNCTION_FOR_ARCH_STAND
void building_background()
{
	//TOP_ROOF_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2i(0,195);
	glVertex2i(0,200);
	glVertex2i(200,200);
	glVertex2i(200,195);
	glEnd();	
	//2nd_TOP_ROOF
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2i(30,195);
	glVertex2i(170,195);
	glVertex2i(170,180);
	glVertex2i(30,180);
	glEnd();

	//LEFT_BACK_PILLER_SHADOW
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2f(51.2,180);
	glVertex2f(46.2,180);
	glVertex2f(46.2,90);
	glVertex2f(51.2,90);
	glEnd();
	//LEFT_BACK_PILLER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2i(50,180);
	glVertex2i(45,180);
	glVertex2i(45,90);
	glVertex2i(50,90);
	glEnd();
	//RIGHT_BACK_PILLAR_SHADOW
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2f(153.8,180);
	glVertex2f(148.8,180);
	glVertex2f(148.8,90);
	glVertex2f(153.8,90);
	glEnd();
	//RIGHT_BACK_PILLAR
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(155,180);
	glVertex2f(150,180);
	glVertex2f(150,90);
	glVertex2f(155,90);
	glEnd();	
	//LEFT_BASE_SLOPE_UPPER
	glBegin(GL_POLYGON);
	glColor3ub(246,212,125);
	glVertex2i(46,90);
	glVertex2i(57.5,99.5);
	glVertex2i(38,99.5);
	glVertex2i(28,90);
	glEnd();
	//LEFT_PILLAR_SHADOW
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2i(37,180);
	glVertex2i(42,180);
	glVertex2i(42,90);
	glVertex2i(37,90);
	glEnd();
	//LEFT_PILLAR
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2i(35,180);
	glVertex2i(40,180);
	glVertex2i(40,90);
	glVertex2i(35,90);
	glEnd();					
	//LEFT_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2i(28,90);
	glVertex2i(46,90);
	glVertex2i(46,60);
	glVertex2i(28,60);
	glEnd();
	//LEFT_BASE_SLOPE_SIDE
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2i(46,90);
	glVertex2i(57.5,99.5);
	glVertex2i(60,90);
	glVertex2i(46,60);
	glEnd();
	
	
	//RIGHT_BASE_SLOPE_UPPER
	glBegin(GL_POLYGON);
	glColor3ub(246,212,125);
	glVertex2i(154,90);
	glVertex2i(172,90);
	glVertex2f(162,99.7);
	glVertex2f(143,99.7);
	glEnd();
	//RIGHT_PILLAR_SHADOW
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2i(163.5,180);
	glVertex2i(158.5,180);
	glVertex2i(158.5,90);
	glVertex2i(163.5,90);
	glEnd();
	//RIGHT_PILLAR
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2i(165,180);
	glVertex2i(160,180);
	glVertex2i(160,90);
	glVertex2i(165,90);
	glEnd();
	//RIGHT_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2i(172,90);
	glVertex2i(154,90);
	glVertex2i(154,60);
	glVertex2i(172,60);
	glEnd();
	//RIGHT_BASE_SLOPE_SIDE
	glBegin(GL_POLYGON);
	glColor3ub(234,204,108);
	glVertex2i(154,90);
	glVertex2f(143,99.5);
	glVertex2i(140,90);
	glVertex2i(154,60);
	glEnd();		
	
}


//FUNCTION_FOR_STAIRS
void stairs_background(){
	
	//STAIRS_ORDER_STARTS_FROM_FRONT_TO_BACK
	//ROW_8_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(57,99);
	glVertex2f(143,99);
	glEnd();
	//ROW_8_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(57,94);
	glVertex2f(57,99);
	glVertex2f(143,99);
	glVertex2f(143,94);
	glEnd();
	
	//ROW_7_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(55.5,94);
	glVertex2f(144.5,94);
	glEnd();
	//ROW_7_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(55.5,89);
	glVertex2f(55.5,94);
	glVertex2f(144.5,94);
	glVertex2f(144.5,89);
	glEnd();
	
	//ROW_6_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(54,89);
	glVertex2f(146,89);
	glEnd();
	//ROW_6_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(54,84);
	glVertex2f(54,89);
	glVertex2f(146,89);
	glVertex2f(146,84);
	glEnd();
	
	//ROW_5_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(52.5,84);
	glVertex2f(147.5,84);
	glEnd();
	//ROW_5_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(52.5,79);
	glVertex2f(52.5,84);
	glVertex2f(147.5,84);
	glVertex2f(147.5,79);
	glEnd();
	
	//ROW_4_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(51,79);
	glVertex2f(149,79);
	glEnd();
	//ROW_4_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(51,74);
	glVertex2f(51,79);
	glVertex2f(149,79);
	glVertex2f(149,74);
	glEnd();	
	
	//ROW_3_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(49.5,74);
	glVertex2f(150.5,74);
	glEnd();
	//ROW_3_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(49.5,69);
	glVertex2f(49.5,74);
	glVertex2f(150.5,74);
	glVertex2f(150.5,69);
	glEnd();
	
	//ROW_2_OUTTER					
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(48,69);
	glVertex2f(152,69);
	glEnd();
	//ROW_2_INNER					
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(48,64);
	glVertex2f(48,69);
	glVertex2f(152,69);
	glVertex2f(152,64);
	glEnd();
	
	//ROW_1_OUTTER
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.875,0.792,0.248);
	glVertex2f(46.5,64);
	glVertex2f(153.5,64);
	glEnd();
	//ROW_1_INNER
	glBegin(GL_POLYGON);
	glColor3ub(252,235,162);
	glVertex2f(46.5,59.5);
	glVertex2f(46.5,64);
	glVertex2f(153.5,64);
	glVertex2f(153.5,59.5);
	glEnd();

	
	
}

//FUNCTION_FOR_DOOR
void door_background()
{
	//DOOR
	glBegin(GL_POLYGON);
	glColor3f(0.320,0.507,0.617);
	glVertex2f(65,99.5);
	glVertex2f(135,99.5);
	glVertex2f(135,150);
	glVertex2f(65,150);
	glEnd();			
	
	//DOOR_FRAMES
	//DOOR_FRAME_LEFT
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3ub(39,78,75);
	glVertex2f(65,99.5);
	glVertex2f(65,150);
	glEnd();
	//DOOR_FRAME_RIGHT
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glVertex2f(135,99.5);
	glVertex2f(135,150);
	glEnd();	
	//DOOR_MIDDLE_SPLIT_LINE
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3ub(39,78,75);
	glVertex2f(100,99.5);
	glVertex2f(100,150);
	glEnd();
	
	//WINDOW_LEFT
	glBegin(GL_POLYGON);
	glColor3ub(39,78,75);
	glVertex2f(70,125);
	glVertex2f(95,125);
	glVertex2f(95,145);
	glVertex2f(70,145);
	glEnd();
	//WINDOW_LEFT_FRAME
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3ub(114,157,164);
	glVertex2f(70,125);
	glVertex2f(95,125);
	glVertex2f(95,145);
	glVertex2f(70,145);
	glEnd();
	//WINDOW_LEFT_INNER_SHADES_1
	glBegin(GL_POLYGON);
	glColor3ub(60,95,89);
	glVertex2f(70.5,125.5);
	glVertex2f(74,125.5);
	glVertex2f(94.5,144.5);
	glVertex2f(91,144.5);
	glEnd();
	//WINDOW_LEFT_INNER_SHADES_1
	glBegin(GL_POLYGON);
	glColor3ub(60,95,89);
	glVertex2f(80,125.5);
	glVertex2f(86,125.5);
	glVertex2f(94.75,134.5);
	glVertex2f(94.75,140.5);
	glEnd();
	
	//WINDOW_RIGHT
	glBegin(GL_POLYGON);
	glColor3ub(39,78,75);
	glVertex2f(105,125);
	glVertex2f(130,125);
	glVertex2f(130,145);
	glVertex2f(105,145);
	glEnd();
	//WINDOW_RIGHT_FRAME
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glColor3ub(114,157,164);
	glVertex2f(105,125);
	glVertex2f(130,125);
	glVertex2f(130,145);
	glVertex2f(105,145);
	glEnd();
	//WINDOW_RIGHT_INNER_SHADES_1
	glBegin(GL_POLYGON);
	glColor3ub(60,95,89);
	glVertex2f(105.25,144.75);
	glVertex2f(105.25,136.75);
	glVertex2f(115,125.5);
	glVertex2f(123,125.5);	
	glEnd();
	//WINDOW_RIGHT_INNER_SHADES_2
	glBegin(GL_POLYGON);
	glColor3ub(60,95,89);
	glVertex2f(118,144.5);
	glVertex2f(122,144.5);
	glVertex2f(129.75,135.5);
	glVertex2f(129.75,130);
	glEnd();
	
}

void window_background(){
	//WINDOW_LEFT
	glBegin(GL_POLYGON);
	glColor3ub(114,157,164);
	glVertex2f(0,110);
	glVertex2f(0,163);
	glVertex2f(20,163);
	glVertex2f(20,110);
	glEnd();
	//LEFT_WINDOW_FRAME_INNER_VERTICAL_SHADOW
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3ub(90,130,132);
	glVertex2f(9.2,163);
	glVertex2f(9.2,110);
	glEnd();
	//LEFT_WINDOW_FRAME_INNER_HORIZONTAL_SHADOW
	glLineWidth(10);
	glBegin(GL_LINE_LOOP);
	glColor3ub(90,130,132);
	glVertex2f(0,148);
	glVertex2f(20,148);
	glEnd();		
	//LEFT_WINDOW_FRAME_OUTTER
	glLineWidth(6);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.996,0.964,0.726);
	glVertex2f(0,110);
	glVertex2f(0,163);
	glVertex2f(20,163);
	glVertex2f(20,110);
	glEnd();
	//LEFT_WINDOW_FRAME_INNER_VERTICAL
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.996,0.964,0.726);
	glVertex2f(10,163);
	glVertex2f(10,110);
	glEnd();
	//LEFT_WINDOW_FRAME_INNER_HORIZONTAL
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.996,0.964,0.726);
	glVertex2f(0,150);
	glVertex2f(20,150);
	glEnd();
	
	//WINDOW_RIGHT
	glBegin(GL_POLYGON);
	glColor3ub(114,157,164);
	glVertex2f(200,110);
	glVertex2f(200,163);
	glVertex2f(180,163);
	glVertex2f(180,110);
	glEnd();	
	//RIGHT_WINDOW_FRAME_INNER_VERTICAL_SHADOW
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3ub(90,130,132);
	glVertex2f(190.7,163);
	glVertex2f(190.7,110);
	glEnd();
	//RIGHT_WINDOW_FRAME_INNER_HORIZONTAL_SHADOW
	glLineWidth(10);
	glBegin(GL_LINE_LOOP);
	glColor3ub(90,130,132);
	glVertex2f(200,148);
	glVertex2f(180,148);
	glEnd();
	//RIGHT_LINE_FRAMES_OUTTER
	glLineWidth(6);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.996,0.964,0.726);
	glVertex2f(200,110);
	glVertex2f(200,163);
	glVertex2f(180,163);
	glVertex2f(180,110);
	glEnd();
	//RIGHT_WINDOW_FRAME_INNER_VERTICAL
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.996,0.964,0.726);
	glVertex2f(190,163);
	glVertex2f(190,110);
	glEnd();
	//RIGHT_WINDOW_FRAME_INNER_HORIZONTAL	
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.996,0.964,0.726);
	glVertex2f(200,150);
	glVertex2f(180,150);
	glEnd();
}


//FUNCTION_FOR_DEFAULT_GROUND_COLOUR
void groundb_background(){
	
	//background
	glBegin(GL_POLYGON);
	glColor3ub(153,140,48);
	glVertex2i(0,0);
	glVertex2i(200,0);
	glVertex2i(200,60);
	glVertex2i(0,60);
	glEnd();
		
}


//FUNCTION_FOR PATH_WAY
void pathway_background(){
	//PATH_WAY
	glBegin(GL_POLYGON);
	glColor3ub(246,212,125);
	glVertex2f(43,60);
	glVertex2f(157,60);
	glVertex2f(183,0);
	glVertex2f(16,0);
	glEnd();
	
	//PATH_WAY_UPPER_SHADOW
	glBegin(GL_POLYGON);
	glColor3ub(246,212,125);
	glVertex2f(154,62);
	glVertex2f(157,62);
	glVertex2f(183,0);
	glVertex2f(178,0);
	glEnd();		
	//PATH_WAY_SHADOW_RIGHT
	glBegin(GL_POLYGON);
	glColor3ub(219,188,98);
	glVertex2f(154,57.5);
	glVertex2f(154,62);
	glVertex2f(178,0);
	glVertex2f(174,0);
	glEnd();	
	
	//PATH_WAY_LEFT_UPPER_SHADOW
	glBegin(GL_POLYGON);
	glColor3ub(246,212,125);
	glVertex2f(43,62);
	glVertex2f(46,62);
	glVertex2f(21,0);
	glVertex2f(16,0);
	glEnd();
	//PATH_WAY_SHADOW_LEFT
	glBegin(GL_POLYGON);
	glColor3ub(219,188,98);
	glVertex2f(46,57.5);
	glVertex2f(46,62);
	glVertex2f(21,0);
	glVertex2f(25,0);
	glEnd();
	
	//PATH_WAY_BOTTOM
	glBegin(GL_POLYGON);
	glColor3ub(246,212,125);
	glVertex2f(0,0);
	glVertex2f(0,2);
	glVertex2f(200,2);
	glVertex2f(200,0);
	glEnd();	
	
}


void background()
{
	
	
	//BUILDING_BACKGROUND
	glBegin(GL_POLYGON);
	glColor3f(0.996,0.726,0.148);
	glVertex2i(0,60);
	glVertex2i(0,200);
	glVertex2i(200,200);
	glVertex2i(200,60);
	glEnd();
	
	//FUNCTION_CALL_FOR_GRASS
	grass_background();
	
	
	//FUNCTION_CALL_FOR_ARCH_STAND
	building_background();
	
	
	//FUNCTION_STAIRS
	stairs_background();
		
	
	//FUNCTION_CALL_FOR_DOOR
	door_background();
			
	
	//FUNCTION_CALL_FOR_WINDOW
	window_background();
	
	//FUNCTION_CALL_FOR_DEFAULT_GROUND_COLOUR
	groundb_background();	
	
	
	//FUNCTION_CALL_FOR_PATH
	pathway_background();
	
	
}

//FUNCTION_FOR_HAIR_CURL_OUTTER
void hair_curl_outter(){
	//OUTTER_CURL_ON_FACE
	//LEFT_TO_RIGHT
	//CURL_1 
	glPushMatrix();
	glTranslatef(64.5,108,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.129,0.129,0.129);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_2 
	glPushMatrix();
	glTranslatef(63.5,111,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_3
	glPushMatrix();
	glTranslatef(63,114,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_4
	glPushMatrix();
	glTranslatef(62.7,117.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_5
	glPushMatrix();
	glTranslatef(62.7,121,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_6
	glPushMatrix();
	glTranslatef(63,124,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_7
	glPushMatrix();
	glTranslatef(64,126,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_8
	glPushMatrix();
	glTranslatef(64,128,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_9
	glPushMatrix();
	glTranslatef(66,131,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_10
	glPushMatrix();
	glTranslatef(68,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_11
	glPushMatrix();
	glTranslatef(70,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(5,100,100);
	glPopMatrix();
	
	//CURL_12
	glPushMatrix();
	glTranslatef(73,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(5,100,100);
	glPopMatrix();
	
	//CURL_13
	glPushMatrix();
	glTranslatef(76,131,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(5,100,100);
	glPopMatrix();
	
	//CURL_14
	glPushMatrix();
	glTranslatef(78,129,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_15
	glPushMatrix();
	glTranslatef(79,126,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_16
	glPushMatrix();
	glTranslatef(79.8,122,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_17
	glPushMatrix();
	glTranslatef(79.7,119.2,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_18
	glPushMatrix();
	glTranslatef(79.5,115.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_19
	glPushMatrix();
	glTranslatef(79.2,113,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_20
	glPushMatrix();
	glTranslatef(78.4,110.2,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//CURL_21
	glPushMatrix();
	glTranslatef(77.5,108,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();


}


//FUNCTION_FOR_HAIR_CURL_INNER
void hair_curl_inner(){
	//INNER_CURL_ON_FACE
	//LEFT_TO_RIGHT
	//CURL_-4 
	glPushMatrix();
	glTranslatef(64.5,116.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_-3 
	glPushMatrix();
	glTranslatef(65,119,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_-2 
	glPushMatrix();
	glTranslatef(66,121.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_-1 
	glPushMatrix();
	glTranslatef(67.5,123.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_0 
	glPushMatrix();
	glTranslatef(69.2,125,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_1 
	glPushMatrix();
	glTranslatef(71,125.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_2 
	glPushMatrix();
	glTranslatef(73,124.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_3
	glPushMatrix();
	glTranslatef(75,123,0.0);
	glScalef(0.5,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_4
	glPushMatrix();
	glTranslatef(76.5,120.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	//CURL_5
	glPushMatrix();
	glTranslatef(77.5,117,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();				
}



void hair_base(){
	//OUTTER_CIRCLE
	glPushMatrix();
	glTranslatef(71,117,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	//glColor3f(0,0,0);
	glutSolidSphere(23,100,100);
	glPopMatrix();
	
}

/*void esparkle(float a,float b)
{
	glPushMatrix();
	glTranslatef(a,b,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.05,0.05,0.0);
	glColor3f(1,1,1);
	glutSolidSphere(4,100,100);
	glPopMatrix();
}
*/
void ghair()
{
	
	//RECTANGLE_
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(92.5,110);
	glVertex2f(108,110);
	glVertex2f(107.9,93);
	glVertex2f(92.5,93);
	glEnd();
	
	//ORDERING_START_FROM_LEFT_TO_RIGHT
	//BOTTOM_CURL_1
	glPushMatrix();
	glTranslatef(94.1,94.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//BOTTOM_CURL_2
	glPushMatrix();
	glTranslatef(96.3,94.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//BOTTOM_CURL_3
	glPushMatrix();
	glTranslatef(103.8,94.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//BOTTOM_CURL_4
	glPushMatrix();
	glTranslatef(106.4,94.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
/*
//sphere on left side 
glPushMatrix();
glTranslatef(67,140,0.0);
glRotatef(90,0.0,0.0,1.0);
glScalef(1.2,1.2,0.0);
glColor3f(0,0,0);
glutSolidSphere(4,100,100);
glPopMatrix();
*/

}

void gfhair()
{
//sphere on left side 
	glPushMatrix();
	glTranslatef(96,119,0.0);
	glRotatef(60,0.0,0.0,1.0);
	glScalef(1.4,0.6,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();

//left side	
//triangle
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(99,123.5);
	glVertex2f(95,110);
	glVertex2f(92.5,115);
	//glVertex2f(62,93);
	glEnd();

//rectangle
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(96,115);
	glVertex2f(96,95);
	glVertex2f(92.5,95);
	glVertex2f(92.5,115);
	glEnd();

//right side
//sphere
	glPushMatrix();
	glTranslatef(103,121,0.0);
	glRotatef(-30,0.0,0.0,1.0);
	glScalef(1.4,0.7,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();

//rectangle
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(106,119);
	glVertex2f(106,95);
	glVertex2f(108,95);
	glVertex2f(108,119);
	glEnd();
}
void gface()
{
	glPushMatrix();
	glTranslatef(101,110,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(1.5,3.5,0.0);
	glColor3f(0.925,0.769,0.433);
	glutSolidSphere(4,100,100);
	glPopMatrix();
}
void gshirt()
{
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2i(95,90);
	glVertex2i(107,90);
	glVertex2i(106,70);
	glVertex2i(96,70);
	glEnd();
	
	//shirt left side
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(95,90);
	glVertex2f(94.8,80);
	glVertex2f(93,80);
	glVertex2f(100,90);
	glVertex2f(100,95);
	glVertex2f(100,90);
	glEnd();

//shirt right side
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(107,90);
	glVertex2f(107.2,80);
	glVertex2f(109,80);
	glVertex2f(101,90);
	glVertex2f(102.65,95);
	glVertex2f(100,95);
	glVertex2f(100,90);
	glVertex2f(107,90);
	glEnd();


//collar
//collar left
	glLineWidth(0.2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.304,0.472,0.609);
	glVertex2f(101,91);
	glVertex2f(100,88);
	glEnd();

	glLineWidth(0.2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.304,0.472,0.609);
	glVertex2f(100,88);
	glVertex2f(98,93);
	glEnd();

//collar right
	glLineWidth(0.2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.304,0.472,0.609);
	glVertex2f(101,91);
	glVertex2f(102,88);
	glEnd();

	glLineWidth(0.2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.304,0.472,0.609);
	glVertex2f(102,88);
	glVertex2f(104,93);
	glEnd();
}

void gneck()
{
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.765,0.433);
	glVertex2i(100,95);
	glVertex2i(100,100);
	glVertex2i(102,100);
	glVertex2i(102,95);
	glVertex2i(101,91);
	glEnd();
}
void gbelt()
{
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(95.8,70);
	glVertex2f(106.2,70);
	glVertex2f(106.2,71.5);
	glVertex2f(95.8,71.5);
	glEnd();
}
void gpant()
{
	glBegin(GL_POLYGON);
	glColor3f(0.09,0.145,0.388);
	glVertex2f(95.8,70);
	glVertex2f(106.2,70);
	glVertex2f(108.2,50);
	glVertex2f(93,50);
	glEnd();

}
void gleg()
{
//leg left
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.765,0.433);
	glVertex2f(96.5,50);
	glVertex2f(99,50);
	glVertex2f(99,40);
	glVertex2f(96.5,40);
	glEnd();

//leg right
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.765,0.433);
	glVertex2f(103,50);
	glVertex2f(105.5,50);
	glVertex2f(105.5,40);
	glVertex2f(103,40);
	glEnd();	
}
void gsock()
{
//sock 1
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(96.35,40);
	glVertex2f(99,40);
	glVertex2f(99,25);
	glVertex2f(96.35,25);
	glEnd();

//sock 2
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(103,40);
	glVertex2f(105.6,40);
	glVertex2f(105.6,25);
	glVertex2f(103,25);
	glEnd();
}


//FUNCTION_FOR_GIRL_SHOES
void gshoes(){
	
	
	//LEFT_SHOE
	//LEFT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(97.9,25,0.0);
	glScalef(0.68,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(2,100,100);
	glPopMatrix();	
	//LEFT_SHOE_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(99.4,25);
	glVertex2f(96.4,25);
	glVertex2f(95.7,19);
	glVertex2f(100,19);	
	glEnd();
	//LEFT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(97.9,18.5,0.0);
	glScalef(0.55,1,0);
	glColor3f(0.27,0.27,0.27);
	glutSolidSphere(3.8,100,100);
	glPopMatrix();
	//LEFT_SHOE_FRONT_SPHERE_INNER
	glPushMatrix();
	glTranslatef(97.83,19.5,0.0);
	glScalef(0.6,1.2,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	//LEFT_SHOE_FRONT_SPHERE_SOCKS
	glPushMatrix();
	glTranslatef(97.9,23.2,0.0);
	glScalef(0.65,1.2,0);
	glColor3f(1,1,1);
	glutSolidSphere(2,100,100);
	glPopMatrix();
	
	//RIGHT_SHOE
	//RIGHT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(104.3,25,0.0);
	glScalef(0.68,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(2,100,100);
	glPopMatrix();	
	//RIGHT_SHOE_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(105.8,25);
	glVertex2f(102.8,25);
	glVertex2f(102.6,19);
	glVertex2f(106.5,19);	
	glEnd();
	//RIGHT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(104.4,18.5,0.0);
	glScalef(0.55,1,0);
	glColor3f(0.27,0.27,0.27);
	glutSolidSphere(3.8,100,100);
	glPopMatrix();
	//RIGHT_SHOE_FRONT_SPHERE_INNER
	glPushMatrix();
	glTranslatef(104.23,19.5,0.0);
	glScalef(0.6,1.2,0);
	glColor3f(0,0,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	//RIGHT_SHOE_FRONT_SPHERE_SOCKS
	glPushMatrix();
	glTranslatef(104.3,23.2,0.0);
	glScalef(0.65,1.2,0);
	glColor3f(1,1,1);
	glutSolidSphere(2,100,100);
	glPopMatrix();
		
}


void gmouth()
{
//mouth(red)
	glPushMatrix();
	glTranslatef(101,102,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.4,0.7,0.0);
	glColor3f(0.925,0.156,0.101);
	glutSolidSphere(4,100,100);
	glPopMatrix();

//mouth(rectangle for cutting it)
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(99,101.5);
	glVertex2f(103,101.5);
	glVertex2f(103,105);
	glVertex2f(99,105);
	glEnd();

//teeth
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(100,101.5);
	glVertex2f(102,101.5);
	glVertex2f(101.5,100.8);
	glVertex2f(100.5,100.8);
	glEnd();
}
void gnose()
{
	glLineWidth(0.5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(101,107);
	glVertex2f(102,105);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(102,105);
	glVertex2f(101,105);
	glEnd();
}

void geyes()
{
	
//left eye
	glPushMatrix();
	glTranslatef(98,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.35,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
//LEFT_EYE_SPARKLE
	glPushMatrix();
	glTranslatef(98,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.35,0.0);
	glColor3f(0.47,0.47,0.47);
	glutSolidSphere(1.2,100,100);
	glPopMatrix();	

//right eye
	glPushMatrix();
	glTranslatef(104,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.35,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
//RIGHT_EYE_SPARKLE
	glPushMatrix();
	glTranslatef(104,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.35,0.0);
	glColor3f(0.47,0.47,0.47);
	glutSolidSphere(1.2,100,100);
	glPopMatrix();	

//eyebrows
//left
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(97,114.5);
	glVertex2f(98.5,114.5);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(98.5,114.5);
	glVertex2f(99,114);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(97,114.5);
	glVertex2f(96.5,114);
	glEnd();

//right
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(103.5,114.5);
	glVertex2f(105,114.5);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(103.5,114.5);
	glVertex2f(103,114);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(105,114.5);
	glVertex2f(105.5,114);
	glEnd();
}

void ghands()
{
	
	//LEFT_HAND
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(93,80);
	glVertex2f(94.5,80);
	glVertex2f(94.5,67);
	glVertex2f(93.5,67);
	glEnd();
	//LEFT_FINGER_LEFT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(93.7,69);
	glVertex2f(93,63.5);
	glVertex2f(93.7,60);	
	glEnd();
	//LEFT_FINGER_MIDDLE_PART
	glBegin(GL_POLYGON);
	glVertex2f(93.7,69);
	glVertex2f(93.7,60);
	glVertex2f(94.1,60);
	glVertex2f(94.1,69);
	glEnd();
	//LEFT_FINGER_RIGHT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(94.5,67);
	glVertex2f(95,64);
	glVertex2f(94.6,63);
	glVertex2f(93.7,66);
	glVertex2f(93.7,67);	
	glEnd();

	//RIGHT_HAND
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(107.5,80);
	glVertex2f(109,80);
	glVertex2f(109,67);
	glVertex2f(108,67);
	glEnd();
	//RIGHT_FINGER_RIGHT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(108.8,69);
	glVertex2f(109.4,63.5);
	glVertex2f(108.8,60);	
	glEnd();
	//RIGHT_FINGER_MIDDLE_PART
	glBegin(GL_POLYGON);
	glVertex2f(108.8,69);
	glVertex2f(108.8,60);
	glVertex2f(108.4,60);
	glVertex2f(108.4,69);
	glEnd();
	//RIGHT_FINGER_LEFT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(107.9,67);
	glVertex2f(107.4,64);
	glVertex2f(107.8,63);
	glVertex2f(108.8,66);
	glVertex2f(108.8,67);	
	glEnd();
}

chatg()
{
	glPushMatrix();
	glTranslatef(130,145,0.0);
	glScalef(2.7,2.2,0);
	glColor3f(1,1,1);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//triangle
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(110,140);
	glVertex2f(105,130);
	glVertex2f(140,150);
	glEnd();
}

void girl()
{
//conversation
chatg();
//hair
	ghair();
	
//face
	gface();

//hair
	gfhair();

//shirt
	gshirt();

//neck
	gneck();

//belt
gbelt();

//pant
	gpant();
	
//legs
	gleg();

//socks
	gsock();

gshoes();

//mouth
	gmouth();

//nose
	gnose();

//eyes
	geyes();

//hands
	ghands();

}
void bface()
{
glPushMatrix();
glTranslatef(71,110,0.0);
glRotatef(0.0,0.0,0.0,1.0);
glScalef(1.6,3.7,0.0);
glColor3f(0.925,0.769,0.433);
glutSolidSphere(4,100,100);
glPopMatrix();
}

void bshirt()
{
	glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2i(65,90);
glVertex2i(77,90);
glVertex2i(76,70);
glVertex2i(66,70);
glEnd();

//shirt left side
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(65,90);
glVertex2f(64.8,80);
glVertex2f(63,80);
glVertex2f(70,90);
glVertex2f(70,95);
glVertex2f(70,90);
glEnd();

//shirt right side
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(77,90);
glVertex2f(77.2,80);
glVertex2f(79,80);
glVertex2f(71,90);
glVertex2f(72.65,95);
glVertex2f(70,95);
glVertex2f(70,90);
glVertex2f(77,90);
glEnd();


//collar
//collar left
glLineWidth(0.2);
glBegin(GL_LINE_LOOP);
glColor3f(0.304,0.472,0.609);
glVertex2f(71,91);
glVertex2f(70,88);
glEnd();

glLineWidth(0.2);
glBegin(GL_LINE_LOOP);
glColor3f(0.304,0.472,0.609);
glVertex2f(70,88);
glVertex2f(68,93);
glEnd();

//collar right
glLineWidth(0.2);
glBegin(GL_LINE_LOOP);
glColor3f(0.304,0.472,0.609);
glVertex2f(71,91);
glVertex2f(72,88);
glEnd();

glLineWidth(0.2);
glBegin(GL_LINE_LOOP);
glColor3f(0.304,0.472,0.609);
glVertex2f(72,88);
glVertex2f(74,93);
glEnd();

}

void bneck()
{
	glBegin(GL_POLYGON);
glColor3f(0.925,0.765,0.433);
glVertex2i(70,95);
glVertex2i(70,100);
glVertex2i(72,100);
glVertex2i(72,95);
glVertex2i(71,91);
glEnd();
}

void bbelt()
{
	glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(65.8,70);
glVertex2f(76.2,70);
glVertex2f(76.2,71.5);
glVertex2f(65.8,71.5);
glEnd();
}

void bpant()
{
	glBegin(GL_POLYGON);
	glColor3f(0.09,0.145,0.388);
	glVertex2f(65.8,70);
	glVertex2f(76.2,70);
	glVertex2f(76,50);
	glVertex2f(72,50);
	glVertex2f(72,65);
	glVertex2f(70,50);
	glVertex2f(66.5,50);
	glEnd();
}

void bleg()
{
	//LEG_LEFT
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.765,0.433);
	glVertex2f(66.7,50);
	glVertex2f(69.2,50);
	glVertex2f(69.2,40);
	glVertex2f(66.7,40);
	glEnd();

	//LEG_RIGHT
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.765,0.433);
	glVertex2f(73,50);
	glVertex2f(75.5,50);
	glVertex2f(75.5,40);
	glVertex2f(73,40);
	glEnd();
}

void bsock()
{
	//sock 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(66.55,40);
glVertex2f(69.2,40);
glVertex2f(69.2,25);
glVertex2f(66.55,25);
glEnd();

//sock 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(73,40);
glVertex2f(75.6,40);
glVertex2f(75.6,25);
glVertex2f(73,25);
glEnd();

}

//FUNCTION_FOR_BOY_SHOE
void bshoes(){
	//LEFT_SHOE
	//LEFT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(67.9,25,0.0);
	glScalef(0.69,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(2.2,100,100);
	glPopMatrix();	
	//LEFT_SHOE_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(69.6,25);
	glVertex2f(66.2,25);
	glVertex2f(65.2,19);
	glVertex2f(70.5,19);	
	glEnd();
	//LEFT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(67.9,18.5,0.0);
	glScalef(0.65,0.7,0);
	glColor3f(0.27,0.27,0.27);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//LEFT_SHOE_FRONT_SPHERE_INNER
	glPushMatrix();
	glTranslatef(67.83,19.5,0.0);
	glScalef(0.7,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3.2,100,100);
	glPopMatrix();
	//LEFT_SHOES_LINE
	//Straight_LINE
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.37,0.37,0.37);
	glVertex2f(69.4,21.5);
	glVertex2f(66.4,21.5);
	glEnd();
	//CROSS_LINE_TOP_TO_BOTTOM
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.37,0.37,0.37);
	glVertex2f(69.4,22);
	glVertex2f(66.4,23);
	glEnd();
	//CROSS_LINE_BOTTOM_TO_TOP
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.37,0.37,0.37);
	glVertex2f(69.4,23);
	glVertex2f(66.4,22);
	glEnd();
	
	//RIGHT_SHOE
	//RIGHT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(74.3,25,0.0);
	glScalef(0.68,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(2.2,100,100);
	glPopMatrix();	
	//RIGHT_SHOE_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(76,25);
	glVertex2f(72.6,25);
	glVertex2f(71.6,19);
	glVertex2f(76.9,19);	
	glEnd();
	//RIGHT_SHOE_FRONT_SPHERE
	glPushMatrix();
	glTranslatef(74.3,18.5,0.0);
	glScalef(0.65,0.7,0);
	glColor3f(0.27,0.27,0.27);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//RIGHT_SHOE_FRONT_SPHERE_INNER
	glPushMatrix();
	glTranslatef(74.23,19.5,0.0);
	glScalef(0.7,0.7,0);
	glColor3f(0,0,0);
	glutSolidSphere(3.2,100,100);
	glPopMatrix();
	//RIGHT_SHOES_LINE
	//Straight_LINE
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.37,0.37,0.37);
	glVertex2f(75.8,21.5);
	glVertex2f(72.8,21.5);
	glEnd();
	//CROSS_LINE_TOP_TO_BOTTOM
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.37,0.37,0.37);
	glVertex2f(75.8,22);
	glVertex2f(72.8,23);
	glEnd();
	//CROSS_LINE_BOTTOM_TO_TOP
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.37,0.37,0.37);
	glVertex2f(75.8,23);
	glVertex2f(72.8,22);
	glEnd();
	
	
}

void bmouth()
{
	//mouth(red)
glPushMatrix();
glTranslatef(71,102,0.0);
glRotatef(0.0,0.0,0.0,1.0);
glScalef(0.4,0.7,0.0);
glColor3f(0.925,0.156,0.101);
glutSolidSphere(4,100,100);
glPopMatrix();

//mouth(rectangle for cutting it)
glBegin(GL_POLYGON);
glColor3f(0.925,0.769,0.433);
glVertex2f(69,101.5);
glVertex2f(73,101.5);
glVertex2f(73,105);
glVertex2f(69,105);
glEnd();

//teeth
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(70,101.5);
glVertex2f(72,101.5);
glVertex2f(71.5,100.8);
glVertex2f(70.5,100.8);
glEnd();
}

void bnose()
{
	glLineWidth(0.5);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(71,107);
glVertex2f(72,105);
glEnd();

glLineWidth(0.5);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(72,105);
glVertex2f(71,105);
glEnd();
}

void beyes()
{
	//left eye
	glPushMatrix();
	glTranslatef(68,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.4,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//LEFT_EYE_SPARKLE
	glPushMatrix();
	glTranslatef(68,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.4,0.0);
	//glColor3f(1,1,1);
	glColor3f(0.47,0.47,0.47);
	glutSolidSphere(1.2,100,100);
	glPopMatrix();

	//right eye
	glPushMatrix();
	glTranslatef(74.2,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.4,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//RIGHT_EYE_SPARKLE
	glPushMatrix();
	glTranslatef(74.2,112,0.0);
	glRotatef(0.0,0.0,0.0,1.0);
	glScalef(0.15,0.4,0.0);
	//glColor3f(1,1,1);
	glColor3f(0.47,0.47,0.47);
	glutSolidSphere(1.2,100,100);
	glPopMatrix();
	
	//eyebrows
	//left
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(67,114.5);
	glVertex2f(68.5,114.5);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(68.5,114.5);
	glVertex2f(69,114);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(67,114.5);
	glVertex2f(66.5,114);
	glEnd();
	
	//right
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(73.5,114.5);
	glVertex2f(75,114.5);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(73.5,114.5);
	glVertex2f(73,114);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(75,114.5);
	glVertex2f(75.5,114);
	glEnd();
}

void bhands()
{
	//LEFT_HAND
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(63,80);
	glVertex2f(64.5,80);
	glVertex2f(64.5,67);
	glVertex2f(63.5,67);
	glEnd();
	//LEFT_FINGER_LEFT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(63.7,69);
	glVertex2f(63,63.5);
	glVertex2f(63.7,60);	
	glEnd();
	//LEFT_FINGER_MIDDLE_PART
	glBegin(GL_POLYGON);
	glVertex2f(63.7,69);
	glVertex2f(63.7,60);
	glVertex2f(64.1,60);
	glVertex2f(64.1,69);
	glEnd();
	//LEFT_FINGER_RIGHT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(64.5,67);
	glVertex2f(65,64);
	glVertex2f(64.6,63);
	glVertex2f(63.7,66);
	glVertex2f(63.7,67);	
	glEnd();

	//RIGHT_HAND
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(77.5,80);
	glVertex2f(79,80);
	glVertex2f(79,67);
	glVertex2f(78,67);
	glEnd();
	//RIGHT_FINGER_RIGHT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(78.8,69);
	glVertex2f(79.4,63.5);
	glVertex2f(78.8,60);	
	glEnd();
	//RIGHT_FINGER_MIDDLE_PART
	glBegin(GL_POLYGON);
	glVertex2f(78.8,69);
	glVertex2f(78.8,60);
	glVertex2f(78.4,60);
	glVertex2f(78.4,69);
	glEnd();
	//RIGHT_FINGER_LEFT_PART
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(77.9,67);
	glVertex2f(77.4,64);
	glVertex2f(77.8,63);
	glVertex2f(78.8,66);
	glVertex2f(78.8,67);	
	glEnd();


}



chatb()
{
	glPushMatrix();
	glTranslatef(40,150,0.0);
	glScalef(2.5,2,0);
	glColor3f(1,1,1);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//triangle
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(60,150);
	glVertex2f(62,134);
	glVertex2f(55,140);
	glEnd();
}


void boy()
{
//conversation
chatb();

//FUNCTION_CALL_FOR_HAIR_CURL_outer
hair_curl_outter();


//FUNCTION_CALL_FOR_HAIR_BASE
hair_base();

//face
	bface();

//FUNCTION_CALL_FOR_HAIR_CURL_INNER
hair_curl_inner();

//shirt
bshirt();

//neck
bneck();

//belt
bbelt();

//pant
bpant();

//legs
bleg();

//socks
bsock();

bshoes();

//mouth
bmouth();

//nose
bnose();

//eyes

beyes();

//hands

bhands();

}
void b1()
{
		glPushMatrix();
		printbh(35,150,"HI",1);
		glPopMatrix();
}
void g1()
{
		glPushMatrix();
		printbh(125,145,"HI",1);
		glPopMatrix();
}

void b2()
{
		glPushMatrix();
		printbh(20,150,"Where are you from?", 1);
		glPopMatrix();
}
void g2()
{
		glPushMatrix();
		printbh(125,145,"Kerala", 1);
		glPopMatrix();
}
void b3()
{
		glPushMatrix();
		printbh(30,150,"Tell me something", 1);
		printbh(35,145 ,"about kerala", 1);
		glPopMatrix();
}
void g3()
{
		glPushMatrix();
		printbh(110,150,"Ok, Kettuvallam is a house boat", 1);
		printbh(120,145,"widely used in the ", 1);
		printbh(120,140,"Indian state of Kerala", 1);
		glPopMatrix();
}
void textbh()
{
		glPushMatrix();
		printbh(70,5,"PRESS 'e' FOR NEXT SCENE", 2);
		glPopMatrix();	
		
		glPushMatrix();
		printbh(50,185,"GREENWOOD INTERNATIONAL HIGH SCHOOL, BANGALORE", 1);
		glPopMatrix();
}
void avatarbh() 
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
    
  background();

//girl	
	girl();

//boy
	boy();
	
	textbh();

if(t1<=25)
{
	b1();
	t1=t1+1;
}
else if(t2>=35 && t2<=60)
{
	b1();
	g1();
	t2=t2+1;
}
else if(t3>=61 && t3<70)
{
	b2();
	t3=t3+1;
}
else if(t4>=70 && t4<=95)
{
	b2();
	g2();
	t4=t4+1;
}
else if(t4>=96 && t4<=120)
{
	b3();
	t4=t4+1;
}
else 
{
	b3();
	g3();
	t5=t5+1;
}
}


//BOAT HOUSE

//FUCTION_FOR_SUNRAYS
void sunray()
{	//RAY TOP
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(60,168);	
	glColor3f(0.29,0.772,0.929);
	glVertex2f(90,200);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(40,200);
	glEnd();
	//RAY LEFT
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(60,168);	
	glColor3f(0.695,0.917,0.996);
	glVertex2f(40,140);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(40,200);
	glEnd();
	//RAY BOTTOM
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(60,168);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(40,140);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(90,140);
	glEnd();
	//RAY RIGHT
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(60,168);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(90,140);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(90,200);
	glEnd();
	
}

//FUNCTION_FOR_SUN
void sun()
{

	
	//FUNCTION_CALL_FOR_SUNRAY
	sunray();
		
	//SUN_OUTTER
	glPushMatrix();
	glTranslatef(60,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.56,0.117);
	glutSolidSphere(22,100,100);
	glPopMatrix();	
	
	//SUN_INNER
	glPushMatrix();
	glTranslatef(60,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.59,0.117);
	glutSolidSphere(18,100,100);
	glPopMatrix();
	//SUN_INNER_INNER
	glPushMatrix();
	glTranslatef(60,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.62,0.117);
	glutSolidSphere(14,100,100);
	glPopMatrix();	
	//SUN_INNER_INNER_INNER
	glPushMatrix();
	glTranslatef(60,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.65,0.117);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//SUN_INNER_INNER_INNER_INNER
	glPushMatrix();
	glTranslatef(60,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.683,0.117);
	glutSolidSphere(6,100,100);
	glPopMatrix();
	//SUN_INNER_INNER_INNER_INNER_INNER
	glPushMatrix();
	glTranslatef(60,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.713,0.117);
	glutSolidSphere(2,100,100);
	glPopMatrix();
}




//FUNCTION FOR CLOUDS
void cloud()
{
	//CLOUD_GROUP_1_OUTTER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(10+cl,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(25+cl,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(12.5+cl,136,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(18+cl,138,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(24.5+cl,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(14+cl,125,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(22+cl,126,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//CLOUD_GROUP_1_INNER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(10+cl,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(25+cl,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(12.5+cl,136,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(18+cl,138,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(24.5+cl,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(14+cl,125,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(22+cl,126,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	
	

	//CLOUD_GROUP2_OUTTER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(110+cl,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(125+cl,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(112.5+cl,176,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(118+cl,178,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(124.5+cl,173,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(114+cl,165,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(123+cl,165,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//CLOUD_GROUP2_INNER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(110+cl,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(125+cl,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(112.5+cl,176,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(118+cl,178,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(124.5+cl,173,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(114+cl,165,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(123+cl,165,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();


	//CLOUD_GROUP_3
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(170+cl,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(185+cl,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(172.5+cl,146,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(178+cl,148,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(184.5+cl,143,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(174+cl,135,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(182+cl,136,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//CLOUD_GROUP_3_inner
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(170+cl,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(185+cl,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(172.5+cl,146,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(178+cl,148,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(184.5+cl,143,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(174+cl,135,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(182+cl,136,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
}


//FUNCTION_FOR_WATER_WAVE
water_wave()
{
	//FIRST LAYER
	//RIGHT_SIDE_WAVE_OF_BOAT
	//WAVE_ORDER_STARTS_FROM_RIGHT_TO_LEFT
	//WAVE_0_DOWN
	glPushMatrix();
	glTranslatef(197+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);
	//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_0_UP
	glPushMatrix();
	glTranslatef(188.3+x,72,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0.695,0.917,0.996);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(180+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);
	//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(171.5+x,72,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0.695,0.917,0.996);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(163+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);
	//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(155.5+x,72,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0.695,0.917,0.996);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(146.2+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);
	//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	
	//LEFT_SIDE_WAVE_OF_BOAT
	//NOW_WAVE_ORDER_STARTING_ FROM_LEFT_TO_RIGHT 
	//WAVE_0_DOWN
	glPushMatrix();
	glTranslatef(-15.6+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_0_UP
	glPushMatrix();
	glTranslatef(-7.4+x,72,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0.695,0.917,0.996);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(1+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(9.3+x,72,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0.695,0.917,0.996);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN	
	glPushMatrix();
	glTranslatef(17.8+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(26.1+x,72,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0.695,0.917,0.996);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN	
	glPushMatrix();
	glTranslatef(34.5+x,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	
	//INSIDE_WATER_WAVE_FOR_SCENE_BOATHOUSE
	//ROW_3_3RD_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.388,0.619);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_12_UP
	glPushMatrix();
	glTranslatef(193+x,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_UP_INNER
	glPushMatrix();
	glTranslatef(193+x,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_12_DOWN
	glPushMatrix();
	glTranslatef(202+x,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//ROW_2_2ND_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_12_UP
	glPushMatrix();
	glTranslatef(193+x,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_UP_INNER
	glPushMatrix();
	glTranslatef(193+x,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_12_DOWN
	glPushMatrix();
	glTranslatef(202+x,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();

	
	//ROW_1_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(193+x,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(193+x,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(202+x,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3ub(16, 119, 179);//glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	
}



//FUNCTION_FOR_WATER
void water()
{
	glBegin(GL_POLYGON);
	glColor3ub(16, 119, 179);
	//glColor3f(0.0,0.466,0.885);
	glVertex2i(0,0);
	//glColor3f(0,0.388,0.619);
	glVertex2i(0,70);
	//glColor3f(0,0.388,0.619);
	glVertex2i(200,70);
	//glColor3f(0.0,0.466,0.885);
	glVertex2i(200,0);
	glEnd();
	
	//FUNCTION_CALL_WATER_WAVES
	water_wave();


}

void sky()
{
	//lowwer section
	glBegin(GL_POLYGON);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(0,70);
	glVertex2f(0,200);
	glVertex2f(200,200);
	glVertex2f(200,70);
	glEnd();
	//upper section
	glBegin(GL_POLYGON);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(0,140);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(200,140);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(200,200);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(0,200);
	glEnd();
	

	
		//FUNCTION_CALL_FOR_SUN
	sun();
	
	
	//FUNCTION_CALL_FOR_CLOUDS
	cloud();

}


void bstripes(float a,float b,float c,float d)
{
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.867,0.675,0.269);//light cream
	glVertex2f(a+x,b-y);
	glVertex2f(c+x,d-y);
	glEnd();
}
void sstripes(float a,float b,float c,float d)
{
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.867,0.718,.527);//light cream
	glVertex2f(a+x,b-y);
	glVertex2f(c+x,d-y);
	glEnd();
}
void tri(float d,float e,float f,float g,float h,float i)
{
	glBegin(GL_POLYGON);
	glColor3f(0.667,0.289,0.085);
	glVertex2f(d+x,e-y);
	glVertex2f(f+x,g-y);
	glVertex2f(h+x,i-y);
	glEnd();
}

void squ(float a,float b,float c,float d,float e,float f,float g,float h)
{
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.667,0.289,0.085);
	glVertex2f(a+x,b-y);
	glVertex2f(c+x,d-y);
	glVertex2f(e+x,f-y);
	glVertex2f(g+x,h-y);
	glEnd();
}
void win(float a,float b,float c,float d)
{
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.667,0.289,0.085);
	glVertex2f(a+x,b-y);
	glVertex2f(c+x,d-y);
	glEnd();
}
void lcut(float a,float b,float c,float d,float e,float f)
{
	glBegin(GL_POLYGON);
	glColor3f(0.097,0.410,0.609);//water blue
	glVertex2f(a+x,b-y);
	glVertex2f(c+x,d-y);
	glVertex2f(e+x,f-y);
	glEnd();
}
void print1(char *string,
	GLfloat r, GLfloat g, GLfloat b,
	GLint x, GLint y,
	GLfloat w, GLfloat h,
	GLfloat strokeSize) {
	glPushMatrix();

	glColor3f(r, g, b);
	glTranslatef(x, y, 0);
	//glRotatef(1.0+x,1.0,0.0,0.0);
	glScalef(w, h, 0);

	glPointSize(strokeSize);
	glLineWidth(strokeSize);

	while (*string)
		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, *string++);

	glPopMatrix();

	glLineWidth(1);
	glPointSize(1);
	glFlush();
}
void printboath(int x,int y,char *string,int font) {
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}
void display1()
{
glClear(GL_COLOR_BUFFER_BIT);

//sphere for the left curve formation
	glPushMatrix();
	glTranslatef(43+x,93.5-y,0.0);
	glRotatef(10,0.0,0.0,1.0);
	glScalef(1.5,7,0.0);
	glColor3f(0.625,0.824,0.894);
	glutSolidSphere(4,100,100);
	glPopMatrix();

//sphere for the right curve formation
	glPushMatrix();
	glTranslatef(152.5+x,93.5-y,0.0);
	glRotatef(-10,0.0,0.0,1.0);
	glScalef(1.5,7,0.0);
	glColor3f(0.625,0.824,0.894);
	glutSolidSphere(4,100,100);
	glPopMatrix();


//sky
	sky();

//FUNCTION_CALL_FOR_WATER 
	water();

//left side of slab 4 at top
//slab 4 at the top
//SLAB 4
	glPushMatrix();
	glTranslatef(33.5+x,90-y,0.0);
	glRotatef(7,0.0,0.0,1.0);
	glScalef(1.3,6,0.0);
	glColor3f(0.277,0.148,0.015);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	//sphere for the left curve formation
	glPushMatrix();
	glTranslatef(43+x,93.5-y,0.0);
	glRotatef(10,0.0,0.0,1.0);
	glScalef(1.5,7,0.0);
	glColor3f(0.695,0.917,0.996);
	//glColor3f(0,0,0);
	//glColor3f(0.625,0.824,0.894);
	//glColor3f(0.359,0.707,0.671);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//triangle for forming curve at inner part of slab 4(dark brown)
	glBegin(GL_POLYGON);
	glColor3f(0.277,0.148,0.015);//dark brown
	glVertex2f(35+x,75-y);
	glVertex2f(35+x,88-y);
	glVertex2f(45+x,75-y);
	//glVertex2f(40,111);
	glEnd();
	
	//traingle cutting sphere
	glBegin(GL_POLYGON);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(27+x,105-y);
	//glColor3f(0,0.746,0.996);
	glVertex2f(27+x,115-y);
	glVertex2f(40+x,115-y);
	//glColor3f(0.625,0.824,0.894);
	glVertex2f(40+x,100-y);
	glEnd();
	
	
	
	//right side of slab 4
	glPushMatrix();
	glTranslatef(162+x,90-y,0.0);
	glRotatef(-7,0.0,0.0,1.0);
	glScalef(1.3,6,0.0);
	glColor3f(0.277,0.148,0.015);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	
	
	//sphere for the right curve formation
	glPushMatrix();
	glTranslatef(152.5+x,93.5-y,0.0);
	glRotatef(-10,0.0,0.0,1.0);
	glScalef(1.5,7,0.0);
	glColor3f(0.695,0.917,0.996);
	//glColor3f(0,0,0);
	//glColor3f(0.625,0.824,0.894);
	//glColor3f(0.359,0.707,0.671);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//triangle for forming curve at inner part of slab 4(dark brown)
	glBegin(GL_POLYGON);
	glColor3f(0.277,0.148,0.015);//dark brown
	glVertex2f(164.5+x,75-y);
	glVertex2f(162+x,88-y);
	glVertex2f(149.5+x,75-y);
	//glVertex2f(40,111);
	glEnd();
	
	//traingle cutting sphere
	glBegin(GL_POLYGON);
	glColor3f(0.695,0.917,0.996);
	//glColor3f(1,0,0);
	glVertex2f(155+x,101-y);
	glVertex2f(160+x,115-y);
	glVertex2f(174.5+x,115-y);
	glVertex2f(174.5+x,107-y);
	glEnd();
	
	
//SLAB 5
	
	//slab5 at the top rectangle(dark brown)
	glColor3f(0.277,0.148,0.015);
	glRectf(35+x,70-y,160+x,75-y);
	
	/*//thread formation at left side
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);
	glVertex2f(28,90);
	glVertex2f(38,92);
	glVertex2f(38,92.5);
	glVertex2f(28,91);
	glEnd();*/


//SLAB 1

	//boat house
	//slab1
	glColor3f(0.984,0.796,0.316);//light cream
	glRectf(45+x,55-y,150+x,58-y);
	
	//slab2
	glColor3f(0.984,0.796,0.316);
	glRectf(40+x,58-y,155+x,67-y);
	
	//curve at left
	glPushMatrix();
	glTranslatef(40+x,63.9-y,0.0);
	glRotatef(-80,0.0,0.0,1.0);
	glScalef(1.5,1.3,0.0);
	glColor3f(0.984,0.796,0.316);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//rectangle for curve
	glColor3f(0.097,0.410,0.609);
	glRectf(33+x,67-y,44+x,70-y);
	
	//curve at right
	glPushMatrix();
	glTranslatef(155+x,64-y,0.0);
	glRotatef(-80,0.0,0.0,1.0);
	glScalef(1.5,1.3,0.0);
	glColor3f(0.984,0.796,0.316);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//rectangle for curve
	glColor3f(0.097,0.410,0.609);
	glRectf(150+x,67-y,160+x,70-y);
	
	//slab 3
	glBegin(GL_POLYGON);
	glColor3f(0.875,0.511,0.148);
	glVertex2f(35+x,67-y);
	glVertex2f(33+x,70-y);
	glVertex2f(163+x,70-y);
	glVertex2f(160+x,67-y);
	glEnd();
	
	//triangle for joining slab 2 and 3 at left
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);
	glVertex2f(35.5+x,67-y);
	glVertex2f(33+x,70-y);
	glVertex2f(35+x,63-y);
	glEnd();
	
	//triangle for the correct color of slab 3
	glBegin(GL_POLYGON);
	glColor3f(0.875,0.511,0.148);
	glVertex2f(35.5+x,67-y);
	glVertex2f(33+x,70-y);
	glVertex2f(33.8+x,67-y);
	glEnd();
	
	//triangle for joining slab 2 and 3 at right
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);
	glVertex2f(163+x,70-y);
	glVertex2f(160.1+x,62-y);
	glVertex2f(159+x,67-y);
	glEnd();
	
	//triangle for the correct color of slab 3
	glBegin(GL_POLYGON);
	glColor3f(0.875,0.511,0.148);
	glVertex2f(163+x,70-y);
	glVertex2f(161.9+x,67-y);
	glVertex2f(159+x,67-y);
	glEnd();
	
	
	
	//the roof for the entrance
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(55+x,120-y);
	glVertex2f(65+x,120-y);
	glVertex2f(69+x,115-y);
	glVertex2f(85+x,115-y);
	glVertex2f(85+x,75-y);
	glVertex2f(65+x,75-y);
	glVertex2f(65+x,95-y);
	//glVertex2f(55,120);
	glEnd();
	
	
	//the boat house -house 1 entrance
	glBegin(GL_POLYGON);
	glColor3f(0.277,0.148,0.015);
	glVertex2f(55+x,75-y);
	glVertex2f(55+x,120-y);
	glVertex2f(65+x,95-y);
	glVertex2f(65+x,75-y);
	glEnd();
	
	//bridge at left end(from the dark brown triangle)
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(44+x,76-y);
	glVertex2f(44+x,80-y);
	glEnd();
	
	
	  
	//bridge long line
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(44+x,80-y);
	glVertex2f(55+x,80-y);
	glEnd();
	
	//bridge to join the inner dark brown part
	//bridge long line
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(55+x,80-y);
	glVertex2f(65+x,80-y);
	glEnd();
	
	//boat bridge stripes
	bstripes(46,75,46,80);
	bstripes(48,75,48,80);
	bstripes(50,75,50,80);
	bstripes(52,75,52,80);
	bstripes(54,75,54,80);
	bstripes(56,75,56,80);
	bstripes(58,75,58,80);
	bstripes(60,75,60,80);
	bstripes(62,75,62,80);
	bstripes(64,75,64,80);
	
	//stripes on the boat entrance roof of light cream
	bstripes(57,115,63,119.5);
	bstripes(58.2,112,66,118.5);
	bstripes(59.5,109,69,117.5);
	bstripes(60.7,106,72,117);
	bstripes(62,103,75,116.5);
	bstripes(63,100,79,116.1);
	bstripes(64.5,97,82.2,114.9);
	bstripes(65,94,85,113);
	bstripes(65,91,85,109);
	bstripes(65,88,85,104.5);
	bstripes(65,84,85,100);
	//bstripes(65,81,96,109);
	bstripes(65,79,85,95.5);
	bstripes(65,75.3,85,91);
	bstripes(70,75.3,85,86);
	bstripes(75,75.3,85,81);
	bstripes(80,75.3,85,78);
	
	//simgle thread to join from thread 2
	bstripes(58.2,112,36,98);
	
	bstripes(36,98,27.5,100);
	
	//group of thread at left dark brown corner
	bstripes(29.5,83,37.5,90);
	bstripes(29.7,81.8,37.7,88.8);
	bstripes(29.9,80.5,38,87.5);
	bstripes(30.1,79.1,38.3,86.1);
	bstripes(30.3,77.7,38.7,85);
	//bstripes(57,115,63,120);
	
	
	
	//light cream roof for the triangle below
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(83.7+x,125-y);
	glVertex2f(117+x,125-y);
	glVertex2f(125+x,111-y);
	glVertex2f(125+x,75-y);
	//glVertex2f(140,117);
	//glVertex2f(140,75);
	glVertex2f(85+x,75-y);
	glVertex2f(85+x,115-y);
	glEnd();
	
	//light cream roof for the small red house at the top (roof)
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(122+x,115-y);
	glVertex2f(145+x,115-y);
	glVertex2f(138.5+x,96-y);
	glVertex2f(138.5+x,75-y);
	//glVertex2f(140,117);
	//glVertex2f(140,75);
	glVertex2f(85+x,75-y);
	glVertex2f(85+x,115-y);
	glEnd();
	
	//light cream roof for the small red house at the bottom (roof)
	glBegin(GL_POLYGON);
	glColor3f(0.984,0.796,0.316);//light cream
	glVertex2f(138.5+x,96-y);
	glVertex2f(150+x,96-y);
	glVertex2f(145+x,75-y);
	glVertex2f(138.5+x,75-y);
	//glVertex2f(140,117);
	//glVertex2f(140,75);
	glVertex2f(85+x,75-y);
	glVertex2f(85+x,115-y);
	glEnd();
	
	//traingle on top of the light cream left side roof
	glBegin(GL_POLYGON);
	glColor3f(0.277,0.148,0.015);//dark brown
	glVertex2f(78+x,115.5-y);
	glVertex2f(83.7+x,125-y);
	glVertex2f(84.5+x,115-y);
	//glVertex2f(65,75);
	glEnd();
	
	//right side stripes of the boat sphere(for slab 4)
	bstripes(159.5,99,168,102.5);
	bstripes(159,97.5,168,101);
	bstripes(159,96,168,99.5);
	bstripes(158.7,94.5,168,98);
	bstripes(158.5,92.5,168,96.5);
	bstripes(158.5,91,168,95);
	
	
	//right side boat bridge
	bstripes(146.5,81,155.5,81);
	//bridge vertical stripes
	bstripes(147,81,147,75);
	bstripes(148.5,81,148.5,75);
	bstripes(150,81,150,75);
	bstripes(151.5,81,151.5,77);
	bstripes(153,81,153,78.5);
	
	
	
	//stripes below the dark brown line in the middle of second entrance
	bstripes(97,78,100,75);
	bstripes(97,81,103,75);
	bstripes(97,84,106,75);
	bstripes(97,87,109,75);
	bstripes(97,90,111,75);
	bstripes(97,93,114,75);
	bstripes(97,96,117,75);
	bstripes(100,96,120,75);
	bstripes(103,96,123,75);
	bstripes(106,96,126,75);
	bstripes(109,96,129,75);
	bstripes(112,96,132,75);
	bstripes(115,96,135,75);
	bstripes(118,96,138,75);
	bstripes(121,96,141,75);
	bstripes(124,96,144,75);
	bstripes(127,96,145.5,77);
	bstripes(130,96,146.3,79.7);
	bstripes(133,96,147,82.5);
	bstripes(136,96,147.5,85.5);
	bstripes(139,96,148,89);
	bstripes(143,96,149,92);
	
	//stripes above the dark brown line in the middle of second entrance
	bstripes(135.5,96,140,102);
	bstripes(132.5,96,142,107);
	bstripes(129.5,96,144,112);
	bstripes(126.5,96,144,115);
	bstripes(123.5,96,141,115);
	bstripes(120.5,96,138,115);
	bstripes(117.5,96,135,115);
	bstripes(114.5,96,132,115);
	bstripes(111.5,96,129,115);
	bstripes(108.5,96,126,115);
	bstripes(105.5,96,123,115);
	bstripes(102.5,96,120,115);
	bstripes(99.5,96,117,115);
	bstripes(96.5,96,114,115);
	bstripes(93.5,96,111,115);
	bstripes(90.5,96,108,115);
	bstripes(98.5,109,105,115);
	bstripes(97.5,112,101,115);
	
	//illusion line
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.796,0.582,0.121);//light cream
	glVertex2f(84.5+x,115-y);
	glVertex2f(84.5+x,75-y);
	glEnd();
	
	//dark brown second entrance door
	//the roof for the entrance
	glBegin(GL_POLYGON);
	glColor3f(0.277,0.148,0.015);//dark brown
	glVertex2f(87+x,75-y);
	glVertex2f(87+x,110-y);
	glVertex2f(92+x,117-y);
	glVertex2f(97+x,110-y);
	glVertex2f(97+x,75-y);
	//glVertex2f(65,75);
	//glVertex2f(65,95);
	//glVertex2f(55,120);
	glEnd();

/*
//second entrance sphere shape
glPushMatrix();
glTranslatef(90,114,0.0);
glRotatef(80,0.0,0.0,1.0);
glScalef(1,1,0.0);
glColor3f(1,1,1);
glutSolidSphere(4,100,100);
glPopMatrix();*/

	//dark brown line in middle after 2nd door entrance
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.277,0.148,0.015);//dark brown
	glVertex2f(97+x,96-y);
	glVertex2f(150+x,96-y);
	glEnd();
	
	//small red entrance door cream background
	glColor3f(0.906,0.382,0.101);
	glRectf(100+x,78-y,104+x,90-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(107+x,78-y,111+x,90-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(114+x,78-y,118+x,90-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(126+x,78-y,130+x,90-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(133+x,78-y,137+x,90-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(103+x,98-y,107+x,110-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(109+x,98-y,113+x,110-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(115+x,98-y,119+x,110-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(121+x,98-y,125+x,110-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(127+x,98-y,131+x,110-y);
	
	glColor3f(0.906,0.382,0.101);
	glRectf(133+x,98-y,137+x,110-y);
	
	//red traingles om top of the cream small doors
	tri(100,90,102,96,104,90);
	
	tri(107,90,109,96,111,90);
	
	tri(114,90,116,96,118,90);
	
	tri(126,90,128,96,130,90);
	
	tri(133,90,135,96,137,90);
	
	tri(103,110,105,113,107,110);
	tri(109,110,111,113,113,110);
	tri(115,110,117,113,119,110);
	tri(121,110,123,113,125,110);
	tri(127,110,129,113,131,110);
	tri(133,110,135,113,137,110);
	
	//red side square formation by line loop
	squ(100,78,100,90,104,90,104,78);
	
	squ(107,78,107,90,111,90,111,78);
	
	squ(114,78,114,90,118,90,118,78);
	
	squ(126,78,126,90,130,90,130,78);
	
	squ(133,78,133,90,137,90,137,78);
	squ(103,98,103,110,107,110,107,98);
	squ(109,98,109,110,113,110,113,98);
	squ(115,98,115,110,119,110,119,98);
	squ(121,98,121,110,125,110,125,98);
	squ(127,98,127,110,131,110,131,98);
	squ(133,98,133,110,137,110,137,98);
	
	//window pane formation for the small doors
	win(102,78,102,90);
	
	win(100,81,104,81);
	
	win(100,84,104,84);
	
	win(100,87,104,87);
	
	win(109,78,109,90);
	
	win(107,81,111,81);
	
	win(107,84,111,84);
	
	win(107,87,111,87);
	
	win(116,78,116,90);
	
	win(114,81,118,81);
	
	win(114,84,118,84);
	
	win(114,87,118,87);
	
	win(128,78,128,90);
	
	win(126,81,130,81);
	
	win(126,84,130,84);
	
	win(126,87,130,87);
	
	win(135,78,135,90);
	
	win(133,81,137,81);
	
	win(133,84,137,84);
	
	win(133,87,137,87);
	
	win(105,98,105,110);
	win(103,101,107,101);
	win(103,104,107,104);
	win(103,107,107,107);
	
	win(111,98,111,110);
	win(109,101,113,101);
	win(109,104,113,104);
	win(109,107,113,107);
	
	win(117,98,117,110);
	win(115,101,119,101);
	win(115,104,119,104);
	win(115,107,119,107);
	
	win(123,98,123,110);
	win(121,101,125,101);
	win(121,104,125,104); 
	win(121,107,125,107);
	
	win(129,98,129,110);
	win(127,101,131,101);
	win(127,104,131,104);
	win(127,107,131,107);
	
	win(135,98,135,110);
	win(133,101,137,101);
	win(133,104,137,104);
	win(133,107,137,107);
	
	//brown shadow formation
	sstripes(97,105,100,105);
	sstripes(100,105,97,115);
	sstripes(97,115,145,115);
	sstripes(145,115,138.5,97);
	sstripes(138.5,97,97,97);
	//sstripes(97,97,97,105);
	glPushMatrix();
		printboath(70,5,"PRESS 'f' FOR NEXT SCENE",2);
		glPopMatrix();

	glFlush();
}

//AVATAR WAGAMON

void printw(int x,int y,char *string,int font) {
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}

void w1()
{
		glPushMatrix();
		printw(20,150,"Tell me more about Kerala . . .", 2);
		glPopMatrix();


		
}
void w2()
{
		glPushMatrix();
		printw(115,152,"In Kerala,Vagamon is ", 2);
		glPopMatrix();
		
		glPushMatrix();
		printw(115,145,"the hotspot for paragliding", 2);
		glPopMatrix();
		
		glPushMatrix();
		printw(115,138,"by tourists and travellers", 2);
		glPopMatrix();
		
		glPushMatrix();
		printw(125,132,"all over", 2);
		glPopMatrix();
 
}
void textw()
{
		glPushMatrix();
		printw(70,5,"PRESS 'g' FOR NEXT SCENE", 2);
		glPopMatrix();
		
		glPushMatrix();
		printbh(50,185,"GREENWOOD INTERNATIONAL HIGH SCHOOL, BANGALORE", 1);
		glPopMatrix();
}

void avatarw() 
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    
background();

//girl	
girl();

//boy
boy();

textw();

if(tw1<=10)
	{
	w1();
	tw1=tw1+1;
}
else if(tw2>=11)
{
	w1();
	w2();
	tw2=tw2+1;
}

  
glFlush();
}

//WAGAMON

void printwagamon(int x,int y,char *string,int font) 
{
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}
void circlep(int a,int b)
{
glPushMatrix();
glTranslatef(a-xp,b-yp,0);
glRotatef(-50,0,0.0,1.0);
glScalef(1,1,0.0);
glColor3f(0.757,0.050,0);//leaf green
glutSolidSphere(4,100,100);
glPopMatrix();
}

void threadp(int a,int b,int c,int d)
{
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(a-xp,b-yp);
	glVertex2f(c-xp,d-yp);
	glEnd();
}


void human()
{
	//neck
	glBegin(GL_POLYGON);
	glColor3f(0.925,0.769,0.433);
	glVertex2f(160.1-xp,112-yp);
	glVertex2f(160.9-xp,112-yp);
	glVertex2f(160.9-xp,109.5-yp);
//	glVertex2f(160.5,109.3);
	glVertex2f(160.1-xp,109.5-yp);
	glEnd();
	
	//head
	glPushMatrix();
glTranslatef(160.5-xp,113-yp,0);
glRotatef(0,0,0.0,1.0);
glScalef(0.25,0.5,0.0);
glColor3f(0.925,0.769,0.433);
glutSolidSphere(4,100,100);
glPopMatrix();

//eyes left
glPushMatrix();
glTranslatef(160-xp,113-yp,0);
glRotatef(0,0,0.0,1.0);
glScalef(0.04,0.04,0.0);
glColor3f(0,0,0);
glutSolidSphere(4,100,100);
glPopMatrix();

//eyes right
glPushMatrix();
glTranslatef(161-xp,113-yp,0);
glRotatef(0,0,0.0,1.0);
glScalef(0.04,0.04,0.0);
glColor3f(0,0,0);
glutSolidSphere(4,100,100);
glPopMatrix();

//nose
glLineWidth(1);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(160.5-xp,112.8-yp);
glVertex2f(160.5-xp,112-yp);
glEnd();

//mouth
glLineWidth(1);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(160.2-xp,111.3-yp);
glVertex2f(160.8-xp,111.3-yp);
glEnd();

//eyebrow left
glLineWidth(1);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(159.8-xp,113.5-yp);
glVertex2f(160.2-xp,113.5-yp);
glEnd();

//eyebrow right
glLineWidth(1);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(160.8-xp,113.5-yp);
glVertex2f(161.2-xp,113.5-yp);
glEnd();

//shirt
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(159.5-xp,109.5-yp);
	glVertex2f(161.4-xp,109.5-yp);
	glVertex2f(161.4-xp,104-yp);
	glVertex2f(159.5-xp,104-yp);
	glEnd();
//pant left side
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(159.5-xp,104-yp);
	glVertex2f(159-xp,102-yp);
	glVertex2f(159-xp,99-yp);
	glVertex2f(159.5-xp,99-yp);
	glVertex2f(160.3-xp,104-yp);
	glEnd();
	//right side
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(160.3-xp,104-yp);
	glVertex2f(161-xp,102-yp);
	glVertex2f(160.4-xp,99-yp);
	glVertex2f(161-xp,99-yp);
	glVertex2f(161.5-xp,102-yp);
	glVertex2f(161.4-xp,104-yp);
	glEnd();
	
	//left leg
	glBegin(GL_POLYGON);	
	glColor3f(0.925,0.769,0.433);
	glVertex2f(159.1-xp,99-yp);
	glVertex2f(159.5-xp,99-yp);
	glVertex2f(159.45-xp,98-yp);
	glVertex2f(159.1-xp,98-yp);
//	glVertex2f(161.5,102);
//	glVertex2f(161.4,104);
	glEnd();
	
		//right leg
	glBegin(GL_POLYGON);	
	glColor3f(0.925,0.769,0.433);
	glVertex2f(160.5-xp,99-yp);
	glVertex2f(161-xp,99-yp);
	glVertex2f(160.9-xp,98-yp);
	glVertex2f(160.5-xp,98-yp);
//	glVertex2f(161.5,102);
//	glVertex2f(161.4,104);
	glEnd();
	
	//left shoe
	glBegin(GL_POLYGON);	
	glColor3f(0,0,0);
	glVertex2f(159.5-xp,98-yp);
	glVertex2f(159.5-xp,97.2-yp);
	glVertex2f(159-xp,97-yp);
	glVertex2f(159-xp,97.2-yp);
	glVertex2f(159.1-xp,98-yp);
//	glVertex2f(161.4,104);
	glEnd();
	
		//right shoe
	glBegin(GL_POLYGON);	
	glColor3f(0,0,0);
	glVertex2f(160.5-xp,98-yp);
	glVertex2f(160.9-xp,98-yp);
	glVertex2f(160.8-xp,97.2-yp);
	glVertex2f(160.4-xp,97.2-yp);
	glVertex2f(160.6-xp,97.3-yp);
//	glVertex2f(161.4,104);
	glEnd();
	
	//left hand
	glBegin(GL_POLYGON);	
	glColor3f(1,0,0);
	glVertex2f(159.7-xp,109.5-yp);
	glVertex2f(158.9-xp,112-yp);
	glVertex2f(158.5-xp,115-yp);
	glVertex2f(158-xp,115-yp);
	glVertex2f(158.6-xp,111.7-yp);
	glVertex2f(159.5-xp,108.7-yp);
	glEnd();
	
/*	//left hand
	glBegin(GL_POLYGON);	
	glColor3f(0,0,1);
	glVertex2f(159.7,109.5);
	glVertex2f(158.9,112);
	glVertex2f(158,114);
	glVertex2f(157.3,114);
	glVertex2f(158.3,111.7);
	glVertex2f(159.5,108.7);
	glEnd();*/
		
	//right hand
	glBegin(GL_POLYGON);	
	glColor3f(1,0,0);
	glVertex2f(161.3-xp,109.5-yp);
	glVertex2f(162.1-xp,112-yp);
	glVertex2f(162.5-xp,115-yp);
	glVertex2f(163-xp,115-yp);
	glVertex2f(162.4-xp,111.7-yp);
	glVertex2f(161.5-xp,108.6-yp);
	glEnd();

	
	//right fingers
	glBegin(GL_POLYGON);	
	glColor3f(0.925,0.769,0.433);
	glVertex2f(162.5-xp,115-yp);
	glVertex2f(163-xp,115-yp);
	glVertex2f(163-xp,116-yp);
	glVertex2f(162.5-xp,116-yp);
//	glVertex2f(162.4,111.7);
//	glVertex2f(161.6,108.7);
	glEnd();
		
	//left fingers
	glBegin(GL_POLYGON);	
	glColor3f(0.925,0.769,0.433);
	glVertex2f(158.5-xp,115-yp);
	glVertex2f(158-xp,115-yp);
	glVertex2f(158-xp,116-yp);
	glVertex2f(158.5-xp,116-yp);
//	glVertex2f(158.6,111.7);
//	glVertex2f(159.5,108.7);
	glEnd();
}

//FUNCTION FOR CLOUDS
void cloudp()
{
	//CLOUD_GROUP_1_OUTTER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(70+cw1,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(85+cw1,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(72.5+cw1,136,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(78+cw1,138,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(84.5+cw1,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(74+cw1,125,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(82+cw1,126,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//CLOUD_GROUP_1_INNER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(70+cw1,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(85+cw1,130,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(72.5+cw1,136,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(78+cw1,138,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(84.5+cw1,133,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(74+cw1,125,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(82+cw1,126,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	
	

	//CLOUD_GROUP2_OUTTER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(110+cw1,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(125+cw1,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(112.5+cw1,176,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(118+cw1,178,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(124.5+cw1,173,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(114+cw1,165,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(123+cw1,165,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//CLOUD_GROUP2_INNER
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(110+cw1,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(125+cw1,170,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(112.5+cw1,176,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(118+cw1,178,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(124.5+cw1,173,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(114+cw1,165,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(123+cw1,165,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();


	//CLOUD_GROUP_3
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(170+cw1,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(185+cw1,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(172.5+cw1,146,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(178+cw1,148,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(184.5+cw1,143,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(174+cw1,135,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(182+cw1,136,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(0.95,0.95,0.95);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//CLOUD_GROUP_3_inner
	//cloud_1 horizontal_left
	glPushMatrix();
	glTranslatef(170+cw1,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_2 horizontal_right
	glPushMatrix();
	glTranslatef(185+cw1,140,0.0);
	glScalef(0.8,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topleft
	glPushMatrix();
	glTranslatef(172.5+cw1,146,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_topmost
	glPushMatrix();
	glTranslatef(178+cw1,148,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_6_topright
	glPushMatrix();
	glTranslatef(184.5+cw1,143,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(1,1,1);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottomleft
	glPushMatrix();
	glTranslatef(174+cw1,135,0.0);
	glScalef(0.5,0.5,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//cloud_3 horizontal_bottom_right
	glPushMatrix();
	glTranslatef(182+cw1,136,0.0);
	glScalef(0.5,0.6,0);
	glColor3f(1,1.0,1.0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
}



//FUCTION_FOR_SUNRAypS
void sunrayp()
{	//RAyp TOP
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(30,168);	
	glColor3f(0.29,0.772,0.929);
	glVertex2f(60,200);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(10,200);
	glEnd();
	//RAyp LEFT
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(30,168);	
	glColor3f(0.695,0.917,0.996);
	glVertex2f(10,140);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(10,200);
	glEnd();
	//RAyp BOTTOM
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(30,168);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(10,140);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(60,140);
	glEnd();
	//RAyp RIGHT
	glBegin(GL_POLYGON);
	glColor3f(1,0.98,0.57);
	glVertex2f(30,168);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(60,140);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(60,200);
	glEnd();		
}



//FUNCTION_FOR_MOUNTAIN
void mountainp(){
	
	//MOUNTAIN_ROW_4
	//MOUNTAIN_FRONT_LEFT_MOST1
	glBegin(GL_POLYGON);
	glColor3f(0.501,0.878,0.64);
	glVertex2f(-10,55);
	glVertex2f(60,55);
	glVertex2f(30,105);
	glVertex2f(20,105);
	glEnd();
	//MOUNTAIN_SLOPE_TOP1
	glPushMatrix();
	glTranslatef(25,97.6,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.501,0.878,0.64);
	glutSolidSphere(16.1,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT_LEFT_MOST2
	glBegin(GL_POLYGON);
	glColor3f(0.501,0.878,0.64);
	glVertex2f(30,55);
	glVertex2f(100,55);
	glVertex2f(70,105);
	glVertex2f(60,105);
	glEnd();
	//MOUNTAIN_SLOPE_TOP2
	glPushMatrix();
	glTranslatef(65,97.6,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.501,0.878,0.64);
	glutSolidSphere(16.1,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT_LEFT_MOST3
	glBegin(GL_POLYGON);
	glColor3f(0.501,0.878,0.64);
	glVertex2f(85,60);
	glVertex2f(155,60);
	glVertex2f(125,110);
	glVertex2f(115,110);
	glEnd();
	//MOUNTAIN_SLOPE_TOP3
	glPushMatrix();
	glTranslatef(120,102.6,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.501,0.878,0.64);
	glutSolidSphere(16.1,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT_LEFT_MOST4
	glBegin(GL_POLYGON);
	glColor3f(0.501,0.878,0.64);
	glVertex2f(140,55);
	glVertex2f(210,55);
	glVertex2f(180,105);
	glVertex2f(170,105);
	glEnd();
	//MOUNTAIN_SLOPE_TOP4
	glPushMatrix();
	glTranslatef(175,97.6,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.501,0.878,0.64);
	glutSolidSphere(16.1,100,100);
	glPopMatrix();
	
	
	//MOUNTAIN_ROW_3
	//MOUNTAIN_FRONT_LEFT_MOST_3
	glBegin(GL_POLYGON);
	glColor3f(0.203,0.701,0.541);
	glVertex2f(120,55);
	glVertex2f(180,55);
	glVertex2f(155,100);
	glVertex2f(145,100);
	glEnd();
	//MOUNTAIN_SLOPE_TOP_3
	glPushMatrix();
	glTranslatef(150,92.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.203,0.701,0.541);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT3_LEFT_MOST2
	glBegin(GL_POLYGON);
	glColor3f(0.203,0.701,0.541);
	glVertex2f(-25,45);
	glVertex2f(35,45);
	glVertex2f(10,90);
	glVertex2f(0,90);
	glEnd();
	//MOUNTAIN_SLOPE_TOP2
	glPushMatrix();
	glTranslatef(05,82.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.203,0.701,0.541);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT3_LEFT_MOST1
	glBegin(GL_POLYGON);
	glColor3f(0.203,0.701,0.541);
	glVertex2f(15,45);
	glVertex2f(75,45);
	glVertex2f(50,90);
	glVertex2f(40,90);
	glEnd();
	//MOUNTAIN_SLOPE_TOP1
	glPushMatrix();
	glTranslatef(45,82.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.203,0.701,0.541);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_ROW_2
	//MOUNTAIN_FRONT_LEFT_MOST_4
	glBegin(GL_POLYGON);
	glColor3f(0.176,0.611,0.474);
	glVertex2f(165,50);
	glVertex2f(225,50);
	glVertex2f(200,95);
	glVertex2f(190,95);
	glEnd();
	//MOUNTAIN_SLOPE_TOP_4
	glPushMatrix();
	glTranslatef(195,87.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.176,0.611,0.474);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT_LEFT_MOST_3
	glBegin(GL_POLYGON);
	glColor3f(0.176,0.611,0.474);
	glVertex2f(100,40);
	glVertex2f(160,40);
	glVertex2f(135,85);
	glVertex2f(125,85);
	glEnd();
	//MOUNTAIN_SLOPE_TOP_3
	glPushMatrix();
	glTranslatef(130,77.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.176,0.611,0.474);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT2_LEFT_MOST2
	glBegin(GL_POLYGON);
	glColor3f(0.176,0.611,0.474);
	glVertex2f(60,45);
	glVertex2f(120,45);
	glVertex2f(95,95);
	glVertex2f(85,95);
	glEnd();
	//MOUNTAIN_SLOPE_TOP2
	glPushMatrix();
	glTranslatef(90,87.6,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.176,0.611,0.474);
	glutSolidSphere(16.1,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT2_LEFT_MOST1
	glBegin(GL_POLYGON);
	glColor3f(0.176,0.611,0.474);
	glVertex2f(-5,35);
	glVertex2f(55,35);
	glVertex2f(30,80);
	glVertex2f(20,80);
	glEnd();
	//MOUNTAIN_SLOPE_TOP1
	glPushMatrix();
	glTranslatef(25,72.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.176,0.611,0.474);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	
	
	
	//MOUNTAIN_ROW_1
	//MOUNTAIN_FRONT_LEFT_MOST_4
	glBegin(GL_POLYGON);
	glColor3f(0.149,0.521,0.403);
	glVertex2f(150,40);
	glVertex2f(210,40);
	glVertex2f(185,85);
	glVertex2f(175,85);
	glEnd();
	//MOUNTAIN_SLOPE_TOP_4
	glPushMatrix();
	glTranslatef(180,77.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.149,0.521,0.403);
	glutSolidSphere(16,100,100);
	glPopMatrix();	
	
	//MOUNTAIN_FRONT_LEFT_MOST_3
	glBegin(GL_POLYGON);
	glColor3f(0.149,0.521,0.403);
	glVertex2f(80,40);
	glVertex2f(140,40);
	glVertex2f(115,85);
	glVertex2f(105,85);
	glEnd();
	//MOUNTAIN_SLOPE_TOP_3
	glPushMatrix();
	glTranslatef(110,77.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.149,0.521,0.403);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT_LEFT_MOST_2
	glBegin(GL_POLYGON);
	glColor3f(0.149,0.521,0.403);
	glVertex2f(30,35);
	glVertex2f(90,35);
	glVertex2f(65,80);
	glVertex2f(55,80);
	glEnd();
	//MOUNTAIN_SLOPE_TOP2
	glPushMatrix();
	glTranslatef(60,72.8,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.149,0.521,0.403);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	
	//MOUNTAIN_FRONT_LEFT_MOST1
	glBegin(GL_POLYGON);
	glColor3f(0.149,0.521,0.403);
	glVertex2f(-20,20);
	glVertex2f(40,20);
	glVertex2f(15,65);
	glVertex2f(05,65);
	glEnd();
	//MOUNTAIN_SLOPE_TOP1
	glPushMatrix();
	glTranslatef(10,57.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.149,0.521,0.403);
	glutSolidSphere(16,100,100);
	glPopMatrix();	
	
}

//FUNCTION_FOR_SUN
void sunp()
{	
	//FUCNTION_CALL_FOR_SUNRAyp
	sunrayp();

	//SUN_OUTTER
	glPushMatrix();
	glTranslatef(30,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.56,0.117);
	glutSolidSphere(22,100,100);
	glPopMatrix();	
	
	//SUN_INNER
	glPushMatrix();
	glTranslatef(30,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.59,0.117);
	glutSolidSphere(18,100,100);
	glPopMatrix();
	//SUN_INNER_INNER
	glPushMatrix();
	glTranslatef(30,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.62,0.117);
	glutSolidSphere(14,100,100);
	glPopMatrix();	
	//SUN_INNER_INNER_INNER
	glPushMatrix();
	glTranslatef(30,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.65,0.117);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//SUN_INNER_INNER_INNER_INNER
	glPushMatrix();
	glTranslatef(30,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.683,0.117);
	glutSolidSphere(6,100,100);
	glPopMatrix();
	//SUN_INNER_INNER_INNER_INNER_INNER
	glPushMatrix();
	glTranslatef(30,168,0.0);
	glScalef(0.4,0.7,0);
	glColor3f(0.968,0.713,0.117);
	glutSolidSphere(2,100,100);
	glPopMatrix();
	
}


//FUNCTION_FOR_TREE_SCENE_3
void treep(){
	//TREE_1_RIGHT_SIDE
	//TREE_STEM_STRAIGHT
	glBegin(GL_POLYGON);
	glColor3ub(138, 85, 7);
	glVertex2f(176,57);
	glVertex2f(180,57);
	glColor3ub(120, 73, 5);
	glVertex2f(180,10);
	glVertex2f(176,10);
	glEnd();
	//TREE_BRANCH_LEFT
	glBegin(GL_POLYGON);
	glColor3ub(138, 85, 7);
	glVertex2f(180,30);
	glVertex2f(180,36);
	glColor3ub(120, 73, 5);
	glVertex2f(186,57);
	glVertex2f(188,57);
	glEnd();
	//ORDER_STARTS_FROM FRONT_TO_BACK
	//SPHERE_ORDER_STARTS+FROM_LEFT_TO_RIGHT	
	//TREE_SPHERE_NORMAL_24
	glPushMatrix();
	glTranslatef(175,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_23
	glPushMatrix();
	glTranslatef(185,88,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_22
	glPushMatrix();
	glTranslatef(180,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_21
	glPushMatrix();
	glTranslatef(171,85,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_20
	glPushMatrix();
	glTranslatef(185,83,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_19
	glPushMatrix();
	glTranslatef(177,83,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_18
	glPushMatrix();
	glTranslatef(167.5,80.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_17
	glPushMatrix();
	glTranslatef(173,78,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_16
	glPushMatrix();
	glTranslatef(190,73,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_15
	glPushMatrix();
	glTranslatef(185,76,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_14
	glPushMatrix();
	glTranslatef(178,76,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_13
	glPushMatrix();
	glTranslatef(169,74.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_12
	glPushMatrix();
	glTranslatef(166,69,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_11
	glPushMatrix();
	glTranslatef(175,73,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_10
	glPushMatrix();
	glTranslatef(180,68,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_9
	glPushMatrix();
	glTranslatef(171,69,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_8
	glPushMatrix();
	glTranslatef(169,66,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(13,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_7
	glPushMatrix();
	glTranslatef(188,60,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_6
	glPushMatrix();
	glTranslatef(184,60,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_5
	glPushMatrix();
	glTranslatef(180,57,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_4
	glPushMatrix();
	glTranslatef(176,64,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();	
	//TREE_SPHERE_NORMAL_3
	glPushMatrix();
	glTranslatef(171,60,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_2
	glPushMatrix();
	glTranslatef(168,55,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_1
	glPushMatrix();
	glTranslatef(175,50,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	
	//TREE_3_LEFT_SIDE
	//TREE_STEM_STRAIGHT
	glBegin(GL_POLYGON);
	glColor3ub(138, 85, 7);
	glVertex2f(16,37);
	glVertex2f(20,37);
	glColor3ub(120, 73, 5);
	glVertex2f(20,0);
	glVertex2f(16,0);
	glEnd();	
	//TREE_BRANCH_LEFT
	glBegin(GL_POLYGON);
	glColor3ub(138, 85, 7);
	glVertex2f(20,10);
	glVertex2f(20,16);
	glColor3ub(120, 73, 5);
	glVertex2f(25,37);
	glVertex2f(27,37);
	glEnd();
	//ORDER_STARTS_FROM FRONT_TO_BACK
	//SPHERE_ORDER_STARTS+FROM_LEFT_TO_RIGHT	
	//TREE_SPHERE_NORMAL_24
	glPushMatrix();
	glTranslatef(15,70,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_23
	glPushMatrix();
	glTranslatef(25,68,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_22
	glPushMatrix();
	glTranslatef(20,70,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_21
	glPushMatrix();
	glTranslatef(11,65,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_20
	glPushMatrix();
	glTranslatef(25,63,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_19
	glPushMatrix();
	glTranslatef(17,63,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_18
	glPushMatrix();
	glTranslatef(17.5,60.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_17
	glPushMatrix();
	glTranslatef(13,58,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_16
	glPushMatrix();
	glTranslatef(30,53,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_15
	glPushMatrix();
	glTranslatef(25,56,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_14
	glPushMatrix();
	glTranslatef(18,56,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_13
	glPushMatrix();
	glTranslatef(9,54.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_12
	glPushMatrix();
	glTranslatef(6,49,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_11
	glPushMatrix();
	glTranslatef(15,53,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_10
	glPushMatrix();
	glTranslatef(20,48,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_9
	glPushMatrix();
	glTranslatef(11,49,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_8
	glPushMatrix();
	glTranslatef(9,46,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(13,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_7
	glPushMatrix();
	glTranslatef(28,40,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_6
	glPushMatrix();
	glTranslatef(24,40,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_5
	glPushMatrix();
	glTranslatef(20,37,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_4
	glPushMatrix();
	glTranslatef(16,44,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();	
	//TREE_SPHERE_NORMAL_3
	glPushMatrix();
	glTranslatef(11,40,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_2
	glPushMatrix();
	glTranslatef(8,35,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_1
	glPushMatrix();
	glTranslatef(15,30,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	
	
	//TREE_2_LEFT_SIDE
	//TREE_STEM_STRAIGHT
	glBegin(GL_POLYGON);
	glColor3ub(138, 85, 7);
	glVertex2f(36,47);
	glVertex2f(40,47);
	glColor3ub(120, 73, 5);
	glVertex2f(40,00);
	glVertex2f(36,00);
	glEnd();	
	//TREE_BRANCH_LEFT
	glBegin(GL_POLYGON);
	glColor3ub(138, 85, 7);
	glVertex2f(40,20);
	glVertex2f(40,26);
	glColor3ub(120, 73, 5);
	glVertex2f(45,47);
	glVertex2f(47,47);
	glEnd();
	//ORDER_STARTS_FROM FRONT_TO_BACK
	//SPHERE_ORDER_STARTS+FROM_LEFT_TO_RIGHT	
	//TREE_SPHERE_NORMAL_24
	glPushMatrix();
	glTranslatef(35,80,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_23
	glPushMatrix();
	glTranslatef(45,78,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_22
	glPushMatrix();
	glTranslatef(40,80,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_21
	glPushMatrix();
	glTranslatef(31,75,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_20
	glPushMatrix();
	glTranslatef(45,73,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_19
	glPushMatrix();
	glTranslatef(37,73,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_18
	glPushMatrix();
	glTranslatef(27.5,70.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_17
	glPushMatrix();
	glTranslatef(33,68,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_16
	glPushMatrix();
	glTranslatef(50,63,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_15
	glPushMatrix();
	glTranslatef(45,66,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_14
	glPushMatrix();
	glTranslatef(38,66,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_13
	glPushMatrix();
	glTranslatef(29,64.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_12
	glPushMatrix();
	glTranslatef(26,59,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_11
	glPushMatrix();
	glTranslatef(35,63,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_10
	glPushMatrix();
	glTranslatef(40,58,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_9
	glPushMatrix();
	glTranslatef(31,59,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_8
	glPushMatrix();
	glTranslatef(29,56,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(13,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_7
	glPushMatrix();
	glTranslatef(48,50,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_NORMAL_6
	glPushMatrix();
	glTranslatef(44,50,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_5
	glPushMatrix();
	glTranslatef(40,47,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//TREE_SPHERE_LIGHT_4
	glPushMatrix();
	glTranslatef(36,54,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(15,100,100);
	glPopMatrix();	
	//TREE_SPHERE_NORMAL_3
	glPushMatrix();
	glTranslatef(31,50,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_2
	glPushMatrix();
	glTranslatef(28,45,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//TREE_SPHERE_DARK_1
	glPushMatrix();
	glTranslatef(35,40,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	
	//GRASS_ORDERING_FROM_RIGHT_TO_LEFT
	//FRONT_TO_BACK
	//GRASS_LIGHT_7
	glPushMatrix();
	glTranslatef(198,16,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_6
	glPushMatrix();
	glTranslatef(194,10,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_DARK_5
	glPushMatrix();
	glTranslatef(191,3,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_4
	glPushMatrix();
	glTranslatef(199,13,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_3
	glPushMatrix();
	glTranslatef(195,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_LIGHT_2
	glPushMatrix();
	glTranslatef(201,8,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(198,3,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	
	//GRASS_PART_2
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(177,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(172,2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(184,1.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(180,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(180,-2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(175,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(168,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_
	glPushMatrix();
	glTranslatef(170,-2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//GRASS_PART_3	
	//GRASS_DARK_
	glPushMatrix();
	glTranslatef(156.5,7,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_NORMAL_
	glPushMatrix();
	glTranslatef(151,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(155,6,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(150,2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(162,1.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(158,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(158,-2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(153,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(146,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_
	glPushMatrix();
	glTranslatef(148,-2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//GRASS_PART_4
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(37,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(32,2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(44,1.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(40,5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(40,-2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(35,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(28,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_
	glPushMatrix();
	glTranslatef(30,-2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	//GRASS_PART_5
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(2,3,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_
	glPushMatrix();
	glTranslatef(5,0,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_NORMAL_
	glPushMatrix();
	glTranslatef(1,1,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(12,100,100);
	glPopMatrix();	
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(17,2,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_LIGHT_
	glPushMatrix();
	glTranslatef(12,-1,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(74,142,29);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(24,-1.5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_0
	glPushMatrix();
	glTranslatef(20,-1,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(20,-5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(15,-3,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//GRASS_DARK_1
	glPushMatrix();
	glTranslatef(8,-3,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(24,56,15);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//GRASS_NORMAL_
	glPushMatrix();
	glTranslatef(10,-5,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(33,90,25);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
}

//FUNCTION_FOR_LAND_SCENE_3
void landp()
{
	//LAND_SLOPE_LEFTMOST
	glPushMatrix();
	glTranslatef(69,10,0.0);
	glScalef(1.8,0.9,0);
	glColor3f(0.054,0.431,0.192);
	glutSolidSphere(40,100,100);
	glPopMatrix();
	
	//LAND_SLOPE_RIGHTMOST
	glPushMatrix();
	glTranslatef(169,25,0.0);
	glScalef(2.2,0.9,0);
	glColor3f(0.054,0.431,0.192);
	//glColor3f(0.266,0.541,0.184);//Initial
	glutSolidSphere(40,100,100);
	glPopMatrix();
	
	//LAND_BOTTOM_BASE_RECTANGLE
	glBegin(GL_POLYGON);
	//glColor3f(0.133,0.329,0.078);
	glColor3f(0.054,0.431,0.192);
	glVertex2i(0,0);
	glColor3f(0.054,0.431,0.192);
	//glColor3f(0.266,0.541,0.184);
	glVertex2i(0,20);
	glColor3f(0.054,0.431,0.192);
	//glColor3f(0.266,0.541,0.184);
	glVertex2i(200,20);
	//glColor3f(0.133,0.229,0.078);
	glColor3f(0.054,0.431,0.192);
	glVertex2i(200,0);
	glEnd();
	
}


//FUNCTION_CALL_FOR_SKY_SCENE_3
void skyp()
{
	//lowwer section
	glBegin(GL_POLYGON);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(0,20);
	glVertex2f(0,200);
	glVertex2f(200,200);
	glVertex2f(200,20);
	glEnd();
	//upper section
	glBegin(GL_POLYGON);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(0,140);
	glColor3f(0.695,0.917,0.996);
	glVertex2f(200,140);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(200,200);
	glColor3f(0.29,0.772,0.929);
	glVertex2f(0,200);
	glEnd();
	
	//Function_CALL_FOR_SUN
	sunp();
	
	//FUNCTION_CALL_FOR_CLOUD
	cloudp();
	
}
void display3()
{
glClear(GL_COLOR_BUFFER_BIT);


//Function_CALL_for_skyp
skyp();

//FUNCTION_CALL_FOR_MOUNTAIN
mountainp();

//Function_CALL_for_skyp
landp();


//parachute
glPushMatrix();
glTranslatef(160-xp,175.5-yp,0);
glRotatef(0,0,0.0,1.0);
glScalef(5,2,0.0);
glColor3f(0.757,0.050,0);//leaf green
glutSolidSphere(4,100,100);
glPopMatrix();

//rectangle
	glBegin(GL_POLYGON);
	glColor3f(0.757,0.050,0);//leaf green
	glVertex2f(140-xp,174.5-yp);
	glVertex2f(180-xp,174.5-yp);
	glVertex2f(180-xp,160-yp);
	glVertex2f(140-xp,160-yp);
	glEnd();



//sphere
circlep(144,160);
circlep(150,160);
circlep(156,160);
circlep(162,160);
circlep(168,160);
circlep(174,160);
circlep(176,160);

//threads1
threadp(147,157.5,147,181.5);
threadp(153,157.5,153,183.5);
threadp(159,157.5,159,183.7);
threadp(165,157.5,165,183.5);
threadp(171,157.5,171,182.5);
threadp(176,156,176,180);

threadp(147,157.5,157,125);
threadp(153,157.5,157,125);
threadp(159,157.5,157,125);
threadp(165,157.5,165,125);
threadp(171,157.5,165,125);
threadp(176,156,165,125);
threadp(157,125,160,110);
threadp(165,125,161,110);
threadp(157,125,158,115);
threadp(165,125,163,115);

//human
human();


		glPushMatrix();
		printwagamon(70,5,"PRESS 'h' FOR NEXT SCENE",2);
		glPopMatrix();

//FUNCTION_CALL_FOR_TREE_SCENE_3
treep();		

glFlush();
}

//AVATAR BOAT RACE
void printabr(int x,int y,char *string,int font) {
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}
void bbr()
{
		glPushMatrix();
		printabr(25,160,"Kerala seems like a", 1);
		glPopMatrix();

		glPushMatrix();
		printabr(23,153," wonderful place to visit.", 1);
		glPopMatrix();
		
		glPushMatrix();
		printabr(22,145," I want to know more", 1);
		glPopMatrix();


		
}
void gbr()
{
		glPushMatrix();
		printabr(122,160,"Vallam Kali is a ", 1);
		glPopMatrix();
		
		glPushMatrix();
		printabr(110,153,"traditional boat race in Kerala.", 1);
		glPopMatrix();
		
		glPushMatrix();
		printabr(108,146,"It is mainly conducted during the", 1);
		glPopMatrix();
		
		glPushMatrix();
		printabr(107,139,"season of  the harvest festival",1);
		glPopMatrix();
		
		
		glPushMatrix();
		printabr(115,133,"Onam in Autumn", 1);
		glPopMatrix();
 
}

void avatarbr()
 {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    
background();

//girl	
girl();

//boy
boy();

if(t1<=10)
	{
	bbr();
	t1=t1+1;
}
else if(t2>=11)
{
	bbr();
	gbr();
	t2=t2+1;
}

		glPushMatrix();
		printabr(70,5,"PRESS 'i' FOR NEXT SCENE", 2);
		glPopMatrix();
  
glFlush();
}void bird()
{
	//BIRD1
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(180-x2+wi,180);
	glVertex2f(185-x2,175);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(185-x2,175);
	glVertex2f(190-x2-wi,180);
	glEnd();
	
	//BIRD2
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(190-x2+wi,175);
	glVertex2f(195-x2,170);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(195-x2,170);
	glVertex2f(200-x2-wi,175);
	glEnd();
	
	//BIRD3
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(200-x2+wi,185);
	glVertex2f(205-x2,180);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(205-x2,180);
	glVertex2f(210-x2-wi,185);
	glEnd();
	
	//BIRD4
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(220-x2+wi,185);
	glVertex2f(225-x2,180);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(225-x2,180);
	glVertex2f(230-x2-wi,185);
	glEnd();
	
	//BIRD5
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(230-x2+wi,175);
	glVertex2f(235-x2,170);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(235-x2,170);
	glVertex2f(240-x2-wi,175);
	glEnd();
	
	//BIRD6
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(223-x2+wi,165);
	glVertex2f(228-x2,160);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(228-x2,160);
	glVertex2f(233-x2-wi,165);
	glEnd();
}

void house()
{
	//HOUSE1_ON_THE_RIGHT_LAND
	//HOUSE_SQUARE_BLOCK
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(134.5,114);
	glVertex2f(129.5,114);
	glVertex2f(129.5,120);
	glVertex2f(134.5,120);
	glEnd();
	//HOUSE_TRIANGLE_BLOCK
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(136,120);
	glVertex2f(128,120);
	glVertex2f(132,125);	
	glEnd();
	//HOUSE_CHIMNEY
	glLineWidth(5.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(130,120);
	glVertex2f(130,126);	
	glEnd();
	
	//HOUSE_2_ON_THE_RIGHT_LAND
	//HOUSE_MAIN_BLOCK
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(171.5,118);
	glVertex2f(183.5,118);
	glVertex2f(183.5,127);
	glVertex2f(171.5,127);
	glEnd();
	//HOUSE_ROOF_BLOCK
	glLineWidth(6.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(170,127);
	glVertex2f(185,127);
	glEnd();
	//HOUSE_2ND_FLOOR_BLOCK
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(177.5,134);
	glVertex2f(183.5,134);
	glVertex2f(183.5,127);
	glVertex2f(177.5,127);
	glEnd();
	//HOUSE_2ND_ROOF_BLOCK
	glLineWidth(6.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(176,134);
	glVertex2f(185,134);
	glEnd();
	//HOUSE_ROOF_GRILL_BLOCK
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(172,129.5);
	glVertex2f(179,129.5);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(172,128.5);
	glVertex2f(179,128.5);
	glEnd();
	glLineWidth(5.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(172,127);
	glVertex2f(172,130);
	glEnd();
	
	
	//HOUSE_1_ON_CURVED_LAND
	//HOUSE_SQUARE_BLOCK
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(98,112);
	glVertex2f(94,112);
	glVertex2f(94,116);
	glVertex2f(98,116);
	glEnd();
	//HOUSE_TRIANGLE_BLOCK
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(93,116);
	glVertex2f(99,116);
	glVertex2f(96,120);	
	glEnd();
	//HOUSE_CHIMNEY
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(94.5,117);
	glVertex2f(94.5,120);	
	glEnd();
}

void tree()
{	//CURVED_LAND_TREES
	//tree1
	//bushleft
	glPushMatrix();
	glTranslatef(57,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(58.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(57.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(57.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(57.6,120);
	glVertex2f(57.6,114);
	glEnd();	
	//tree2
	//bushleft
	glPushMatrix();
	glTranslatef(60,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(61.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(60.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(60.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(60.6,120);
	glVertex2f(60.6,115);
	glEnd();
	//tree3
	//bushleft
	glPushMatrix();
	glTranslatef(63,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(64.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(63.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(63.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(63.6,120);
	glVertex2f(63.6,114);
	glEnd();
	//tree4
	//bushleft
	glPushMatrix();
	glTranslatef(66,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(67.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(66.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(66.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(66.6,120);
	glVertex2f(66.6,114);
	glEnd();

	
	//LEFT_MOST_LAND
	//GRASS_BUSHES
	//LEVEL_1
	//BUSH_11
	glPushMatrix();
	glTranslatef(34.5,114.4,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//BUSH_12
	glPushMatrix();
	glTranslatef(35.5,114.1,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//BUSH_12
	glPushMatrix();
	glTranslatef(36.5,113.5,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//LEVEL_2
	//BUSH_21
	glPushMatrix();
	glTranslatef(33,115,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//BUSH_22
	glPushMatrix();
	glTranslatef(34.5,115,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//BUSH_23
	glPushMatrix();
	glTranslatef(35.8,115,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//LEVEL_3
	//BUSH_31
	glPushMatrix();
	glTranslatef(34,116.3,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//BUSH_32
	glPushMatrix();
	glTranslatef(35,116.3,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//LEVEL4
	//BUSH_41
	glPushMatrix();
	glTranslatef(34.5,117.6,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	
	
	//TREE_ON_MIDDLE_LAND
	//T1
	//bushleft
	glPushMatrix();
	glTranslatef(88,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(89.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(88.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(88.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(88.6,120);
	glVertex2f(88.6,112);
	glEnd();
	//T2
	//bushleft
	glPushMatrix();
	glTranslatef(87,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(86.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(86.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(86.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(86.6,120);
	glVertex2f(86.6,112);
	glEnd();
	
	
	//TREES_ON_RIGHT_LAND
	//RIGHT_LAND_tree1
	//bushleft
	glPushMatrix();
	glTranslatef(137,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(138.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(137.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(137.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(137.6,120);
	glVertex2f(137.6,114);
	glEnd();	
	
	
	//RIGHT_LAND_tree2
	//bushleft
	glPushMatrix();
	glTranslatef(139,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(140.2,120,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(139.6,120.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(139.6,119.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(139.6,120);
	glVertex2f(139.6,114);
	glEnd();

	//RIGHT_MOST_LAND_TREES
	//tree1
	//bushleft
	glPushMatrix();
	glTranslatef(190,125,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(191.2,125,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(190.6,125.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(190.6,124.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(190.6,125);
	glVertex2f(190.6,119);
	glEnd();
	//tree2
	//bushleft
	glPushMatrix();
	glTranslatef(192,125,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();	
	//bushrgiht
	glPushMatrix();
	glTranslatef(193.2,125,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushtop
	glPushMatrix();
	glTranslatef(192.6,125.9,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//bushbottom
	glPushMatrix();
	glTranslatef(192.6,124.5,0.0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(.8,10,10);
	glPopMatrix();
	//stem
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(192.6,125);
	glVertex2f(192.6,119);
	glEnd();	
}

void mountain()
{
	//mountain at right
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(200,110);
	glVertex2f(200,117);
	glVertex2f(185,121);
	glVertex2f(175,118);
	glVertex2f(175,110);
	glEnd();
	//mountain at right
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(175,110);
	glVertex2f(177,118);
	glVertex2f(170,121);
	glVertex2f(163,117);
	glVertex2f(160,120);
	glVertex2f(150,115);
	glVertex2f(150,110);
	glEnd();	
	//mountain at right
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(150,115);
	glVertex2f(140,117);
	glVertex2f(135,115);
	glVertex2f(123,113);
	glVertex2f(120,110);
	glVertex2f(150,110);
	glEnd();	
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(123,113);
	glVertex2f(117,113);
	glVertex2f(110,110);
	glVertex2f(120,110);
	glEnd();
	
	
	//MIDDLE_MOST_LAND
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(100,110);
	glVertex2f(100,112);
	glVertex2f(90,114);
	glVertex2f(86,112);
	glVertex2f(86,110);
	glEnd();
	//LEFT_CUREVED_EDGE_FOR_ABOVE LAND 
	glPushMatrix();
	glTranslatef(86,109.5,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0,0.0,0.0);
	glutSolidSphere(2.0,10,10);
	glPopMatrix();
	//RIGHT_CUREVED_EDGE_FOR_ABOVE LAND 
	glPushMatrix();
	glTranslatef(100,109.5,0.0);
	glScalef(1,1.1,0.0);
	glColor3f(0,0.0,0.0);
	glutSolidSphere(2.0,10,10);
	glPopMatrix();
	
	
/*	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(83,110);
	glVertex2f(82,114);
	glVertex2f(70,113);
	glVertex2f(70,110);
	glEnd();
*/	
	//curved land middle_right
	glPushMatrix();
	glTranslatef(72,105,0.0);
	glScalef(2.0,1.4,0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(5,100,100);
	glPopMatrix();	
	//curves land middle_left
	glPushMatrix();
	glTranslatef(60,108,0.0);
	glScalef(2.8,1.4,0);
	glColor3f(0.0,0.0,0.0);
	glutSolidSphere(5,100,100);
	glPopMatrix();
	
	//Left land 1stleft
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(0,110);
	glVertex2f(0,140);
	glVertex2f(4,145);
	glVertex2f(15,110);
	glEnd();
		
	//left land 2ndleft
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(6,110);
	glVertex2f(6,130);
	glVertex2f(15,140);
	glVertex2f(28,118);
	glVertex2f(40,110);
	glEnd();
	
	//CURVE_IN_LEFT_LAND
	glPushMatrix();
	glTranslatef(7.4,132.5,0.0);
	glColor3f(0,0.0,0.0);
	glutSolidSphere(2,10,10);
	glPopMatrix();	
	
	//FUNCTION_CALL_ON_HOUSE
	house();
	
	//FUNCTION_CALL_ON_trees
	tree();			
}


//FUNCTION_FOR_SKY
void sky1()
{
	glBegin(GL_POLYGON);
	glColor3f(0.960,0.914,0.546);
	glVertex2f(0,110);
	glColor3f(0.992,0.368,0.325);
	glVertex2f(0,200);
	glColor3f(0.960,0.914,0.546);
	glVertex2f(200,200);
	glColor3f(0.992,0.368,0.325);
	//glColor3f(0.046,0.687,0.625); initial color given by jovi
	glVertex2f(200,110);
	glColor3f(0.960,0.914,0.546);
	glEnd();
}

//FUNCTION_FOR_WATER_WAVE
void water_wave1()
{
		//WAVE_ROW_ORDERING_START_FROM FRONT_TO_BACK
	//ROW_5_5TH_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_12_UP
	glPushMatrix();
	glTranslatef(193+x3,88,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_UP_INNER
	glPushMatrix();
	glTranslatef(193+x3,87.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_12_DOWN
	glPushMatrix();
	glTranslatef(202+x3,90.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x3,91,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//ROW_4_4TH_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_12_UP
	glPushMatrix();
	glTranslatef(193+x3,68,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_UP_INNER
	glPushMatrix();
	glTranslatef(193+x3,67.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_12_DOWN
	glPushMatrix();
	glTranslatef(202+x3,70.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x3,71,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//ROW_3_3RD_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_12_UP
	glPushMatrix();
	glTranslatef(193+x3,48,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_UP_INNER
	glPushMatrix();
	glTranslatef(193+x3,47.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_12_DOWN
	glPushMatrix();
	glTranslatef(202+x3,50.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x3,51,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//ROW_2_2ND_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN_INNER
	glPushMatrix();
	glTranslatef(4+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_12_UP
	glPushMatrix();
	glTranslatef(193+x3,28,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_UP_INNER
	glPushMatrix();
	glTranslatef(193+x3,27.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_12_DOWN
	glPushMatrix();
	glTranslatef(202+x3,30.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_12_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x3,31,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();

	
	//ROW_1_NEAREST
	//WAVE_ORDERING_STARTS_FROM_LEFT_RIGHT
	//WAVE_1_UP
	glPushMatrix();
	glTranslatef(-5+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_UP_INNER
	glPushMatrix();
	glTranslatef(-5+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_1_DOWN
	glPushMatrix();
	glTranslatef(4+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_2_UP
	glPushMatrix();
	glTranslatef(13+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_UP_INNER
	glPushMatrix();
	glTranslatef(13+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_2_DOWN
	glPushMatrix();
	glTranslatef(22+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_2_DOWN_INNER
	glPushMatrix();
	glTranslatef(22+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_3_UP
	glPushMatrix();
	glTranslatef(31+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_UP_INNER
	glPushMatrix();
	glTranslatef(31+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_3_DOWN
	glPushMatrix();
	glTranslatef(40+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_3_DOWN_INNER
	glPushMatrix();
	glTranslatef(40+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_4_UP
	glPushMatrix();
	glTranslatef(49+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_UP_INNER
	glPushMatrix();
	glTranslatef(49+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_4_DOWN
	glPushMatrix();
	glTranslatef(58+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_4_DOWN_INNER
	glPushMatrix();
	glTranslatef(58+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_5_UP
	glPushMatrix();
	glTranslatef(67+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_UP_INNER
	glPushMatrix();
	glTranslatef(67+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_5_DOWN
	glPushMatrix();
	glTranslatef(76+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_5_DOWN_INNER
	glPushMatrix();
	glTranslatef(76+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_6_UP
	glPushMatrix();
	glTranslatef(85+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_UP_INNER
	glPushMatrix();
	glTranslatef(85+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_6_DOWN
	glPushMatrix();
	glTranslatef(94+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_6_DOWN_INNER
	glPushMatrix();
	glTranslatef(94+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_7_UP
	glPushMatrix();
	glTranslatef(103+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_UP_INNER
	glPushMatrix();
	glTranslatef(103+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_7_DOWN
	glPushMatrix();
	glTranslatef(112+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_7_DOWN_INNER
	glPushMatrix();
	glTranslatef(112+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_8_UP
	glPushMatrix();
	glTranslatef(121+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_UP_INNER
	glPushMatrix();
	glTranslatef(121+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_8_DOWN
	glPushMatrix();
	glTranslatef(130+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_8_DOWN_INNER
	glPushMatrix();
	glTranslatef(130+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();	
	
	//WAVE_9_UP
	glPushMatrix();
	glTranslatef(139+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_UP_INNER
	glPushMatrix();
	glTranslatef(139+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_9_DOWN
	glPushMatrix();
	glTranslatef(148+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_9_DOWN_INNER
	glPushMatrix();
	glTranslatef(148+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_10_UP
	glPushMatrix();
	glTranslatef(157+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_UP_INNER
	glPushMatrix();
	glTranslatef(157+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_10_DOWN
	glPushMatrix();
	glTranslatef(166+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_10_DOWN_INNER
	glPushMatrix();
	glTranslatef(166+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(175+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(175+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(184+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(184+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	
	//WAVE_11_UP
	glPushMatrix();
	glTranslatef(193+x3,8,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_UP_INNER
	glPushMatrix();
	glTranslatef(193+x3,7.5,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
	//WAVE_11_DOWN
	glPushMatrix();
	glTranslatef(202+x3,10.5,0.0);
	glScalef(0.6,0.5,0);
	glColor3f(0,0.329,0.458);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//WAVE_11_DOWN_INNER
	glPushMatrix();
	glTranslatef(202+x3,11,0.0);
	glScalef(0.7,0.5,0);
	glColor3f(0,0.411,0.580);
	glutSolidSphere(7,100,100);
	glPopMatrix();
}


//FUNCTION_FOR_WATER
void water1()
{
	//WATER_BACKGROUND
	glBegin(GL_POLYGON);
	//glColor3f(0.097,0.566,0.609);
	glColor3f(0,0.411,0.580);
	glVertex2f(0,0);
	glVertex2f(0,110);
	glVertex2f(200,110);
	glVertex2f(200,0);
	glEnd();
	
	//FUNCTION_CALL_FOR_WATER_WAVE
	water_wave1();


}
void printboatr(int x,int y,char *string,int font) {
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}

void display2()
{
	glClear(GL_COLOR_BUFFER_BIT);

		
	int i=0;
	
	//FUNCTION_CALL_FOR_SKY
	sky1();
	//FUNCTION_CALL_ON_Mountain
	mountain();
	
		//triangle for joining sphere to slab
	glBegin(GL_POLYGON);
	glColor3f(1,0.411,0.580);
	//glColor3f(0.097,0.566,0.609);
	//glColor3f(1,0,0);
	glVertex2f(20+x1,40);
	glVertex2f(40+x1,45);
	//glVertex2f();
	glVertex2f(25+x1,70);
	glEnd();
	//FUNCTION_CALL_ON_Water
	water1();
	
	//FUNCTION_CALL_FOR_BIRD
	bird();
	
	//boat 2
	
	//slab
	glColor3f(0,0,0);
	glRectf(115+x1,60,55+x1,65);
	
	//curve
	glPushMatrix();
	glTranslatef(47+x1,81.5,0.0);
	glRotatef(25,0.0,0.0,1.0);
	glScalef(1.5,6,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//triangle for joining sphere to slab
	glBegin(GL_POLYGON);
	glColor3f(0,0.411,0.580);
	//glColor3f(0.097,0.566,0.609);
	//glColor3f(1,0,0);
	glVertex2f(40+x1,80);
	glVertex2f(30+x1,110);
	//glVertex2f();
	glVertex2f(70+x1,80);
	glEnd();
	
	//polygon to cut the sphere inner corner
	glBegin(GL_POLYGON);
	glColor3f(0,0.411,0.580);
	//glColor3f(0.097,0.566,0.609);
	//glColor3f(1,0,0);
	glVertex2f(47+x1,85);
	glVertex2f(75+x1,65);
	glVertex2f(58.5+x1,65);
	glEnd();
	
	//polygon
	glBegin(GL_POLYGON);
	//glColor3f(0.097,0.566,0.609);
	glColor3f(0,0,0);
	glVertex2f(41+x1,80);
	glVertex2f(37+x1,110);
	glVertex2f(58+x1,80);
	glVertex2f(55+x1,77);
	glEnd();
	
	
	//polygon to cut inner sphere below
	glBegin(GL_POLYGON);
	//glColor3f(0.097,0.566,0.609);
	glColor3f(0,0,0);
	glVertex2f(55+x1,70);
	glVertex2f(65+x1,65);
	glVertex2f(58+x1,65);
	glEnd();
	
	//triangle formation at left corner
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(115+x1,60);
	glVertex2f(115+x1,65);
	glVertex2f(120+x1,70);
	glEnd();
	
	
	for(i=0;i<=45;i=i+5)
	{
	
	//head
	glPushMatrix();
	glTranslatef(67.5+i+x1,82.9,0.0);
	glRotatef(0,0.0,0.0,1.0);
	glScalef(0.23,0.35,0.0);
	glColor3f(0.562,0.328,0.140);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	
	glBegin(GL_POLYGON);
	//glColor3f(0,0,0);
	glColor3f(0.996,0.800,0.578);
	glVertex2f(66.5+i+x1,75.5);
	glVertex2f(66.5+i+x1,81.5);
	glVertex2f(68.5+i+x1,81.5);
	glVertex2f(68.5+i+x1,80.5);
	glVertex2f(69.5+i+x1,77.5);
	glVertex2f(67.5+i+x1,80.5);
	glVertex2f(68.5+i+x1,75.5);
	glEnd();
	
	//stick
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.796,0.753,0.160);
	glVertex2f(69.5+i+x1,79.5);
	glVertex2f(62+i+x1+rt,55.5);
	//glVertex2f();
	glEnd();
	
	//pants
	glBegin(GL_POLYGON);
	//glColor3f(0,0,0);
	glColor3f(1,1,1);
	glVertex2f(66.5+i+x1,75.5);
	glVertex2f(68.5+i+x1,75.5);
	glVertex2f(68.5+i+x1,70);
	glVertex2f(66+i+x1,69.5);
	glEnd();
	
	//legs
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.628,.390,.152);
	glVertex2f(67+i+x1,69.5);
	glVertex2f(67+i+x1,65);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.628,.390,.152);
	glVertex2f(68+i+x1,69.5);
	glVertex2f(68+i+x1,65);
	glEnd();
	
	glLineWidth(0.6);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.628,.390,.152);
	glVertex2f(66.5+i+x1,75.5);
	glVertex2f(66.5+i+x1,75.5);
	glEnd();
	
	}
	
	//boat 1
	
	//slab
	glColor3f(0,0,0);
	glRectf(105+x1,20,45+x1,25);
	
	//curve
	glPushMatrix();
	glTranslatef(35.5+x1,42,0.0);
	glRotatef(25,0.0,0.0,1.0);
	glScalef(1.5,6,0.0);
	glColor3f(0,0,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	//triangle for joining sphere to slab
	glBegin(GL_POLYGON);
	glColor3f(0,0.411,0.580);
	//glColor3f(0.097,0.566,0.609);
	//glColor3f(1,0,0);
	glVertex2f(20+x1,40);
	glVertex2f(40+x1,45);
	//glVertex2f();
	glVertex2f(25+x1,70);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0,0.411,0.580);
	//glColor3f(0.097,0.566,0.609);
	//glColor3f(1,0,0);
	glVertex2f(30+x1,60);
	glVertex2f(47.5+x1,25);
	//glVertex2f();
	glVertex2f(36.5+x1,80);
	glEnd();
	
	//polygon on top of the sphere
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	//glColor3f(1,0,0);
	glVertex2f(29+x1,42);
	glVertex2f(26+x1,80);
	glVertex2f(47+x1,40);
	glVertex2f(43+x1,38);
	glVertex2f(43+x1,42);
	glVertex2f(35+x1,42);
	glEnd();
	
	//triangle to join inner corner of sphere and polygon
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	//glColor3f(1,0,0);
	glVertex2f(45+x1,20);
	glVertex2f(45+x1,30);
	glVertex2f(55+x1,25);
	glEnd();
	
	//humans
	
	for(i=0;i<=45;i=i+5)
	{
	
	//head
	glPushMatrix();
	glTranslatef(55.5+i+x1,42.4,0.0);
	glRotatef(0,0.0,0.0,1.0);
	glScalef(0.23,0.35,0.0);
	glColor3f(0.562,0.328,0.140);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
//	glColor3f(0.996,0.800,0.578);
	glVertex2f(54.5+i+x1,35);
	glVertex2f(54.5+i+x1,41);
	glVertex2f(56.5+i+x1,41);
	glVertex2f(56.5+i+x1,40);
	glVertex2f(57.5+i+x1,37);
	glVertex2f(55.5+i+x1,40);
	glVertex2f(56.5+i+x1,35);
	glEnd();
	
	//stick
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.796,0.753,0.160);
	glVertex2f(57.5+i+x1,39);
	glVertex2f(50+i+x1+rt,15);
	//glVertex2f();
	glEnd();
	
	//pants
	glBegin(GL_POLYGON);
	//glColor3f(0,0,0);
	glColor3f(1,1,1);
	glVertex2f(54.5+i+x1,35);
	glVertex2f(56.5+i+x1,35);
	glVertex2f(56.5+i+x1,29.5);
	glVertex2f(54+i+x1,29);
	glEnd();
	
	//legs
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.628,.390,.152);
	glVertex2f(55+i+x1,29);
	glVertex2f(55+i+x1,25);
	glEnd();
	
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.628,.390,.152);
	glVertex2f(56+i+x1,29.5);
	glVertex2f(56+i+x1,25);
	glEnd();
	
	glLineWidth(0.6);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.628,.390,.152);
	glVertex2f(56.5+i+x1,35);
	glVertex2f(54.5+i+x1,35);
	glEnd();
	
	//triangle formation at left corner
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(105+x1,20);
	glVertex2f(105+x1,25);
	glVertex2f(110+x1,30);
	glEnd();
	
	}
		glPushMatrix();
		printboatr(70,5,"PRESS 'j' FOR NEXT SCENE",2);
		glPopMatrix();
	glFlush();
}

//AVATAR FOR LAST SCENE

void printl(int x,int y,char *string,int font) {
int len,i;
glColor3f(0,0,0);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}
}

void bl()
{
		glPushMatrix();
		printl(20,150,"I will surely visit Kerala some day soon . . .", 2);
		printl(30,143,"Bye", 2);
		glPopMatrix();


		
}
void gl()
{
		glPushMatrix();
		printl(130,145,"Bye", 2);
		glPopMatrix(); 
}

void avatarl() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    
//sky background
  background();

//girl	
girl();

//boy
boy();

if(tl1<=10)
	{
	bl();
	tl1=tl1+1;
}
else if(tl2>=11)
{
	bl();
	gl();
	tl2=tl2+1;
}

  
glFlush();
}

//INTRODUCTION


//FUNCTION_FOR_RAINBOW
void rainbow_intro(){
	
	//RAINBOW_RED
	glPushMatrix();
	glTranslatef(15,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(250,88,116);
	glutSolidSphere(120,100,100);
	glPopMatrix();
	//RAINBOW_ORANGE
	glPushMatrix();
	glTranslatef(15,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(251,162,60);
	glutSolidSphere(110,100,100);
	glPopMatrix();
	//RAINBOW_YELLOW
	glPushMatrix();
	glTranslatef(15,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(254,225,58);
	glutSolidSphere(100,100,100);
	glPopMatrix();
	//RAINBOW_BLUE
	glPushMatrix();
	glTranslatef(15,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(89,207,254);
	glutSolidSphere(90,100,100);
	glPopMatrix();
	//RAINBOW_BLUE
	glPushMatrix();
	glTranslatef(15,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(149,69,252);
	glutSolidSphere(80,100,100);
	glPopMatrix();
	//RAINBOW_BLUE
	glPushMatrix();
	glTranslatef(15,90,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(139,205,229);
	glutSolidSphere(70,100,100);
	glPopMatrix();
	
}


//FUNCTION_FOR_CLOUDS
void cloud_intro(){
	
	//DARK_CLOUD
	//BACK_CLOUD_DARK_BASE
	glBegin(GL_POLYGON);
	glColor3ub(187,223,235);
	glVertex2i(0,0);
	glVertex2i(0,90);
	glVertex2i(80,60);
	glVertex2i(200,80);
	glVertex2i(200,0);
	glEnd();
	//CLOUD_1
	glPushMatrix();
	glTranslatef(0,87,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(13,100,100);
	glPopMatrix();
	//CLOUD_2
	glPushMatrix();
	glTranslatef(15,75,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(34,100,100);
	glPopMatrix();
	//CLOUD_3
	glPushMatrix();
	glTranslatef(33,73,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(18,100,100);
	glPopMatrix();
	//CLOUD_4
	glPushMatrix();
	glTranslatef(58,70,0.0);
	glRotatef(-20,0, 0, 1);
	glScalef(0.8,0.4,0);
	glColor3ub(187,223,235);
	glutSolidSphere(25,100,100);
	glPopMatrix();
	//CLOUD_5
	glPushMatrix();
	glTranslatef(87,55,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(34,100,100);
	glPopMatrix();
	//CLOUD_5
	glPushMatrix();
	glTranslatef(105,60,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(24,100,100);
	glPopMatrix();
	//CLOUD_6
	glPushMatrix();
	glTranslatef(128,60,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(38,100,100);
	glPopMatrix();
	//CLOUD_7
	glPushMatrix();
	glTranslatef(148,65,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(20,100,100);
	glPopMatrix();
	//CLOUD_8
	glPushMatrix();
	glTranslatef(160,67,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//CLOUD_9
	glPushMatrix();
	glTranslatef(175,60,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(38,100,100);
	glPopMatrix();
	//CLOUD_10
	glPushMatrix();
	glTranslatef(198,75,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(187,223,235);
	glutSolidSphere(38,100,100);
	glPopMatrix();
	
	

	
	//WHITE_CLOUD
	//FRONT_CLOUD_WHITE_BASE
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2i(0,0);
	glVertex2i(0,42);
	glVertex2i(30,42);
	glVertex2i(200,38);
	glVertex2i(200,0);
	glEnd();
	//CLOUD_ORDERING FROM LEFT TO RIGHT
	//CLOUD_1
	glPushMatrix();
	glTranslatef(0,62,0.0);
	glScalef(0.4,1.4,0);
	glColor3ub(255,255,255);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//CLOUD_2
	glPushMatrix();
	glTranslatef(7,44,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(26,100,100);
	glPopMatrix();
	//CLOUD_3
	glPushMatrix();
	glTranslatef(21,45,0.0);
	glScalef(0.35,1,0);
	glColor3ub(255,255,255);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//CLOUD_4
	glPushMatrix();
	glTranslatef(28.5,44,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(13,100,100);
	glPopMatrix();
	//CLOUD_5
	glPushMatrix();
	glTranslatef(37,48,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//CLOUD_6
	glPushMatrix();
	glTranslatef(46,52,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(18,100,100);
	glPopMatrix();
	//CLOUD_7
	glPushMatrix();
	glTranslatef(53,44,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	//CLOUD_8
	glPushMatrix();
	glTranslatef(61,44,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//CLOUD_9
	glPushMatrix();
	glTranslatef(68,44,0.0);
	glScalef(0.4,1.2,0);
	glColor3ub(255,255,255);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//CLOUD_10
	glPushMatrix();
	glTranslatef(78,38,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(22,100,100);
	glPopMatrix();
	//CLOUD_11
	glPushMatrix();
	glTranslatef(89,38,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	//CLOUD_12
	glPushMatrix();
	glTranslatef(99,34,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(19,100,100);
	glPopMatrix();
	//CLOUD_13
	glPushMatrix();
	glTranslatef(112,42,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(21,100,100);
	glPopMatrix();
	//CLOUD_14
	glPushMatrix();
	glTranslatef(118,54,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(14,100,100);
	glPopMatrix();
	//CLOUD_15
	glPushMatrix();
	glTranslatef(129,44,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(24,100,100);
	glPopMatrix();
	//CLOUD_16
	glPushMatrix();
	glTranslatef(140,35,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//CLOUD_17
	glPushMatrix();
	glTranslatef(158,36,0.0);
	glScalef(0.8,0.5,0);
	glColor3ub(255,255,255);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//CLOUD_18
	glPushMatrix();
	glTranslatef(178,40,0.0);
	glScalef(0.4,0.7,0);
	glColor3ub(255,255,255);
	glutSolidSphere(24,100,100);
	glPopMatrix();
	//CLOUD_19
	glPushMatrix();
	glTranslatef(190,44,0.0);
	glScalef(0.3,0.9,0);
	glColor3ub(255,255,255);
	glutSolidSphere(24,100,100);
	glPopMatrix();
	//CLOUD_20
	glPushMatrix();
	glTranslatef(199,50,0.0);
	glScalef(0.2,1.2,0);
	glColor3ub(255,255,255);
	glutSolidSphere(24,100,100);
	glPopMatrix();


	
}

//FUNCTION_FOR PRINTING
void printi(int x,int y,char *string,int font,int a,int b,int c) {
int len,i;
glColor3ub(a,b,c);
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
	if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);	

}

}
intro()
{
	glPushMatrix();
	printi(62,170,"MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING",1,0,0,0);
	printi(65,155,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",1,0,0,0);
	printi(67,140,"COMPUTER GRAPHICS AND VISUALIZATION",1,0,0,0);
	printi(90,120,"MINI PROJECT ON",1,0,0,0);
	printi(70,100,"GRAPHICAL VISUALIZATION OF KERALA TOURISM",1,0,0,0);
	printi(5,30,"BY",1,0,0,0);
	printi(5,10,"MILIND BIJUKUMAR (4MT17CS058)",1,0,0,0);
	printi(5,20,"JOVITA DIANA DMELLO (4MT17CS044)",1,0,0,0);
//	print1(5,10,"DEPARTMENT OF CSE SEC CS1",1);
	printi(145,30,"GUIDED BY",1,0,0,0);
	printi(145,20,"MRS. JEEVITHA SAMPATH",1,0,0,0);
	printi(145,10,"MS. SUHASINI",1,0,0,0);
	printi(80,10,"PRESS 'd' FOR NEXT SCENE",1,0,0,0);
	
	glPopMatrix();
}
void introduction()
{
glClear(GL_COLOR_BUFFER_BIT);

	//SKY_BLUE BACKGROUND
	glBegin(GL_POLYGON);
	glColor3ub(142,216,241);
	glVertex2i(0,0);
	glVertex2i(0,200);
	glVertex2i(200,200);
	glVertex2i(200,0);
	glEnd();
	
	
	//FUNCTION_FOR_RAINBOW
	rainbow_intro();
	
	//FUNCTION_CALL_FOR_CLOUDS
	cloud_intro();
	
	
	intro();
	glFlush();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(flag==2)
	{
		introduction();
		timera(0);
		glutPostRedisplay();
	}
	if(flag==3)
	{
		avatarbh();
	//	background();
		timera(0);
		glutPostRedisplay();
	}
	if(flag==4)
	{
		display1();
		timer(0);
		timer3(0);
		timerc(0);
    	glutPostRedisplay();
	}
	if(flag==5)
	{
		avatarw();
	//	background();
		timera(0);
		glutPostRedisplay();
	}
	if(flag==6)
	{
		display3();
		timerp(0);
		timercw(0);
		glutPostRedisplay();	
	}
	if(flag==7)
	{
		avatarbr();
	//	background();
		timera(0);
		glutPostRedisplay();	
	}
	if(flag==8)
	{
		display2();
		timer1(0);
		timer2(0);
		timer4(0);
		birdwings_timer(0);
		boatrowing_timer(0); 
		//timer5(0);
  	glutPostRedisplay();
	}
	if(flag==9)
	{
		avatarl();
	//	background();
		timera(0);
		glutPostRedisplay();	
	}
	glFlush();
}
void myKey(unsigned char key,int x,int y)
{
	switch(key)
	{
//		case 'a': flag=0;
//				break;
//		case 'b': flag=1;
//				break;
		case 'c': flag=2;
				break;
		case 'd': flag=3;
				break;
		case 'e': flag=4;
				break;
		case 'f': flag=5;
				break;
		case 'g': flag=6;
				break;
		case 'h': flag=7;
				break;
		case 'i':flag=8;
				break;
		case 'j':flag=9;
				break;
		
	}
}
void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,200.0,0.0,200.0,-200,200.0);
	}
int main(int argc,char **argv)
{

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1535,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("GRAPHICAL VISUALIZATION OF KERALA TOURISM");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(myKey);
	glutMainLoop();
}

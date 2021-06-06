/// Name: Musfiquer Rhman
/// Id: 17181103098
/// Intake: 37
/// Section: 3

/*
====================================================
------------Project Name: Simple Village------------

Key press functions:

--> Press N for Night mode
--> Press D for Day mode
--> Press F to turn off lights
--> Press L to turn on lights

====================================================
*/


#include<stdio.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#define SPEED 30.0

float i=0.0,m=0.0,n=0.0,o=0.0,c=0.0,b=0.0,F=0.0;
float p=0.75,q=0.47,r=0.14;
float e=0.80,f=0.90,g=0.80;
float a1=0.6, b1=1, c1=0.6;
float l = 0;
int count=0;

int light=1,day=1,comet=0,xm=900;
char ch;

void declare(char *string)
{
    while(*string)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
}

void draw_pixel(GLint cx, GLint cy)
{

    glBegin(GL_POINTS);
    glVertex2i(cx,cy);
    glEnd();
}

void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
    draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
    draw_pixel(x+h,-y+k);
    draw_pixel(-x+h,-y+k);
    draw_pixel(y+h,x+k);
    draw_pixel(-y+h,x+k);
    draw_pixel(y+h,-x+k);
    draw_pixel(-y+h,-x+k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
    GLint d=1-r, x=0, y=r;
    while(y>x)
    {
        plotpixels(h,k,x,y);
        if(d<0) d+=2*x+3;
        else
        {
            d+=2*(x-y)+5;
            --y;
        }
        ++x;
    }
    plotpixels(h,k,x,y);
}


void draw_object()
{
    int l;

    if(day==1)
    {
//sky
        glColor3f(0.7,0.99,0.99);
        glBegin(GL_POLYGON);
        glVertex2f(0,380);
        glVertex2f(0,700);
        glVertex2f(1800,700);
        glVertex2f(1800,380);
        glEnd();

//sun


        for(l=0; l<=35; l++)
        {
            glColor3f(1.0,0.9,0.0);
            draw_circle(100,625,l);
        }

        //cloud1


        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-160+m,625,l);

        }


        for(l=0; l<=35; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-200+m,625,l);
            draw_circle(-225+m,625,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-265+m,625,l);
        }

//cloud2


        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-370+m,655,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(-410+m,655,l);
            draw_circle(-435+m,655,l);
            draw_circle(-470+m,655,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-500+m,655,l);
        }


//cloud3


        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-670+m,550,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(-710+m,550,l);
            draw_circle(-735+m,550,l);
            draw_circle(-770+m,550,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(-800+m,550,l);
        }

//cloud1


        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(160+m,625,l);

        }


        for(l=0; l<=35; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(200+m,625,l);
            draw_circle(225+m,625,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(265+m,625,l);
        }

//cloud2


        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(370+m,655,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(410+m,655,l);
            draw_circle(435+m,655,l);
            draw_circle(470+m,655,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(500+m,655,l);
        }

//cloud3


        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(670+m,550,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(710+m,550,l);
            draw_circle(735+m,550,l);
            draw_circle(770+m,550,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(800+m,550,l);
        }


        //========
        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(870+m,600,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(910+m,600,l);
            draw_circle(935+m,600,l);
            draw_circle(970+m,600,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(1000+m,600,l);
        }

        //========
        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(970+m,700,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(1010+m,700,l);
            draw_circle(1035+m,700,l);
            draw_circle(1070+m,700,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(1100+m,700,l);
        }



        //========
        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(1170+m,500,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(1210+m,500,l);
            draw_circle(1235+m,500,l);
            draw_circle(1270+m,500,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(1300+m,500,l);
        }


        //========
        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(1370+m,600,l);
        }


        for(l=0; l<=35; l++)
        {

            glColor3f(1.0,1.0,1.0);
            draw_circle(1410+m,600,l);
            draw_circle(1435+m,600,l);
            draw_circle(1470+m,600,l);
        }

        for(l=0; l<=20; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(1500+m,600,l);
        }



        //river
        glColor3f(0.0,0.6,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(0,160);
        glVertex2f(0,380);
        glVertex2f(1800,380);
        glVertex2f(1800,160);
        glEnd();



        //Grass
        glColor3f(0.2,0.6,0.19);
        glBegin(GL_POLYGON);
        glVertex2f(0,-200);
        glVertex2f(1800,-200);
        glVertex2f(1800,0);
        glVertex2f(0,0);
        glEnd();

    }


    else
    {
//sky
        glColor3f(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(0,380);
        glVertex2f(0,700);
        glVertex2f(1800,700);
        glVertex2f(1800,380);
        glEnd();

//moon
        int l;

        for(l=0; l<=35; l++)
        {
            glColor3f(1.0,1.0,1.0);
            draw_circle(100,625,l);
        }

//star1

        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(575,653);
        glVertex2f(570,645);
        glVertex2f(580,645);
        glVertex2f(575,642);
        glVertex2f(570,650);
        glVertex2f(580,650);
        glEnd();

//star2
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(975,643);
        glVertex2f(970,635);
        glVertex2f(980,635);
        glVertex2f(975,632);
        glVertex2f(970,640);
        glVertex2f(980,640);
        glEnd();

//star3
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(875,543);
        glVertex2f(870,535);
        glVertex2f(880,535);
        glVertex2f(875,532);
        glVertex2f(870,540);
        glVertex2f(880,540);
        glEnd();

//star4
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(375,598);
        glVertex2f(370,590);
        glVertex2f(380,590);
        glVertex2f(375,587);
        glVertex2f(370,595);
        glVertex2f(380,595);
        glEnd();

//star5
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(750,628);
        glVertex2f(745,620);
        glVertex2f(755,620);
        glVertex2f(750,618);
        glVertex2f(745,625);
        glVertex2f(755,625);
        glEnd();

//star6
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(200,628);
        glVertex2f(195,620);
        glVertex2f(205,620);
        glVertex2f(200,618);
        glVertex2f(195,625);
        glVertex2f(205,625);
        glEnd();

//star7
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(100,528);
        glVertex2f(95,520);
        glVertex2f(105,520);
        glVertex2f(100,518);
        glVertex2f(95,525);
        glVertex2f(105,525);
        glEnd();

//star8
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(300,468);
        glVertex2f(295,460);
        glVertex2f(305,460);
        glVertex2f(300,458);
        glVertex2f(295,465);
        glVertex2f(305,465);
        glEnd();

//star9
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(500,543);
        glVertex2f(495,535);
        glVertex2f(505,535);
        glVertex2f(500,532);
        glVertex2f(495,540);
        glVertex2f(505,540);
        glEnd();


        //star1

        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(1675,653);
        glVertex2f(1670,645);
        glVertex2f(1680,645);
        glVertex2f(1675,642);
        glVertex2f(1670,650);
        glVertex2f(1680,650);
        glEnd();


//star4
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(1475,598);
        glVertex2f(1470,590);
        glVertex2f(1480,590);
        glVertex2f(1475,587);
        glVertex2f(1470,595);
        glVertex2f(1480,595);
        glEnd();


//star6
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(1300,628);
        glVertex2f(1295,620);
        glVertex2f(1305,620);
        glVertex2f(1300,618);
        glVertex2f(1295,625);
        glVertex2f(1305,625);
        glEnd();

//star7
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(1200,528);
        glVertex2f(1195,520);
        glVertex2f(1205,520);
        glVertex2f(1200,518);
        glVertex2f(1195,525);
        glVertex2f(1205,525);
        glEnd();

//star8
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(1400,468);
        glVertex2f(1395,460);
        glVertex2f(1405,460);
        glVertex2f(1400,458);
        glVertex2f(1395,465);
        glVertex2f(1405,465);
        glEnd();


//grass
        glColor3f(0.0,0.2,0.4);
        glBegin(GL_POLYGON);
        glVertex2f(0,160);
        glVertex2f(0,380);
        glVertex2f(1800,380);
        glVertex2f(1800,160);
        glEnd();

        // comet

        for(l=0; l<=7; l++)
        {
            glColor3f(1,1,1);
            draw_circle(300+c,675,l);
        }

        glColor3f(1,1,1);
        glBegin(GL_TRIANGLES);
        glVertex2f(200+c,675);
        glVertex2f(300+c,682);
        glVertex2f(300+c,668);
        glEnd();



        //river
        glColor3f(0.0,0.3,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(0,-200);
        glVertex2f(1800,-200);
        glVertex2f(1800,0);
        glVertex2f(0,0);
        glEnd();

    }


//Ground
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-600,0);
    glVertex2f(-600,185);
    glVertex2f(1800,185);
    glVertex2f(1800,0);
    glEnd();

    //boat
    glBegin(GL_QUADS);
    glColor3f (.8, .8, .8);
    glVertex2f(370+F, 275);
    glVertex2f(470+F, 275);
    glVertex2f(495+F, 300);
    glVertex2f(345+F, 300);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (1, 1, 1);
    glVertex2f(420+F, 325);
    glVertex2f(450+F, 300);
    glVertex2f(400+F, 300);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f (.8, .8, .8);
    glVertex2f(-70+F, 275);
    glVertex2f(-170+F, 275);
    glVertex2f(-195+F, 300);
    glVertex2f(-45+F, 300);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (1, 1, 1);
    glVertex2f(-120+F, 325);
    glVertex2f(-150+F, 300);
    glVertex2f(-100+F, 300);
    glEnd();

//tree
    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(280,175);
    glVertex2f(280,255);
    glVertex2f(295,255);
    glVertex2f(295,175);
    glEnd();


    for(l=0; l<=30; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(270,250,l);
        draw_circle(310,250,l);
    }

    for(l=0; l<=25; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(280,290,l);
        draw_circle(300,290,l);
    }

    for(l=0; l<=20; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(290,315,l);
    }

    //---------
    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(420,75);
    glVertex2f(420,155);
    glVertex2f(435,155);
    glVertex2f(435,75);
    glEnd();


    for(l=0; l<=30; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(410,150,l);
        draw_circle(450,150,l);
    }

    for(l=0; l<=25; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(420,190,l);
        draw_circle(440,190,l);
    }

    for(l=0; l<=20; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(430,215,l);
    }

    //---------
    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1680,75);
    glVertex2f(1680,155);
    glVertex2f(1695,155);
    glVertex2f(1695,75);
    glEnd();


    for(l=0; l<=30; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(1670,150,l);
        draw_circle(1710,150,l);
    }

    for(l=0; l<=25; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(1680,190,l);
        draw_circle(1700,190,l);
    }

    for(l=0; l<=20; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(1690,215,l);
    }

//tree 1
    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,135);
    glVertex2f(100,285);
    glVertex2f(140,285);
    glVertex2f(140,135);
    glEnd();


    for(l=0; l<=40; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(40,280,l);
        draw_circle(90,280,l);
        draw_circle(150,280,l);
        draw_circle(210,280,l);
        draw_circle(65,340,l);
        draw_circle(115,340,l);
        draw_circle(175,340,l);

    }

    for(l=0; l<=55; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(115,360,l);
    }


    //tree 1
    glColor3f(0.50,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1000,175);
    glVertex2f(1000,315);
    glVertex2f(1040,315);
    glVertex2f(1040,175);
    glEnd();


    for(l=0; l<=40; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(940,330,l);
        draw_circle(990,330,l);
        draw_circle(1050,330,l);
        draw_circle(1110,330,l);
        draw_circle(965,390,l);
        draw_circle(1015,390,l);
        draw_circle(1075,390,l);

    }

    for(l=0; l<=55; l++)
    {
        glColor3f(0.0,0.5,0.0);
        draw_circle(1015,410,l);
    }

//==================================================
    //Left triangle
    glBegin(GL_TRIANGLES);
    glColor3f (0.298, 0.682, 0.7255);
    glVertex2f(610, 420);
    glVertex2f(700, 320);
    glVertex2f(520, 320);
    glEnd();

    //Left room
    glBegin(GL_QUADS);
    glColor3f (0.03, 0.392, 0.45);
    glVertex2f(520, 120);
    glVertex2f(700, 120);
    glVertex2f(700, 320);
    glVertex2f(520, 320);
    glEnd();

    // Left gate
    glBegin(GL_QUADS);
    glColor3f(e,f,g);
    glVertex2f(575, 120);
    glVertex2f(645, 120);
    glVertex2f(645, 240);
    glVertex2f(575, 240);
    glEnd();

    // Left gate handle
    glBegin(GL_QUADS);
    glColor3f (0.1, 0.6, 0.6);
    glVertex2f(590, 170);
    glVertex2f(600, 180);
    glVertex2f(600, 180);
    glVertex2f(590, 170);
    glEnd();

    // Road
    glBegin(GL_QUADS);
    glColor3f (a1, b1, c1);
    glVertex2f(440, 00);
    glVertex2f(600, 00);
    glVertex2f(645, 120);
    glVertex2f(575, 120);
    glEnd();

    //Right Room
    glBegin(GL_QUADS);
    glColor3f (0.03, 0.692, 0.65);
    glVertex2f(700, 120);
    glVertex2f(1000, 120);
    glVertex2f(1000, 320);
    glVertex2f(700, 320);
    glEnd();

    //left window
    glBegin(GL_QUADS);
    glColor3f(e,f,g);
    glVertex2f(750, 170);
    glVertex2f(820, 170);
    glVertex2f(820, 240);
    glVertex2f(750, 240);
    glEnd();

    //Right window
    glBegin(GL_QUADS);
    glColor3f(e,f,g);
    glVertex2f(880, 170);
    glVertex2f(950, 170);
    glVertex2f(950, 240);
    glVertex2f(880, 240);
    glEnd();

    //left window horizontal line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(750, 200);
    glVertex2f(820, 200);
    glVertex2f(820, 210);
    glVertex2f(750, 210);
    glEnd();

    //Left windows vertical line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(780, 170);
    glVertex2f(790, 170);
    glVertex2f(790, 240);
    glVertex2f(780, 240);
    glEnd();

    //Right window vertical line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(910, 170);
    glVertex2f(920, 170);
    glVertex2f(920, 240);
    glVertex2f(910, 240);
    glEnd();

    //Right window horizontal line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(880, 200);
    glVertex2f(950, 200);
    glVertex2f(950, 210);
    glVertex2f(880, 210);
    glEnd();

    //Right Room top
    glBegin(GL_QUADS);
    glColor3f (0.182, 0.4127, 0.33);
    glVertex2f(700, 320);
    glVertex2f(1000, 320);
    glVertex2f(910, 420);
    glVertex2f(610, 420);
    glEnd();


    //Left triangle
    glBegin(GL_TRIANGLES);
    glColor3f (0.6, 0.9, 0.8);
    glVertex2f(1210, 400);
    glVertex2f(1300, 300);
    glVertex2f(1120, 300);
    glEnd();

    //Left room
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.6, 0.5);
    glVertex2f(1120, 100);
    glVertex2f(1300, 100);
    glVertex2f(1300, 300);
    glVertex2f(1120, 300);
    glEnd();

    // Left gate
    glBegin(GL_QUADS);
    glColor3f(e,f,g);
    glVertex2f(1175, 100);
    glVertex2f(1245, 100);
    glVertex2f(1245, 220);
    glVertex2f(1175, 220);
    glEnd();

    // Left gate handle
    glBegin(GL_QUADS);
    glColor3f (0.1, 0.6, 0.6);
    glVertex2f(1190, 150);
    glVertex2f(1200, 160);
    glVertex2f(1200, 160);
    glVertex2f(1190, 150);
    glEnd();

    // Road
    glBegin(GL_QUADS);
    glColor3f (a1, b1, c1);
    glVertex2f(1050, 00);
    glVertex2f(1200, 00);
    glVertex2f(1245, 100);
    glVertex2f(1175, 100);
    glEnd();

    //Right Room
    glBegin(GL_QUADS);
    glColor3f (0.1, 0.4, 0.3);
    glVertex2f(1300, 100);
    glVertex2f(1600, 100);
    glVertex2f(1600, 300);
    glVertex2f(1300, 300);
    glEnd();

    //left window
    glBegin(GL_QUADS);
    glColor3f(e,f,g);
    glVertex2f(1350, 150);
    glVertex2f(1420, 150);
    glVertex2f(1420, 220);
    glVertex2f(1350, 220);
    glEnd();

    //Right window
    glBegin(GL_QUADS);
    glColor3f(e,f,g);
    glVertex2f(1480, 150);
    glVertex2f(1550, 150);
    glVertex2f(1550, 220);
    glVertex2f(1480, 220);
    glEnd();

    //left window horizontal line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(1350, 180);
    glVertex2f(1420, 180);
    glVertex2f(1420, 190);
    glVertex2f(1350, 190);
    glEnd();

    //Left windows vertical line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(1380, 150);
    glVertex2f(1390, 150);
    glVertex2f(1390, 220);
    glVertex2f(1380, 220);
    glEnd();

    //Right window vertical line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(1510, 150);
    glVertex2f(1520, 150);
    glVertex2f(1520, 220);
    glVertex2f(1510, 220);
    glEnd();

    //Right window horizontal line
    glBegin(GL_QUADS);
    glColor3f (0.3, 0.3, 0.3);
    glVertex2f(1480, 180);
    glVertex2f(1550, 180);
    glVertex2f(1550, 190);
    glVertex2f(1480, 190);
    glEnd();

    //Right Room top
    glBegin(GL_QUADS);
    glColor3f (0.05, 0.3137, 0.278);
    glVertex2f(1300, 300);
    glVertex2f(1600, 300);
    glVertex2f(1510, 400);
    glVertex2f(1210, 400);
    glEnd();


    //bird
//----
    glBegin(GL_TRIANGLES);
    glColor3f(0.18,0.545,0.3412);
    glVertex2f(545+F, 538);
    glVertex2f(575+F, 530);
    glVertex2f(545+F, 522);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.235,.7019,.44);
    glVertex2f(560+F, 550);
    glVertex2f(590+F, 530);
    glVertex2f(560+F, 510);
    glEnd();
    for(l=0; l<=12; l++)
    {
        glColor3f(.4,.8,.666);
        draw_circle(590+F,530,l);
    }
    glBegin(GL_TRIANGLES);
    glColor3f(0.7,0.7,0.7);
    glVertex2f(600+F, 536);
    glVertex2f(615+F, 525);
    glVertex2f(600+F, 524);
    glEnd();


//----

    glBegin(GL_TRIANGLES);
    glColor3f(0.373,0.6196,0.627);
    glVertex2f(305+F, 598);
    glVertex2f(335+F, 590);
    glVertex2f(305+F, 582);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0,.545,.585);
    glVertex2f(320+F, 610);
    glVertex2f(350+F, 590);
    glVertex2f(320+F, 570);
    glEnd();
    for(l=0; l<=12; l++)
    {
        glColor3f(.125,.698,.666);
        draw_circle(350+F,590,l);
    }
    glBegin(GL_TRIANGLES);
    glColor3f(0.7,0.7,0.7);
    glVertex2f(360+F, 596);
    glVertex2f(375+F, 585);
    glVertex2f(360+F, 584);
    glEnd();



//----

    glBegin(GL_TRIANGLES);
    glColor3f(0.439,0.502,0.564);
    glVertex2f(905+F, 598);
    glVertex2f(935+F, 590);
    glVertex2f(905+F, 582);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.69,.768,.87);
    glVertex2f(920+F, 610);
    glVertex2f(950+F, 590);
    glVertex2f(920+F, 570);
    glEnd();
    for(l=0; l<=12; l++)
    {
        glColor3f(.9,.9,.98);
        draw_circle(950+F,590,l);
    }
    glBegin(GL_TRIANGLES);
    glColor3f(0.7,0.7,0.7);
    glVertex2f(960+F, 596);
    glVertex2f(975+F, 585);
    glVertex2f(960+F, 584);
    glEnd();


    glFlush();
}


void idle()
{
    if(light==0 && (i>=0 && i<=1150))
    {
        i+=SPEED/10;
        F+=SPEED;
        m+=SPEED/150;
        n-=2;
        o+=0.2;
        c+=2;
    }

    if(light==0 && (i>=2600 && i<=3000))
    {
        i+=SPEED/10;
        F+=SPEED;
        m+=SPEED/150;
        n-=2;
        o+=0.2;
        c+=2;
    }

    if(light==0)
    {
        i=i;
        m+=SPEED/150;
        F+=SPEED;
        n-=2;
        o+=0.2;
        c+=2;
    }

    if(count<=300)
    {
        glClearColor(1.0,1.0,1.0,1.0);

        i+=SPEED/10;
        b+=SPEED/10;
        m+=SPEED/150;
        F+=SPEED/50;
        n-=2;
        o+=0.2;
        c+=2;
    }
    if(i>1900)
        i=800.0;
    if(m>1100)
        m=0.0;
    if(F>1900)
        F=0.0;

    if(b>500)
    {
        b=0.0;
        i=800.0;
        count=count+1;

    }
    glutPostRedisplay();
}

void keyboardFunc(unsigned char key, int x, int y )
{
    switch( key )
    {
    case 'd':
    case 'D':
        day=1;
        p=0.75;
        q=0.47;
        r=0.14;
        break;

    case 'n':
    case 'N':
        day=0;
        p=0.52;
        q=0.37;
        r=0.26;
        c=0;
        break;


    case 'l':
    case 'L':
        e=0.80;
        f=0.90;
        g=0.80;
        a1=0.6;
        b1=1;
        c1=0.6;
        break;

    case 'f':
    case 'F':
        e=0.0;
        f=0.0;
        g=0.0;
        a1=0.0;
        b1=0.3;
        c1=0.0;
        break;

    };
}


void myinit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,1.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1800.0,-200.0,700.0);
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    draw_object();
    glFlush();
}


int main(int argc,char** argv)
{
    int c_menu;
    printf("-------------------Project by Musfiquer Rhman-------------------\n");
    printf("----------------------------------------------------------------\n");
    printf("                         Simple Village                         \n");
    printf("----------------------------------------------------------------\n\n");
    printf("Press 'd' or 'D' to make it day. \n\n");
    printf("Press 'n' or 'N' to make it night. \n\n");
    printf("Press 'l' or 'L' to turn On the lights. \n\n");
    printf("Press 'f' or 'F' to turn Off the lights. \n\n");

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1800.0,1100.0);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Simple Village");
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboardFunc);
    myinit();
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutMainLoop();
    return 0;
}

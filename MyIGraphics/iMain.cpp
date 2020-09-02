# include "iGraphics.h"
#include <stdio.h>
#include <time.h>

void gettime(int t[]) {
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}

int x = 300, y = 300, r = 20;
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw() {
	int i, j;

	iClear();
	iSetColor(0, 200, 0);

	/*double x[ ] = {30, 35, 40, 40, 35, 30};
	double y[ ] = {155, 150, 155, 220, 225, 220};
	iFilledPolygon(x, y, 6);


  /*   for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            x[j] = x[j] + 135;
        }
        iFilledPolygon(x, y, 6);
    }

    /* double z [] = {225, 220, 225, 295, 300, 295};
    iFilledPolygon(x, z, 6);

     for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            x[j] = x[j] - 135;
        }
        iFilledPolygon(x, z, 6);
    } */

    /*double p [] = {130, 135, 140, 140, 135, 130};
    double q [] = {295, 300, 295, 230, 225, 230};
    iFilledPolygon(p, q, 6);

    for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            p[j] = p[j] + 135;
        }
        iFilledPolygon(p, q, 6);
    }

   /* for (i = 0; i < 6; i++) {
         q[i] = q[i] - 75;
    }
    iFilledPolygon(p, q, 6);

    for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            p[j] = p[j] - 135;
        }
        iFilledPolygon(p, q, 6);
    } */

 	double a[ ] = {40, 35, 40, 130, 135, 130};
	double b[ ] = {295, 300, 305, 305, 300, 295};
	iFilledPolygon(a, b, 6);

 /*	 for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            a[j] = a[j] + 135;
        }
        iFilledPolygon(a, b, 6);
	}

     for (i = 0; i < 6; i++) {
        b[i] = b [i] - 75;
     }
     iFilledPolygon(a, b, 6);

     for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            a[j] = a[j] - 135;
        }
        iFilledPolygon(a, b, 6);
	}

	for (i = 0; i < 6; i++) {
        b[i] = b [i] - 75;
     }
     iFilledPolygon(a, b, 6); */

     for (j = 0; j < 6; j++) {
            a[j] = a[j] + 135;
        }

     for (i = 1; i < 6; i++) {

        iFilledPolygon(a, b, 6);
	}

	iFilledCircle(287.5, 262.5, 5);
	iFilledCircle(557.5, 262.5, 5);

	iFilledCircle(287.5, 187.5, 5);
	iFilledCircle(557.5, 187.5, 5);

	/*iFilledRectangle(10, 30, 20, 20);
	iSetColor(20, 200, 0);
	iText(40, 40, "Hi, I am iGraphics"); */
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(900, 400, "demo");
	return 0;
}


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

void iDraw() {
    int i, j, k, p, q;
    int t[3] ={};

	double xa[] = {40, 35, 40, 130, 135, 130};
	double ya[] = {295, 300, 305, 305, 300, 295};
	double xb[] = {130, 135, 140, 140, 135, 130};
    double yb[] = {295, 300, 295, 230, 225, 230};
    double yc[] = {220, 225, 220, 155, 150, 155};
    double yd[] = {145, 150, 155, 155, 150, 145};
    double xe[] = {30, 35, 40, 40, 35, 30};
    double yg[] = {220, 225, 230, 230, 225, 220};

    gettime(t);

	iClear();

    for (i = 0; i < 3; i++) {
	    iSetColor(0, 220, 150);

	    p = t[i] / 10;
	    q = t[i] % 10;

        if (p == 0) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            //iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 1) {
            //iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            //iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            //iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 2) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            //iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 3) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 4) {
            //iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            //iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 5) {
            iFilledPolygon(xa, ya, 6); //a
            //iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 6) {
            iFilledPolygon(xa, ya, 6); //a
            //iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 7) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            //iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            //iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 8) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (p == 9) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }


        for (j = 0; j < 6; j++) {
            xa[j] = xa[j] + 135;
            xb[j] = xb[j] + 135;
            xe[j] = xe[j] + 135;
        }

        if (q == 0) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            //iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 1) {
            //iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            //iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            //iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 2) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            //iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 3) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 4) {
            //iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            //iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 5) {
            iFilledPolygon(xa, ya, 6); //a
            //iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 6) {
            iFilledPolygon(xa, ya, 6); //a
            //iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 7) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            //iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            //iFilledPolygon(xe, yb, 6); //f
            //iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 8) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        if (q == 9) {
            iFilledPolygon(xa, ya, 6); //a
            iFilledPolygon(xb, yb, 6); //b
            iFilledPolygon(xb, yc, 6); //c
            iFilledPolygon(xa, yd, 6); //d
            //iFilledPolygon(xe, yc, 6); //e
            iFilledPolygon(xe, yb, 6); //f
            iFilledPolygon(xa, yg, 6); //g
        }

        for (j = 0; j < 6; j++) {
            xa[j] = xa[j] + 160;
            xb[j] = xb[j] + 160;
            xe[j] = xe[j] + 160;
        }
    }

    if(t[2] % 2 == 0) {
        iFilledCircle(300, 262.5, 7);
	    iFilledCircle(595, 262.5, 7);

	    iFilledCircle(300, 187.5, 7);
	    iFilledCircle(595, 187.5, 7);
    }
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/

void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//	printf("x = %d, y= %d\n",mx,my);
		mx += 10;
		my += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		mx -= 10;
		my -= 10;
	}
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
}

int main() {
	iInitialize(1000, 400, ":D :D");
	return 0;
}

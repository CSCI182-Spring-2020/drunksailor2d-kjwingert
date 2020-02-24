#pragma once
#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ofMain.h"
using namespace std;
#define Array_Width 20
#define Array_Height 20
#define Max_Steps 1000
#define NULL 0

enum DIRECTION { North, East, South, West };

class ofApp : public ofBaseApp{

private:
	    int mapArray[Array_Width][Array_Height];
		int x = Array_Width / 2;
		int y = Array_Height / 2;
		int stepCount = 0;
		float rectSize;
		ofColor rectColor;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		
};

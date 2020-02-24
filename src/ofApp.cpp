#include "ofApp.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0);
    srand(time(NULL));
        while (stepCount < Max_Steps)
        {
            DIRECTION nextStep = static_cast <DIRECTION> (rand() % 4);

            switch (nextStep)
            {
            case North:
                if (y > 0)
                    y--;
                break;
            case East:
                if (x < Array_Width - 1)
                    x++;
                break;
            case South:
                if (y < Array_Height - 1)
                    y++;
                break;
            case West:
                if (x > 0)
                    x--;
                break;
            }
            stepCount++;
            mapArray[x][y] = mapArray[x][y]++;
        }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    for (int a = 0; a < (Array_Width); a++)
    {
        for (int b = 0; b < Array_Height; b++)
        {
            float alpha = ofMap(mapArray[a][b], 0, 10, 0, 255);
            ofSetColor(255, 0, 0, alpha); 
            ofDrawRectangle(a*20, b*20, 20, 20);
        }
       
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

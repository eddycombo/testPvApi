#include "testApp.h"
/*

cam res 656 x 492

*/
//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(0);
    ofSetFrameRate(66);
    bCameraFound = false;
    bCamInit = false;
    bGrabbing = false;

    thread.startThread(true, false);
    camImage.allocate(656, 492, OF_IMAGE_GRAYSCALE);

    bCamInit = true;
}


void testApp::update(){

    thread.lock();
        camImage = thread.mantaImage;
    thread.unlock();


}

//--------------------------------------------------------------
void testApp::exit(){
    thread.stopThread();
}
//--------------------------------------------------------------
void testApp::draw(){
    camImage.draw(0, 0);

    ofPushMatrix();
        ofDrawBitmapString(ofToString(ofGetFrameRate()), 10, 10);
    ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}

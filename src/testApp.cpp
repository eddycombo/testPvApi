#include "testApp.h"
/*

cam res 656 x 492

*/
//--------------------------------------------------------------
void testApp::setup(){

    //camText.allocate(WIDTH, HEIGHT, GL_LUMINANCE);

    ofBackground(0);
    ofSetFrameRate(66);
    bCameraFound = false;
    bCamInit = false;
    bGrabbing = false;

    //camCount = 0;

    //camText.allocate(640, 480, GL_LUMINANCE);

    //camImg.allocate(WIDTH, HEIGHT, OF_IMAGE_GRAYSCALE);

    thread.startThread(true, false);
    camImage.allocate(656, 492, OF_IMAGE_GRAYSCALE);

    bCamInit = true;


}


void testApp::update(){

    //thread.lock();
      //  camImage = thread.mantaImage;
    //thread.unlock();




}

//--------------------------------------------------------------
void testApp::exit(){

    thread.stopThread();



}
//--------------------------------------------------------------
void testApp::draw(){


   thread.mantaImage.draw(0, 0);


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

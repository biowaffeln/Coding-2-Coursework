#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
  ofSetCircleResolution(50);
}

//--------------------------------------------------------------
void ofApp::update()
{
}

//--------------------------------------------------------------
void ofApp::draw()
{
  float center = ofGetWindowHeight() / 2;
  uint64_t x = ofGetElapsedTimeMillis();
  float amplitude = 150.;
  float frequency = 0.005;
  for (int i = 1; i < 9; i++)
  {
    float offset = (float)i / 15000.;
    ofDrawCircle(120 * i, center + amplitude * sin(x * (frequency + offset)), 40);
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}

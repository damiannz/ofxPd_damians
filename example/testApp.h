#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxPd.h"
#include "ofxOsc.h"

class testApp : public ofBaseApp{

	public:


		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);

		void audioRequested 	(float * output, int bufferSize, int nChannels);
		void audioReceived		(float * input, int bufferSize, int nChannels );
	
	
		float * audioInputData;

		// Pd object
		ofxPd pd;
	
		// osc communications to Pd
		ofxOscSender osc_sender;
	
};

#endif

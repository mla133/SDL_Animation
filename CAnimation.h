#ifndef _CANIMATION_H_
  #define _CANIMATION_H_

#include <SDL/SDL.h>

class CAnimation {

  private:
	int CurrentFrame;
	int FrameSec;
	int FrameRate; //Milliseconds
	long OldTime;

  public:
	int MaxFrames;
	bool Oscillate;

  public:
	CAnimation();
	void OnAnimate();

	void SetFrameRate(int Rate);
	void SetCurrentFrame(int Frame);
	int GetCurrentFrame();
};
#endif

#ifndef Birdy_H_INCLUDED
#define Birdy_H_INCLUDED
#include "Board_Touch.h" 
typedef struct Birdy{
	int xPos;
  int yPos;	
	int gravity; 
	int velocity;
	int lift;
	
}Birdy;

void up(Birdy *bird);
void updateBird(Birdy *bird, TOUCH_STATE *tsc_state);
void initBird(Birdy *bird);

#endif
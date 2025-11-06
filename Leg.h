#ifndef LEG_H
#define LEG_H

struct Leg {
  int tibia, femur, coxa;
  int offTibia, offFemur, offCoxa;
  float yGround;
};

extern Leg leg1, leg2, leg3;

void gotoLeg(Leg &leg, float x, float y, float z);
void legPath(Leg &leg, float phase);

#endif

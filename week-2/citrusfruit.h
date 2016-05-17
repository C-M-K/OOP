#ifndef CITRUSFRUIT_H
#define CITRUSFRUIT_H

#include <string>

class CitrusFruit{
protected:
float ph;
public:
CitrusFruit(float ph) : ph(ph){}
const char * getName();
float getPh();
};

#endif
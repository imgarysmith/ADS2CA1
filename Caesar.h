// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

/*******************************************************************************
 *    Title: Rosetta Code
 *    Author: Rosetta Code
 *    Date: 15 March 2014
 *    Code version: 1
 *    Availability: http://rosettacode.org/wiki/Caesar_cipher#C.2B.2B
 *
 *******************************************************************************/

#ifndef ADS2CA1_Caesar_h
#define ADS2CA1_Caesar_h

#include <iostream>
using namespace std;

class Caesar {
public:
  Caesar();
private:
  int shift;
  string encryptedText = "";
};

#endif

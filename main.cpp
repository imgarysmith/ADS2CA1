// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#include "Encode.h"
#include <iostream>
using namespace std;

void countFrequency();

int main() {

  Encode encodeFile = *new Encode();
  encodeFile.countFrequency();

  return 0;
}

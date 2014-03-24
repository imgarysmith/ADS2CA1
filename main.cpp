// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#include "CharFreq.h"
#include <iostream>
using namespace std;

void countFrequency();

int main() {

  CharFreq freq = *new CharFreq();
  freq.countFrequency();

  return 0;
}

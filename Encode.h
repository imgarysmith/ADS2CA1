// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#ifndef __ADS2CA1__Encode__
#define __ADS2CA1__Encode__

#include <iostream>
using namespace std;

class Encode {
public:
  // Bool to check if file has text
  bool fileInput();
  void countFrequency();
  void createFrequencyMap();
  void createTree();
};

#endif /* defined(__ADS2CA1__Encode__) */

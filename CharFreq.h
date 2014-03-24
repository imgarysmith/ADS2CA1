// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#ifndef __ADS2CA1__CharFreq__
#define __ADS2CA1__CharFreq__

#include <iostream>
#include <map>
using namespace std;

class CharFreq {
public:
  // Constructor
  CharFreq();
  // Count frequency of each letter in file
  void countFrequency();
  // Print frequency map
  void printMap();
private:
  // Map of frequencies
  // Set spaces as -1 so counter for number of spaces is correct
  map <char, int> freqMap = {{' ',-1}};
};

#endif /* defined(__ADS2CA1__CharFreq__) */

// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#ifndef __ADS2CA1__Encode__
#define __ADS2CA1__Encode__

#include <iostream>
#include <map>
using namespace std;

class Encode {
public:
  // Constructor
  Encode();
  // Count frequency of each letter in file
  void countFrequency();
  void createFrequencyMap();
  void createTree();
private:
  // Map of frequencies
  map <char, int> freqMap = {{'A',0},{'a',0},{'B',0},{'b',0},{'C',0},{'c',0},
    {'D',0},{'d',0},{'E',0},{'e',0},{'F',0},{'f',0},{'G',0},{'g',0},{'H',0},
    {'h',0},{'I',0},{'i',0},{'J',0},{'j',0},{'K',0},{'k',0},{'L',0},{'l',0},
    {'M',0},{'m',0},{'N',0},{'n',0},{'O',0},{'o',0},{'P',0},{'p',0},{'Q',0},
    {'q',0},{'R',0},{'r',0},{'S',0},{'s',0},{'T',0},{'t',0},{'U',0},{'u',0},
    {'V',0},{'v',0},{'W',0},{'w',0},{'X',0},{'x',0},{'Y',0},{'y',0},{'Z',0},
    {'z',0},{' ',0}};
};

#endif /* defined(__ADS2CA1__Encode__) */

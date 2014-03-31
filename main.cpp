// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#include "CharFreq.h"
#include "HuffmanCode.h"
#include <iostream>
using namespace std;

void countFrequency();

int main() {

  CharFreq freq = *new CharFreq();
  freq.countFrequency();
  freq.printMap();

  HuffmanCode* test = new HuffmanCode("this is an example of a huffman tree");
  test->displayTable();
  test->displayHuffmanTable();
  string code = test->getEncodedString();
  cout << "Encoded string: " << code << endl;
  cout << "Decoded string: " << test->decodeString(code) << endl;
  delete test;
  cin.get();

  return 0;
}

// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#include "HuffmanCode.h"
#include <iostream>
using namespace std;

void countFrequency();

int main() {

  HuffmanCode* test = new HuffmanCode();
  test->displayHuffmanTable();
  string code = test->getEncodedString();
  string decode = test->getEncodedString2();
  cout << "Encoded string: " << code << endl;
  cout << "Decoded string: " << test->decodeString(decode) << endl;
  delete test;

  return 0;
}

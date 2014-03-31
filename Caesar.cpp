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
#include "Caesar.h"
#include <iostream>
#include <fstream>
using namespace std;

char letterArr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
  'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

Caesar::Caesar() {
  shift = rand() % 26;
  ifstream in("poem.txt");
  // Store text from file
  string input((istreambuf_iterator<char>(in)),
               (istreambuf_iterator<char>()));
  // Print out text before encrypting
  cout << "No Encryption:\n" << input << endl;
  // Shift text
  for(char& c : input) {
    for (int i = 0; i < 25; i++) {
      if (tolower(c) == letterArr[i]) {
        int thisShift = (i + shift)%26;
        encryptedText += letterArr[thisShift];
      }
    }
  }
  cout << "Encryption:\n" << encryptedText << endl;
};

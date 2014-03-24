// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

/******************************************************************************
 *    Some code obtained from:
 *
 *    Title: C++ Tutorial #14, STL Maps (1)
 *    Author: zaychenok
 *    Date: 2008
 *    Code version: 1.0
 *    Availability: https://www.youtube.com/watch?v=yW9OQu2XNNA
 *
 ******************************************************************************/

#include "CharFreq.h"
#include <map>
#include <fstream>
#include <iostream>
using namespace std;

// Constructor
CharFreq::CharFreq() {

};

// Take input from file and count the frequency of each letter.
// Bool return true if file exists, returns false if file doesn't exist.
void CharFreq::countFrequency() {
  string inputText;
  ifstream inFile;

  // Open File
  inFile.open("test.txt");
  // Check file exists
  if (!inFile) {
    cout << "Can't open file.";
    //return false;
  }

  // While text still in file
  while (inFile >> inputText) {
    // For every character in the word
    for (char& nextChar : inputText) {
      freqMap[nextChar] += 1;
    }
    // For every new word, increase space count by 1
    freqMap[' '] += 1;
  }

  // Print out frequencies
  for (map <char, int> :: const_iterator i = freqMap.begin();
       i != freqMap.end(); ++i) {
    cout << i->first << " : " << i->second << endl;
  }

  // Close
  inFile.close();

  //return true;
};
// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#include "Encode.h"
#include <map>
#include <fstream>
#include <iostream>
using namespace std;

// Constructor
Encode::Encode() {

};

// Take input from file and count the frequency of each letter.
// Bool return true if file exists, returns false if file doesn't exist.
void Encode::countFrequency() {
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
  }

  // Print out frequencies
  for (int i = 0; i < freqMap.size(); i++) {
    cout << freqMap[i] << endl;
  }

  // Close
  inFile.close();

  //return true;
};
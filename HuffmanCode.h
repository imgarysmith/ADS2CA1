#ifndef HUFFMANCODE_H
#define HUFFMANCODE_H
#include <string>
#include <map>
#include "BinaryHeap.h"
#include <queue>
using namespace std;

class HuffmanCode{
private:
	string data;
	string encodedData;
  string encodedData2;
	BinaryHeap* heap;
	map<char, int> frequencyTable;
	map<char, string> huffmanTable;
	void buildHeap();
	void getHuffmanEncoding(HuffmanNode*, string);
	void encode();
  map <char, int> freqMap = {{' ',-1}};
  priority_queue <HuffmanNode> priQ;
public:
	HuffmanCode();
	string getSourceString()						{return data;};
	string getEncodedString()						{return encodedData;};
	string getEncodedString2()					{return encodedData2;};
	void displayTable();
	void displayHeap();
	void displayHuffmanTable();
	string decodeString(string);
  void countFrequency();
  void printMap();
  void buildQueue();
};
#endif

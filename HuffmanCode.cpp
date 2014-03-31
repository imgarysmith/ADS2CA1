// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#include "HuffmanCode.h"
#include <iostream>
#include <utility>
#include <fstream>
#include <queue>
#include "TreeNode.h"
using namespace std;

HuffmanCode::HuffmanCode(){
	encodedData = "";
	countFrequency();
	buildHeap();
}

void HuffmanCode::countFrequency() {
  string inputText;
  ifstream inFile;

  // Number of characters in file
  int fileLength = 0;

  // Open File
  inFile.open("test.txt");
  // Check file exists
  if (!inFile) {
    cout << "Can't open file.";
  }

  // While text still in file
  while (inFile >> inputText) {
    // For every character in the word
    for (char& nextChar : inputText) {
      freqMap[nextChar] += 1;
      fileLength++;
      data += nextChar;
    }
    // For every new word, increase space count by 1
    freqMap[' '] += 1;
    data += " ";
  }

  // Print out frequency map
  cout << "Frequency Map: " << endl;
  for (map <char, int> :: const_iterator i = freqMap.begin();
       i != freqMap.end(); ++i) {
    cout << i->first << " : " << i->second << endl;
  }
  cout << endl;

  // Create heap with length of text
  heap = new BinaryHeap(fileLength);

  // Close
  inFile.close();
};

void HuffmanCode::buildQueue() {
  // Add items to queue
  for(map <char,int> :: const_iterator it = freqMap.begin();
      it != freqMap.end(); ++it){
    priQ.push(TreeNode(it->first, it->second));
  }
};

void HuffmanCode::buildHeap(){
  //fill heap
  for(map<char,int>::iterator it = freqMap.begin();
      it != freqMap.end(); ++it){
    heap->insert(new HuffmanNode(it->first, it->second));
  }
  //pop off two at a time until you get one left
  while(!heap->isEmpty()){
    if(heap->getHeapSize() == 1) break;
    HuffmanNode* left = heap->removeMin();
    HuffmanNode* right = heap->removeMin();
    heap->insert(new HuffmanNode(left, right));
  }
  //final one is the root of your encoding tree
  string code = "";
  getHuffmanEncoding(heap->getRoot(), code);
  encode();
}

void HuffmanCode::getHuffmanEncoding(HuffmanNode* root, string code){
	if(root->getLeft() == NULL){
		root->setHuffmanCode(code);
		huffmanTable.insert(pair<char, string>(root->getLetter(), code));
		return;
	}
	else{
		getHuffmanEncoding(root->getLeft(), code+"0");
		getHuffmanEncoding(root->getRight(), code+"1");
	}
}

void HuffmanCode::displayHuffmanTable(){
	cout << "Huffman Table: " << endl;
	for(map<char,string>::iterator it = huffmanTable.begin();
      it != huffmanTable.end(); ++it){
    cout << it->first << " : " << it->second << endl;
	}
}

void HuffmanCode::encode(){
	for(size_t i = 0; i < data.length(); i++){
		encodedData.append(huffmanTable[data.at(i)]);
    encodedData2.append(huffmanTable[data.at(i)]);
		encodedData2.append(" ");
	}
  // Write to file
  ofstream fileOut;
    fileOut.open ("encoded.txt");
    fileOut << encodedData;
    fileOut.close();
}

string HuffmanCode::decodeString(string src){
	string info = "";
	size_t lastBlock = 0;
	for(size_t i = 0; i < src.length(); i++){
		if (src.at(i) == ' '){
			string temp = src.substr(lastBlock, i-lastBlock);
			lastBlock = i+1;
			for(map<char,string>::iterator it = huffmanTable.begin();
          it != huffmanTable.end(); ++it){
        if (it->second == temp){
          info += (it->first);
          break;
        }
			}
		}
	}
  // Write to file
  ofstream fileOut;
  fileOut.open ("decoded.txt");
  fileOut << info;
  fileOut.close();
	return info;
}

void HuffmanCode::displayHeap(){
	heap->inOrderTraversal();
}

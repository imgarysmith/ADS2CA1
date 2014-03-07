// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#ifndef __ADS2CA1__Tree__
#define __ADS2CA1__Tree__

#include <iostream>
using namespace std;

class Tree {
public:
  void sortQueue();
  void buildTree();
  void treeTraversal();
  void decodeTree();
private:
  string priorityQueue;
  string traversalMap;
};

#endif /* defined(__ADS2CA1__Tree__) */

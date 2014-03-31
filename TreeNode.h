// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

#ifndef __ADS2CA1__TreeNode__
#define __ADS2CA1__TreeNode__

#include <iostream>
using namespace std;

class TreeNode {
  friend class HuffmanCode;
public:
  TreeNode(char letter, int freq);
  bool isLeaf();
private:
  TreeNode *leftPtr;
  TreeNode *rightPtr;
};

#endif /* defined(__ADS2CA1__TreeNode__) */

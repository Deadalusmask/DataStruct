#include <iostream>
#include "tree.h"

using namespace std;

int main() {
    tree tr = tree();
    int in[100]={9,7,14,3,8,13,6,0,0,3};
    tr.InitTree(in);

    tr.preOrderTraverse();
    tr.inOrderTraverse();
    tr.postOrderTraverse();

    tr.locateTree(1);
    tr.nLeaves();

    tr.printTree();
    return 0;
}
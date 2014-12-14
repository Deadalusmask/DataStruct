#pragma once

#include <iostream>
using namespace std;

class tree{
private:
    int data;
    tree *right;
    tree *left;
    tree *parent;
    int  leaveNum;
private:
    int create(tree *tr, int *in, int index, tree *parent);
    void postOrderTraverse(tree *p);
    void inOrderTraverse(tree *p);
    void preOrderTraverse(tree *p);
    int locate(int index,tree*);
public:
    tree();
    int InitTree(int *in);
    void preOrderTraverse();
    void inOrderTraverse();
    void postOrderTraverse();
    int locateTree(int);
    void nLeaves();
};





#include "tree.h"

tree::tree() {
    data = -1;
    left = NULL;
    right = NULL;
    parent = NULL;
    leaveNum = 0;
}

int tree::InitTree(int *in) {
    data = in[0];
    parent = NULL;
    left = new tree();
    right = new tree();
    create(left, in, 1, this);
    create(right, in, 2, this);
    return 0;
}

int tree::create(tree *tr, int *in, int index, tree *par) {
    if (in[index]) {
        tr->data = in[index];
        tr->parent = par;
        tr->left = new tree();
        tr->right = new tree();
        create(tr->left, in, index * 2 + 1, tr);
        create(tr->right, in, index * 2 + 2, tr);
    } else {
        if (index % 2) {
            par->left = NULL;
            delete tr;
        }
        else {
            par->right = NULL;
            delete tr;
        }
    }
    return 0;
}

void tree::nLeaves() {
    cout << "\nLeaves number : " << leaveNum << endl;
}

void tree::preOrderTraverse(tree* p){
    if (p->data) cout << p->data << " ";
    if (p->left) preOrderTraverse(p->left);
    if (p->right) preOrderTraverse(p->right);
    if (p->left == NULL && p->right == NULL) leaveNum++;
}

void tree::inOrderTraverse(tree* p){
    if (p->left) inOrderTraverse(p->left);
    if (p->data) cout << p->data << " ";
    if (p->right) inOrderTraverse(p->right);
    if (p->left == NULL && p->right == NULL) leaveNum++;
}

void tree::postOrderTraverse(tree* p){
    if (p->left) postOrderTraverse(p->left);
    if (p->right) postOrderTraverse(p->right);
    if (p->data) cout << p->data << " ";
    if (p->left == NULL && p->right == NULL) leaveNum++;
}

int tree::locateTree(int i) {
    cout << "The " << i << "th number : " << locate(i, this);
    return 0;
}

int locateCurr = 0;
int locateResult;

int tree::locate(int index, tree *p) {
    locateCurr++;
    if (locateCurr == index) {
        locateResult = p->data;
        return locateResult;
    }
    if (p->left) locate(index, p->left);
    if (p->right)locate(index, p->right);
    return locateResult;
}

void tree::preOrderTraverse() {
    leaveNum=0;
    cout<<"preOrder Traverse\t";
    preOrderTraverse(this);
    cout<<endl;
}

void tree::inOrderTraverse() {
    leaveNum=0;
    cout<<"InOrder Traverse\t";
    inOrderTraverse(this);
    cout<<endl;

}

void tree::postOrderTraverse() {
    leaveNum=0;
    cout<<"postOrder Traverse\t";
    postOrderTraverse(this);
    cout<<endl;
}

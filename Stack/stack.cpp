#include "stack.h"
#include <iostream>
#include <iomanip>

using namespace std;
stack::stack() {
    elem = new int[STACK_INIT_SIZE];
    elem2= new int[STACK_INIT_SIZE];
    top=0;
    depth=STACK_INIT_SIZE;
}

int stack::ensure(int i) {
    if(i>=depth){
        delete[] elem;
        depth+=STACK_INCREMEMT;
        elem=new int[depth];
        elem2=new int[depth];
    }
    return 0;
}

int stack::push(int x,int y) {
    ensure(top+1);
    top++;
    elem[top]=x;
    elem2[top]=y;
    return x+y;
}

int stack::pop() {
    int re1 = elem[top];
    int re2 = elem2[top];
    elem[top]=-1; elem2[top]=-1;
    top--;
    return re1+re2;
}

int stack::length() {
    return top;
}

int stack::print() {
    for (int i = top; i >0; --i) {
        cout<<setw(5)<<elem[i]<<" ";
    }
    cout<<endl;
    for (int i = top; i >0; --i) {
        cout<<setw(5)<<elem2[i]<<" ";
    }
    cout<<endl;
    return 0;
}

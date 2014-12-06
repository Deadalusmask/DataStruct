#pragma once
const int STACK_INIT_SIZE =100;
const int STACK_INCREMEMT =10;
class stack
{
private:
    int top;
    int depth;
    int *elem ,*elem2;
public:
    stack();
    int ensure(int i);
    int length();
    int pop();
    int push(int m,int n);
    int print();
};


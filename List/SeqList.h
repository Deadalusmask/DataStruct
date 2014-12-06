#pragma once
const int LIST_INIT_SIZE = 100;
const int LISTI_NCREMENT = 10; //步增值
class SeqList{
private:
	int *elem;
	int length;		//当前长度
	int listsize;	//表长
public:
	SeqList();
	int InitElem(int* in, int length);
	int Insert(int x);
	int ensure(int i);
	void print();
	void Reverse();
};
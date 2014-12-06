#pragma once
class LinkList
{
private:
	int data;
	LinkList* next;
public:
	LinkList();
	LinkList(int data);
	void setNext(LinkList* next);
	void print();
	int InitElem(int* in, int length);
	int Insert(int x);
	void Reverse();
	int Length();
friend LinkList merge(LinkList listA, LinkList listB);
};


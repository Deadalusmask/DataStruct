#include "LinkList.h"
#include <iostream>
using namespace std;

LinkList::LinkList()
{
}

LinkList::LinkList(int data): data(data)
{ 
	next = nullptr;
}

void LinkList::setNext(LinkList* next)
{
	this->next = next;
}

void LinkList::print()
{	
	LinkList *p = next;
	while (p)
	{
		cout << p->data << " ";
		p=p->next;
	}
	cout<<endl;
}

int LinkList::InitElem(int* in, int length)
{
	LinkList *p =this;
	for (int i = 0; i<length; i++)
	{
		LinkList *temp = new LinkList(in[i]);
		p->setNext(temp);
		p = p->next;
	}
	return 0;
}

int LinkList::Insert(int x)
{
	LinkList *p = next,*q=p;
	while (p){
		if (x>=q->data && x<p->data){
			LinkList *temp = new LinkList(x);
			q->setNext(temp);
			temp->setNext(p);
			return 0;
		}else{
			q=p;
			p=p->next;
		}
	}
	return 1;
}

void LinkList::Reverse()
{
	//就地逆置
	LinkList *p,*q;
	p=next;
	setNext(NULL);
	while(p){
		q=p->next;
		p->setNext(next);
		setNext(p);
		p=q;
	}
}

int LinkList::Length()
{
	int length=0;
	LinkList *p =next;
	while(p){
		p=p->next;
		length++;
	}
	return length;
}

LinkList merge(LinkList listA, LinkList listB)
{
	LinkList result,*p,*a,*b;
	p=&result;a=&listA;b=&listB;
	a=a->next;b=b->next;
	while(a && b){
		if (a->data<=b->data){
			p->setNext(a);
			p=p->next;
			a=a->next;
		}else{
			p->setNext(b);
			p=p->next;
			b=b->next;
		}
	}
	if (a){
		p->setNext(a);
	} else{
		p->setNext(b);
	}
	return result;
}

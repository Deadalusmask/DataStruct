// main.cpp
// 数据结构-习题练习 2 线性表
//2.11,2.14,2.21,2.22,2.24


#include <iostream>
using namespace std;
#include "SeqList.h"
#include "LinkList.h"
int main(int argc,char* argv[])
{
	//SeqList show
	SeqList *list = new SeqList();
	int ar[] = { 1,2,3,4,5,6,8,9,10,11,12,13,15,16 };
	list->InitElem(ar, 14);
	list->print();
	//Insert Demo
	list->Insert(7);
	list->Insert(14);
	list->print();
	//Reverse Demo
	list->Reverse();
	list->print();

	//LinkList show
	LinkList *head = new LinkList();
	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 15, 16 };
	head->InitElem(arr, 14);
	head->print();
	cout<<head->Length()<<endl;
	//Insert Demo
	head->Insert(7);
	head->Insert(14);
	head->print();
	cout<<head->Length()<<endl;
	//Reverse Demo
	head->Reverse();
	head->print();
	cout<<head->Length()<<endl;

	//Merge Demo
	int arr1[]={1,1,5,7,9};
	int arr2[]={1,4,6,8,10,12,23,25,34,56};
	LinkList list1,list2,list3;
	list1.InitElem(arr1,5);
	list2.InitElem(arr2,10);
	list3= merge(list1, list2);
	list3.print();

	return 0;
}


#include "SeqList.h"
#include <iostream>
using namespace std;

::SeqList::SeqList()
{
	elem = new int[LIST_INIT_SIZE];
	length = 0;
	listsize = LIST_INIT_SIZE;
}

int SeqList::InitElem(int* in, int leng)
{
	ensure(leng);
	for (int i = 0; i < leng; i++)
	{
		elem[i] = in[i];
	}
	length = leng;
	return 0;
}

int SeqList::ensure(int i) {
	if(i>=listsize){
		delete[] elem;
		listsize+=LISTI_NCREMENT;
		elem=new int[listsize];
	}
	return 0;
}

int ::SeqList::Insert(int x)
{
	ensure(length+1);
	int i;
	for (i = length - 1; i >= 0; i--)
	if (elem[i]>x)
	{
		elem[i + 1] = elem[i];
	}
	else break;
	length += 1;
	elem[i + 1] = x;
	return 0;
}

void SeqList::print()
{
	for (int i = 0; i < length; i++)
	{
		cout << elem[i] << " ";
	}
	cout << endl;
}

void SeqList::Reverse()
{
	//就地逆置
	for (int i = 0; i < length / 2; i++)
	{
		elem[i] = elem[length - i - 1] + elem[i];
		elem[length - i - 1] = elem[i] - elem[length - i - 1];
		elem[i] = elem[i] - elem[length - i - 1];
	}
}


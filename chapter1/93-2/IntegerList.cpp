#include <iostream>
using namespace std;

#include "IntegerList.h"

IntegerList::IntegerList(int cap)
{
	capacity=cap;
	list=new int[capacity];
	cout<<"Please input your integer list : ";
	for(int i=0;i<capacity;++i)
		cin>>list[i];
}
IntegerList::~IntegerList()
{
	delete [] list;
}
int IntegerList::calInterList(IntegerList b)
{
	int aPos=0,bPos=0;
	int result=0;
	while ((aPos<capacity)&&(bPos<b.capacity))
	{
		if(list[aPos]==b.list[bPos])
		{aPos++;bPos++;}
		else if (list[aPos]<b.list[bPos])
		{
			result=-1;
			break;
		}
		else
		{
			result=1;
			break;
		}
	}
	if(result==0)
	{
		if(aPos==capacity&&bPos<b.capacity)
			return -1;
		else if(aPos<capacity&&bPos==b.capacity)
			return 1;
	}
	return result;
}
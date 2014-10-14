#ifndef INTEGERLIST_H
#define INTEGERLIST_H

class IntegerList
{
public:
	IntegerList(int );
	int calInterList(IntegerList );
	~IntegerList();
private:
	int *list;
	int capacity;
};

#endif
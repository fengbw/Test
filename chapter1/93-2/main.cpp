#include <iostream>
#include <cstdlib>
using namespace std;

#include "IntegerList.h"

int main()
{
	int cap1,cap2;
	cout<<"Please input the capacity of first array :";
	cin>>cap1;
	IntegerList a(cap1);
	cout<<"Please input the capacity of second array :";
	cin>>cap2;
	IntegerList b(cap2);
	switch(a.calInterList(b))
	{
	case -1:
		cout<<"the first array is smaller than the second one"<<endl;
		break;
	case 0:
		cout<<"the first array equals the second one"<<endl;
		break;
	case 1:
		cout<<"the first array is bigger than the second one"<<endl;
		break;
	}
	system("pause");
	return 0;
}
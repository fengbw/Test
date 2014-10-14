#include <iostream>
#include <cstdlib>
using namespace std;

#include "Polynomial.h"

int main()
{
	int size;
	cout<<"Please input the size of polynomial : ";
	cin>>size;
	Polynomial a(size);
	cout<<"Please input the value : ";
	float value;
	cin>>value;
	cout<<"The value of polynomial is : "<<a.Eval(value)<<endl;
	system("pause");
	return 0;
}
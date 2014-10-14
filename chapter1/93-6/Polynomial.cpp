#include <iostream>
using namespace std;

#include "Polynomial.h"

Polynomial::Polynomial(int d)
{
	capacity=d;
	terms=0;
	termArray=new Term[capacity];
	cout<<"initialize the polynomial you want : "<<endl;
	for (int i=0;i<capacity;i++)
	{
		cout<<"for x^"<<i<<": ";
		cin>>termArray[i].coef;
		termArray[i].exp=i;
	}
	cout<<"the polynomial you want is : ";
	for(int i=0;i<capacity-1;++i)
	{
		cout<<termArray[i].coef<<"x^"<<termArray[i].exp<<"+";
	}
	cout<<termArray[capacity-1].coef<<"x^"<<termArray[capacity-1].exp<<endl;
	for (int i=0;i<capacity;++i)
	{
		if (termArray[i].coef!=0)
		++terms;
	}
}
Polynomial::~Polynomial()
{
	delete [] termArray;
}

float Polynomial::Eval(float f)
{
	float exp=1,result=0;
	int act=0,pos=0;
	while(pos<capacity&&act<terms)
	{
		if(termArray[pos].coef!=0)
			{
				result += termArray[pos].coef*exp;
				++act;
			}
		exp *=f;
		++pos;
	}
	return result;
}
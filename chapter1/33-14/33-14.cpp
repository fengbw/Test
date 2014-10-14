#include <iostream>
using namespace std;
void powerset (char* , int n );
void main()
{
	int size;
	cout<<"Please input the size of S : ";
	cin>>size;
	cout<<"Please input the elements of S : "<<endl;
	char *ele=new char[size];
	for(int i=0;i<size;i++)
	{
		cin>>ele[i];
	}
	cout<<"Powerset (S) : "<<endl;
	powerset(ele,size);
}
void powerset (char *str,int n)
{
	if(n==0)
	{
		cout<<str;
		cout<<endl;
	}
	else
	{
		powerset(str,n-1); 
		char *newStr=new char[n];
		for(int i=0;i<n;i++)
		{
			newStr[i]=' ';
		}
		strcpy(newStr,str);
		newStr[n-1]=' ';
		powerset(newStr,n-1);
	}
}
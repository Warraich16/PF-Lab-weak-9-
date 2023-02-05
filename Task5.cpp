#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"ENter number: ";
	cin >>number;
	int array[number];
	for (int i=0;i<number;i++)
	{
		cout <<"Enter element: ";
		cin >>array[i];
	}
	int number1;
	bool flag;
	cout <<"Enter another number: ";
	cin >>number1;
	for (int i=0;i<number;i++)
	{
		if (array[i]=number1)
		{
			flag=true;
		}
		
	}
	if (flag==true)
	{
		cout <<"Number exits:";
	}
	else 
	{
	
	cout <<"Not exist:";
}
}

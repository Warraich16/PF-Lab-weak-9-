#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"ENter number: ";
	cin >>number;
	int array[number];
	for (int i=number;i>=0;i--)
	{
		cout <<"Enter element: ";
		cin >>array[i];
		
	}
	for (int i=0;i<=number;i++)
	{
	
	cout <<array[i]<<" ";
}
}

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"ENter number: ";
	cin >>number;
	int array[number];
	int smallest=100;
	for (int i=0;i<number;i++)
	{
		cout <<"Enter element: ";
		cin >>array[i];
		if(array[i]>smallest)	
		{
			smallest=array[i];
		}
		
	}
	cout <<smallest;
}

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"Enter a number :";
	cin >>number;
	int array[number];
	for (int i=0;i<number;i++)
	{
		cout <<"Enter element: ";
		cin >>array[i];
		
	}
	for (int i=0; i<number;i++)
	{
	  cout <<array[i]<<" ";
	  ;

    }
}

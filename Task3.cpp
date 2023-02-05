#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"ENter number: ";
	cin >>number;
	int array[number];
	int sum=0;
	int average;
	for (int i=0;i<number;i++)
	{
		cout <<"ENter element: ";
		cin >>array[i];
		sum=sum+array[i];
       	average=sum/array[i];		
	}
	cout <<sum<<endl;

	cout <<average;
	
	
}

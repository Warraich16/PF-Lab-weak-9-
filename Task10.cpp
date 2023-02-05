#include <iostream>
using namespace std;
int main()
{
	int resis;
	cout <<"Enter the number of resistors: ";
	cin >>resis;
	float array[resis];
	int sum=0;
	for (int i=0;i<resis;i++)
	{
		cout <<"Enter the valuecof resistance: ";
		cin>>array[i];
		sum=sum+array[i];
	}
	cout <<sum;
	
	
}

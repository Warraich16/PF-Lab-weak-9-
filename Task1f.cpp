#include <iostream>
using namespace std;
int main()
{
	int length;
	cout <<"Enter length of second array: ";
	cin>>length;
	int array1[1];
	int array2[length];
	int array3[1,length];
	for (int i =0;i<=1;i++)
	{
		cout <<"Enter elements of first array: "<<endl;
		cin >>array1[i];
	}
	for (int i =0;i<=length;i++)
	{
		cout <<"Enter elements of second array: "<<endl;
		cin >>array2[i];
	}
	
	
}

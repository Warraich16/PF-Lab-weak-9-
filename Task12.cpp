#include <iostream>
using namespace std;
int main()
{
	
    float quarter,dime,penny,nickel,item,sum;
	float array[4];
	for (int i=0;i<4;i++)
	{
		cout <<"ENter element: ";
		cin >>array[i];
	}
	quarter=array[0]*0.25;
	dime=array[1]*0.10;
	nickel=array[2]*0.05;
	penny=array[3]*0.01;
	sum = quarter+dime+nickel+penny;
	cout <<"Enter the bill of the item: ";
	cin >>item;
	if (item>sum)
	{
		cout <<"false";
		
	}
	else
	{
		cout <<"True";
	}

}

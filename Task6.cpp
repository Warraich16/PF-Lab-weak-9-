#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"ENter number: ";
	cin >>number;
	int array[number];

	int number1;
	cout <<"Enter another number :";
	cin>>number1;
	int result;
	for (int i=0;i<number;i++)
	{
		cout <<"Enter element:";
		cin >>array[i];
	
		
}
for (int i=0; i<number; i++)
{
	result=number1*array[i];
    cout <<result<<endl;	
}


}

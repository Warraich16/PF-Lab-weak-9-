#include <iostream>
using namespace std;
int main()
{
	string name;
	int a;
	cout <<"ENter name: ";
	getline(cin,name);
	
	cout <<"The length of the string is, so it is  "<<name.size();
	a=name.size();
	if (a%2==0)
	cout <<" even";
	else 
	cout <<" odd";
}

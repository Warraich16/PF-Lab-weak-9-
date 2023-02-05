#include <iostream>
using namespace std;
int main()
{
	string name;
	cout <<"Enter name: ";
	getline(cin,name);
	
	int i=0;
	while(name[i]!='\0')
	{
		cout <<"The character at location "<< i <<" is "<<name[i]<<endl;
		i++;
	}

}

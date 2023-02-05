#include <iostream>
using namespace std;
int main()
{
	string word;
	cout <<"Enter word: ";
	getline(cin,word);
	
     int i=0,vowel=0;
	while(word[i]!='\0')
	{
		if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
		{
			vowel++;
		}
		i++;
	
	}
	cout <<vowel;
	
}

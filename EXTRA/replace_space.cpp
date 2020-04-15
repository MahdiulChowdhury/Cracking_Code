#include <iostream>
#include <string>

using namespace std; 

void replaceSpaces(string cha,int len);

int main () 
{
	string cha = "Mr John Smith    "; 
	int len = 0.0;
	len = cha.length(); 
	cout<<"length of the string:"<< len << endl; 
	replaceSpaces(cha,len);

	return 0; 
}

void replaceSpaces(string cha,int len)
{
	//char str [len] = cha;
	int spaceCount = 0, index, i = 0; 
	for (int i = 0; i<len; i++)
	{
		if (cha[i] == ' ')
		{
			spaceCount ++; 
		}
	}
	cout << "spaceCount:"<< spaceCount << endl; 
	cout << "len:" << len<<endl; 
	index = len + spaceCount*2; 
	cout << "index:"<<index<<endl; 
	if (len < cha.length())
		cha[len] = '\0';

	for (i = len - 1; i>= 0; i--)
	{
		if (cha[i] == ' ')
		{
			cha[index -1] = '0';
			cha[index -2] = '2';
			cha[index -3] = '%';
			index = index - 3; 
		}
		else 
		{
			cha [index -1] = cha[i];
			index--; 
		}
	}

	cout<<"string:"<<cha<<endl; 
}
#include <iostream>
#include <string>
#include <cstring>


using namespace std; 





int main() 
{

	string word_one = "stringel";
	int size = word_one.length(); 
	char word_two[size]={};
	string reverse = word_one;
	char i ; 
	//reversing the string and store it. 
	for (i =0; word_one[i] !='\0';  i++)
	{
		//cout <<"dss"<<endl;
		word_two[i]=word_one[i]; 
		
	}
	word_two[i]='\0';
	cout<<"copy:" <<word_two; 
	cout<<endl;


	for (int j = size; j>=0;  j--)
	{
		reverse[size-j]=word_one[j]; 
		
	}
	cout <<reverse; 
	cout<<endl;


	/*for (int i =0; i<size;i++)
	{
		if (reverse[i]!=word_two[i])
		{
			cout<<"not a palindrome";
		}
	}
	cout<<"palindrom"<<endl; */

	return 0; 

}
#include<iostream> 
#include<string> 
#include<vector> 
#include <bits/stdc++.h>

using namespace std; 


int main()
{
	vector<string> parsing; 
	string message = "Demo went well 2019";
	string word;
    string cmp = "2019";
    
	for (int x = 0; x<message.length(); x++)
	{
		if ( message[x] == ' ')
		{

			cout<<"message one ="<<word <<endl;
			parsing.push_back(word);
			word ="";
		}
		else 
		{
			word = word+message[x];
		}
	} 

	cout<<"message two ="<<word <<endl;
	//word = 
	parsing.push_back(word);
    string str= parsing[3];
	cout<<"size of cmp "<<cmp.length()<<endl; 
	cout<<"size of vector string "<<str.length()<<endl; 

	if(str.compare(cmp) == 0)
	
	{
		cout<<"Lal Rani"<<endl; 
	}
	else 
		cout<<"They are not equal"<<endl; 

	string year_2019 = parsing[3];
	int year = atoi (year_2019.c_str());
	cout<<"year as integer " << year << endl; 
	return 0; 
}
 
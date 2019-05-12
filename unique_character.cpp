#include <iostream>
#include <string>

using namespace std; 


int main() 
{
	//string cha = "abcdd";
	string cha = "abc";
	int index = 0; 
	int index_two = 0;
	int a = 0; 
	
	//cout << "lenght of string:" << cha.length() <<endl; 
	for (index; index<cha.length()-1; index++)
	{
		for (index_two = index+1;index_two<cha.length(); index_two++)
		{
			//cout <<"index one:"<<cha[index]<<endl; 
			//cout <<"index two:"<<cha[index_two]<<endl;
			if (cha[index] != cha[index_two]) 
			{
				 continue;
			}
			if  (cha[index] == cha[index_two])
			{
				 cout<<"not a unique string"<<endl;
				 return 0; 
			}
			
		}
		
	}
	cout<< "unique string"<<endl; 
	

	return 0; 
}
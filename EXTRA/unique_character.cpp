#include <iostream>
#include <string>

using namespace std; 
bool isUniqueChars(string cha);


int main() 
{
	//string cha = "abcdd";
	string cha = "abcdd";
	int index = 0; 
	int index_two = 0;
	//int a = 0; 
	bool a = true; 
	
	//cout << "lenght of string:" << cha.length() <<endl; 
	/*for (index; index<cha.length()-1; index++)
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
	cout<< "unique string"<<endl; */
	
	//method 2
	a = isUniqueChars(cha);
	if (a == false)
	{
		cout<<"Not a unique string"<<endl;
	}
	else 
		cout<<"unique string"<<endl; 


	return 0; 
}

bool isUniqueChars(string cha)
{
	if(cha.length() > 128) //there are 128 unique chars 
		return false; 
	bool *char_set = new bool [128];
	for (int i =0; i<cha.length(); i++)
	{
		int val = cha.at(i); 
		if (char_set[val]) //already found not unique 
		{
			return false;
		}
		char_set [val] = true; 
	}
	return true; 
}
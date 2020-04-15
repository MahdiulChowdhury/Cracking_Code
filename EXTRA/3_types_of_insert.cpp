#include <iostream>
#include <string>

using namespace std; 


bool oneEditAway (string one, string two);
bool oneEditReplace(string, string);
bool oneEditInsert (string s1, string s2);
int main () 
{
	bool result; 
	string one = "aple";
	string two = "apple"; 
	result = oneEditAway(one,two);

	if (result == true) 
	{
		cout<<"one edit away"<<endl; 
	}
	else 
		cout << "false" << endl; 

	return 0; 
}

bool oneEditAway(string one, string two)
{
	if (one.length() == two.length()) 
	{
		return oneEditReplace(one,two);
	}
	else if (one.length() +1 == two.length())
	{
		cout<<"Test one"<<endl; 
		return oneEditInsert (one,two); 
	}
	else if (one.length() -1 == two.length())
	{

		return oneEditInsert (two,one); 
	}
}

bool oneEditReplace (string s1, string s2)
{
	bool foundDifference = false; 
	for(int i =0; i<s1.length(); i++)
	{
		if(s1[i] != s2[i])
		{
			if (foundDifference)
			{
				return false; 
			}
			foundDifference = true; 
		}

	}

	return foundDifference; 
}

bool oneEditInsert (string s1, string s2)
{
	int index1 = 0; 
	int index2 = 0; 
	while (index2 < s2.length() && index1 < s1.length())
	{
		if (s1[index1] != s2[index2])
		{
			if (index1 != index2)
			{
				return false; 
			}
			index2++;
		}
		else 
			index2++; 
			index1++; 
	}
	return true; 
}
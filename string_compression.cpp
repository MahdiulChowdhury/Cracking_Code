#include <iostream>
#include <string>

using namespace std; 
string compressed(string word);
int main() 
{
	string word = "aabcccccaaa"; 
	//cout << word+"2"<<endl;
	string a = compressed(word);
	//cout<<"compressed string:"<< a << endl;  
	return 0; 
}

string compressed(string word)
{

	string compressedString = " ";
	int countConsecutive = 0; 
	string bol; 
	cout << "length of string:" << word.length()<<endl; 
	for (int i =0; i<word.length(); i++)
	{
		countConsecutive++; 
		if(word[i] != word[i+1])
		{
			cout << "compressedString:" << countConsecutive << endl; 
			bol = countConsecutive; 
			compressedString =  " "+word[i] + (bol); 
			countConsecutive = 0; 
		}
	}

	cout << "compressedString:"<<compressedString <<endl; 
	return compressedString.length() < word.length() ? compressedString:word; 
}
#include <iostream> 
#include <string> 




using namespace std; 

int binaryToDecimal(string n)
{
	string num = n; 
	int decimal_value = 0; 

	int base = 1; 

	int len = num.length(); 
	for(int i = len-1; i>= 0; i--)
	{
		if (num[i]=='1')
			decimal_value += base; 
		base = base*2; 
	}

	return decimal_value; 
}


int main() 
{
	string num = "10101001"; 
	cout<<binaryToDecimal(num)<<endl;


	return 0; 
}